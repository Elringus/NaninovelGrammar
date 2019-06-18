#include <tree_sitter/parser.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cwctype>
#include <cstring>
#include "tag.h"

namespace {

using std::vector;
using std::string;

enum TokenType {
    EXPRESSION
};

struct Scanner {
  Scanner() {}

  unsigned serialize(char* buffer) {
    uint16_t tag_count = tags.size() > UINT16_MAX ? UINT16_MAX : tags.size();
    uint16_t serialized_tag_count = 0;

    unsigned i = sizeof(tag_count);
    std::memcpy(&buffer[i], &tag_count, sizeof(tag_count));
    i += sizeof(tag_count);

    for (; serialized_tag_count < tag_count; serialized_tag_count++) {
      Tag& tag = tags[serialized_tag_count];
      if (tag.type == CUSTOM) {
        unsigned name_length = tag.custom_tag_name.size();
        if (name_length > UINT8_MAX) name_length = UINT8_MAX;
        if (i + 2 + name_length >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) break;
        buffer[i++] = static_cast<char>(tag.type);
        buffer[i++] = name_length;
        tag.custom_tag_name.copy(&buffer[i], name_length);
        i += name_length;
      } else {
        if (i + 1 >= TREE_SITTER_SERIALIZATION_BUFFER_SIZE) break;
        buffer[i++] = static_cast<char>(tag.type);
      }
    }

    std::memcpy(&buffer[0], &serialized_tag_count, sizeof(serialized_tag_count));
    return i;
  }

  void deserialize(const char* buffer, unsigned length) {
    tags.clear();
    if (length > 0) {
      unsigned i = 0;
      uint16_t tag_count, serialized_tag_count;

      std::memcpy(&serialized_tag_count, &buffer[i], sizeof(serialized_tag_count));
      i += sizeof(serialized_tag_count);

      std::memcpy(&tag_count, &buffer[i], sizeof(tag_count));
      i += sizeof(tag_count);

      tags.resize(tag_count);
      for (unsigned j = 0; j < serialized_tag_count; j++) {
        Tag &tag = tags[j];
        tag.type = static_cast<TagType>(buffer[i++]);
        if (tag.type == CUSTOM) {
          uint16_t name_length = static_cast<uint8_t>(buffer[i++]);
          tag.custom_tag_name.assign(&buffer[i], &buffer[i + name_length]);
          i += name_length;
        }
      }
    }
  }

  bool scan_expression(TSLexer* lexer, const bool* valid_symbols) {
    while (lexer->lookahead) {
      switch (lexer->lookahead) {
        case '\n':
        case '\r': return false;
        case '{': break;
        case '}':
          lexer->result_symbol = EXPRESSION;
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true;
        default: break;
      }
      lexer->advance(lexer, false);
    }

    return false;
  }

  bool scan(TSLexer* lexer, const bool* valid_symbols) {
    while (iswspace(lexer->lookahead)) {
      lexer->advance(lexer, true);
    }

    if (valid_symbols[EXPRESSION] && lexer->lookahead == '{')
      return scan_expression(lexer, valid_symbols);

    return false;
  }

  vector<Tag> tags;
};

}

extern "C" {

void* tree_sitter_naniscript_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_naniscript_external_scanner_scan(void* payload, TSLexer* lexer,
                                            const bool* valid_symbols) {
  Scanner* scanner = static_cast<Scanner*>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_naniscript_external_scanner_serialize(void* payload, char* buffer) {
  Scanner* scanner = static_cast<Scanner*>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_naniscript_external_scanner_deserialize(void* payload, const char* buffer, unsigned length) {
  Scanner* scanner = static_cast<Scanner*>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_naniscript_external_scanner_destroy(void* payload) {
  Scanner* scanner = static_cast<Scanner*>(payload);
  delete scanner;
}

}
