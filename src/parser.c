#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 133
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_SEMI = 1,
  aux_sym_comment_token1 = 2,
  anon_sym_GT = 3,
  aux_sym_define_key_token1 = 4,
  sym_define_value = 5,
  anon_sym_POUND = 6,
  anon_sym_AT = 7,
  sym_command_param_id = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_command_param_value_token1 = 10,
  aux_sym_command_param_value_token2 = 11,
  aux_sym_generic_text_token1 = 12,
  aux_sym_generic_text_token2 = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  sym_expression = 16,
  sym_error = 17,
  sym__hor_space = 18,
  sym__ver_space = 19,
  sym_script = 20,
  sym_line = 21,
  sym_comment = 22,
  sym_define = 23,
  sym_define_key = 24,
  sym_label = 25,
  sym_label_id = 26,
  sym_command = 27,
  sym_command_id = 28,
  sym_command_nameless_param = 29,
  sym_command_param = 30,
  sym_command_param_value = 31,
  sym_generic_text = 32,
  sym_inlined_command = 33,
  aux_sym_script_repeat1 = 34,
  aux_sym_command_repeat1 = 35,
  aux_sym_command_param_value_repeat1 = 36,
  aux_sym_command_param_value_repeat2 = 37,
  aux_sym_generic_text_repeat1 = 38,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_GT] = ">",
  [aux_sym_define_key_token1] = "define_key_token1",
  [sym_define_value] = "define_value",
  [anon_sym_POUND] = "#",
  [anon_sym_AT] = "@",
  [sym_command_param_id] = "command_param_id",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_command_param_value_token1] = "command_param_value_token1",
  [aux_sym_command_param_value_token2] = "command_param_value_token2",
  [aux_sym_generic_text_token1] = "generic_text_token1",
  [aux_sym_generic_text_token2] = "generic_text_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_expression] = "expression",
  [sym_error] = "error",
  [sym__hor_space] = "_hor_space",
  [sym__ver_space] = "_ver_space",
  [sym_script] = "script",
  [sym_line] = "line",
  [sym_comment] = "comment",
  [sym_define] = "define",
  [sym_define_key] = "define_key",
  [sym_label] = "label",
  [sym_label_id] = "label_id",
  [sym_command] = "command",
  [sym_command_id] = "command_id",
  [sym_command_nameless_param] = "command_nameless_param",
  [sym_command_param] = "command_param",
  [sym_command_param_value] = "command_param_value",
  [sym_generic_text] = "generic_text",
  [sym_inlined_command] = "inlined_command",
  [aux_sym_script_repeat1] = "script_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_param_value_repeat1] = "command_param_value_repeat1",
  [aux_sym_command_param_value_repeat2] = "command_param_value_repeat2",
  [aux_sym_generic_text_repeat1] = "generic_text_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_key_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_define_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_command_param_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_command_param_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_param_value_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_text_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [sym__hor_space] = {
    .visible = false,
    .named = true,
  },
  [sym__ver_space] = {
    .visible = false,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_define_key] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_label_id] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_id] = {
    .visible = true,
    .named = true,
  },
  [sym_command_nameless_param] = {
    .visible = true,
    .named = true,
  },
  [sym_command_param] = {
    .visible = true,
    .named = true,
  },
  [sym_command_param_value] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_text] = {
    .visible = true,
    .named = true,
  },
  [sym_inlined_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_script_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_param_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_param_value_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(3);
      if (lookahead == '"')
        ADVANCE(4);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(7);
      if (lookahead == '@')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym__hor_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym__ver_space);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '{')
        ADVANCE(13);
      if (lookahead == '}')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_define_key_token1);
      if (lookahead == ':')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_error);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_expression);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_command_param_id);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(17);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(7);
      if (lookahead == '@')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == '{')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__hor_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(21);
      if (lookahead == '\r')
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '\r')
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '\r')
        ADVANCE(22);
      if (lookahead == '{')
        ADVANCE(22);
      if (lookahead == '}')
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '\r')
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_generic_text_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_generic_text_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_generic_text_token1);
      if (lookahead == '}')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{')
        ADVANCE(11);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(13);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_define_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == ';')
        ADVANCE(6);
      if (lookahead == '>')
        ADVANCE(7);
      if (lookahead == '@')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(18);
      if (lookahead == '{')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(20);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(13);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(31);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(32);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == ']' ||
          lookahead == '}')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(31);
      if (lookahead == '\\')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == '\r')
        ADVANCE(34);
      if (lookahead == '\\')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == '\\')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == '\\')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == '\\')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(3);
      if (lookahead != 0)
        ADVANCE(13);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(13);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '"')
        ADVANCE(4);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead == ':')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '{' ||
          lookahead == '}')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '"')
        ADVANCE(4);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(40);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '\\')
        ADVANCE(45);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '"' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '}')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\r')
        ADVANCE(47);
      if (lookahead == '\\')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\')
        ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\')
        ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(47);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(3);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '"' ||
          lookahead == ':' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '}')
        ADVANCE(13);
      if (lookahead != 0)
        ADVANCE(40);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(13);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == ':')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(13);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(13);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '"')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(45);
      if (('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(46);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '"' ||
          lookahead == ':' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == '}')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 29},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 29},
  [9] = {.lex_state = 29},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 30},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 30},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 41},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 36},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 44},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 50},
  [47] = {.lex_state = 27},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 52},
  [54] = {.lex_state = 53},
  [55] = {.lex_state = 49},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 53},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 30},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 27},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 37},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 30},
  [69] = {.lex_state = 36},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 30},
  [75] = {.lex_state = 30},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 54},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 30},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 37},
  [83] = {.lex_state = 54},
  [84] = {.lex_state = 30},
  [85] = {.lex_state = 37},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 27},
  [89] = {.lex_state = 49},
  [90] = {.lex_state = 27},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 27},
  [93] = {.lex_state = 49},
  [94] = {.lex_state = 27},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 30},
  [97] = {.lex_state = 30},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 24},
  [100] = {.lex_state = 25},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 37},
  [104] = {.lex_state = 38},
  [105] = {.lex_state = 37},
  [106] = {.lex_state = 37},
  [107] = {.lex_state = 41},
  [108] = {.lex_state = 43},
  [109] = {.lex_state = 50},
  [110] = {.lex_state = 37},
  [111] = {.lex_state = 52},
  [112] = {.lex_state = 53},
  [113] = {.lex_state = 37},
  [114] = {.lex_state = 38},
  [115] = {.lex_state = 37},
  [116] = {.lex_state = 37},
  [117] = {.lex_state = 43},
  [118] = {.lex_state = 50},
  [119] = {.lex_state = 37},
  [120] = {.lex_state = 52},
  [121] = {.lex_state = 53},
  [122] = {.lex_state = 37},
  [123] = {.lex_state = 37},
  [124] = {.lex_state = 37},
  [125] = {.lex_state = 37},
  [126] = {.lex_state = 29},
  [127] = {.lex_state = 27},
  [128] = {.lex_state = 44},
  [129] = {.lex_state = 29},
  [130] = {.lex_state = 44},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 29},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__ver_space] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_define_key_token1] = ACTIONS(1),
    [sym_error] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_expression] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__hor_space] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_command_param_id] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_script_repeat1] = STATE(10),
    [sym_define] = STATE(11),
    [sym_script] = STATE(12),
    [sym_label] = STATE(11),
    [sym_generic_text] = STATE(11),
    [sym_line] = STATE(13),
    [sym_comment] = STATE(11),
    [sym_command] = STATE(11),
    [sym_inlined_command] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(11),
    [sym__hor_space] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
    [sym__ver_space] = ACTIONS(23),
  },
  [2] = {
    [sym_error] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(25),
  },
  [3] = {
    [sym_label_id] = STATE(17),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(27),
    [aux_sym_define_key_token1] = ACTIONS(29),
  },
  [4] = {
    [sym__hor_space] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(31),
  },
  [5] = {
    [sym_inlined_command] = STATE(4),
    [sym_define] = STATE(19),
    [sym_generic_text] = STATE(19),
    [sym_comment] = STATE(19),
    [sym_command] = STATE(19),
    [sym_label] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
    [sym__ver_space] = ACTIONS(35),
  },
  [6] = {
    [sym_command_id] = STATE(21),
    [sym_error] = ACTIONS(3),
    [aux_sym_define_key_token1] = ACTIONS(37),
  },
  [7] = {
    [aux_sym_generic_text_repeat1] = STATE(22),
    [sym_inlined_command] = STATE(22),
    [aux_sym_generic_text_token2] = ACTIONS(39),
    [sym__hor_space] = ACTIONS(41),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym__ver_space] = ACTIONS(31),
    [sym_expression] = ACTIONS(39),
  },
  [8] = {
    [sym_command_id] = STATE(23),
    [sym_error] = ACTIONS(3),
    [aux_sym_define_key_token1] = ACTIONS(45),
  },
  [9] = {
    [sym_define_key] = STATE(25),
    [sym_error] = ACTIONS(3),
    [aux_sym_define_key_token1] = ACTIONS(47),
  },
  [10] = {
    [aux_sym_script_repeat1] = STATE(27),
    [sym_define] = STATE(11),
    [sym_label] = STATE(11),
    [sym_generic_text] = STATE(11),
    [sym_line] = STATE(28),
    [sym_comment] = STATE(11),
    [sym_command] = STATE(11),
    [sym_inlined_command] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(11),
    [sym__hor_space] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
    [sym__ver_space] = ACTIONS(51),
  },
  [11] = {
    [sym__hor_space] = ACTIONS(53),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(55),
  },
  [12] = {
    [sym_error] = ACTIONS(57),
    [ts_builtin_sym_end] = ACTIONS(59),
  },
  [13] = {
    [sym_error] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__ver_space] = ACTIONS(35),
  },
  [14] = {
    [sym__hor_space] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(61),
  },
  [15] = {
    [sym_label_id] = STATE(30),
    [sym_error] = ACTIONS(3),
    [aux_sym_define_key_token1] = ACTIONS(29),
  },
  [16] = {
    [sym__hor_space] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(63),
  },
  [17] = {
    [sym__hor_space] = ACTIONS(65),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(65),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_POUND] = ACTIONS(67),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(69),
    [sym__hor_space] = ACTIONS(69),
    [anon_sym_AT] = ACTIONS(67),
    [aux_sym_generic_text_token1] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(67),
    [sym__ver_space] = ACTIONS(67),
  },
  [19] = {
    [sym__hor_space] = ACTIONS(71),
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(73),
  },
  [20] = {
    [sym__hor_space] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(75),
  },
  [21] = {
    [sym_command_param] = STATE(33),
    [aux_sym_command_repeat1] = STATE(33),
    [sym_command_nameless_param] = STATE(34),
    [sym__hor_space] = ACTIONS(77),
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(79),
  },
  [22] = {
    [aux_sym_generic_text_repeat1] = STATE(35),
    [sym_inlined_command] = STATE(35),
    [aux_sym_generic_text_token2] = ACTIONS(81),
    [sym__hor_space] = ACTIONS(83),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym__ver_space] = ACTIONS(85),
    [sym_expression] = ACTIONS(81),
  },
  [23] = {
    [sym_command_param] = STATE(37),
    [aux_sym_command_repeat1] = STATE(37),
    [sym_command_nameless_param] = STATE(38),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(89),
  },
  [24] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(91),
  },
  [25] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(93),
  },
  [26] = {
    [sym_inlined_command] = STATE(4),
    [sym_define] = STATE(19),
    [sym_generic_text] = STATE(19),
    [sym_comment] = STATE(19),
    [sym_command] = STATE(19),
    [sym_label] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
    [sym__ver_space] = ACTIONS(35),
  },
  [27] = {
    [aux_sym_script_repeat1] = STATE(27),
    [sym_define] = STATE(61),
    [sym_label] = STATE(61),
    [sym_generic_text] = STATE(61),
    [sym_line] = STATE(41),
    [sym_comment] = STATE(61),
    [sym_command] = STATE(61),
    [sym_inlined_command] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_POUND] = ACTIONS(100),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(103),
    [sym__hor_space] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(109),
    [aux_sym_generic_text_token1] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(118),
    [sym__ver_space] = ACTIONS(121),
  },
  [28] = {
    [sym_error] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym__ver_space] = ACTIONS(35),
  },
  [29] = {
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(73),
    [ts_builtin_sym_end] = ACTIONS(73),
  },
  [30] = {
    [sym__hor_space] = ACTIONS(124),
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(124),
  },
  [31] = {
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(126),
    [ts_builtin_sym_end] = ACTIONS(126),
  },
  [32] = {
    [sym_command_param_value] = STATE(44),
    [aux_sym_command_param_value_repeat2] = STATE(45),
    [sym_expression] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(132),
    [sym_command_param_id] = ACTIONS(134),
  },
  [33] = {
    [sym_command_param] = STATE(47),
    [aux_sym_command_repeat1] = STATE(47),
    [sym__hor_space] = ACTIONS(136),
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(138),
  },
  [34] = {
    [sym_command_param] = STATE(48),
    [aux_sym_command_repeat1] = STATE(48),
    [sym__hor_space] = ACTIONS(136),
    [ts_builtin_sym_end] = ACTIONS(138),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(138),
  },
  [35] = {
    [aux_sym_generic_text_repeat1] = STATE(35),
    [sym_inlined_command] = STATE(35),
    [aux_sym_generic_text_token2] = ACTIONS(140),
    [sym__hor_space] = ACTIONS(143),
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym__ver_space] = ACTIONS(145),
    [sym_expression] = ACTIONS(140),
  },
  [36] = {
    [sym__hor_space] = ACTIONS(150),
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(150),
  },
  [37] = {
    [sym_command_param] = STATE(78),
    [aux_sym_command_repeat1] = STATE(78),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(154),
  },
  [38] = {
    [sym_command_param] = STATE(50),
    [aux_sym_command_repeat1] = STATE(50),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(154),
  },
  [39] = {
    [sym_define_value] = ACTIONS(156),
    [sym_error] = ACTIONS(3),
  },
  [40] = {
    [sym_inlined_command] = STATE(59),
    [sym_define] = STATE(65),
    [sym_generic_text] = STATE(65),
    [sym_comment] = STATE(65),
    [sym_command] = STATE(65),
    [sym_label] = STATE(65),
    [anon_sym_SEMI] = ACTIONS(158),
    [anon_sym_POUND] = ACTIONS(160),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(164),
    [aux_sym_generic_text_token1] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(170),
    [sym__ver_space] = ACTIONS(35),
  },
  [41] = {
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(35),
  },
  [42] = {
    [sym_command_param_value] = STATE(52),
    [aux_sym_command_param_value_repeat2] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(128),
    [sym_expression] = ACTIONS(128),
  },
  [43] = {
    [aux_sym_command_param_value_repeat1] = STATE(54),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token1] = ACTIONS(172),
    [sym_expression] = ACTIONS(174),
  },
  [44] = {
    [sym__hor_space] = ACTIONS(176),
    [ts_builtin_sym_end] = ACTIONS(176),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(176),
  },
  [45] = {
    [aux_sym_command_param_value_repeat2] = STATE(55),
    [sym_expression] = ACTIONS(178),
    [sym__hor_space] = ACTIONS(180),
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(180),
    [aux_sym_command_param_value_token2] = ACTIONS(178),
  },
  [46] = {
    [sym_error] = ACTIONS(3),
    [sym_command_param_id] = ACTIONS(134),
  },
  [47] = {
    [sym_command_param] = STATE(47),
    [aux_sym_command_repeat1] = STATE(47),
    [sym__hor_space] = ACTIONS(182),
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(185),
  },
  [48] = {
    [sym_command_param] = STATE(47),
    [aux_sym_command_repeat1] = STATE(47),
    [sym__hor_space] = ACTIONS(136),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(187),
  },
  [49] = {
    [sym__hor_space] = ACTIONS(189),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(189),
  },
  [50] = {
    [sym_command_param] = STATE(78),
    [aux_sym_command_repeat1] = STATE(78),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(191),
  },
  [51] = {
    [sym__hor_space] = ACTIONS(193),
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(193),
  },
  [52] = {
    [sym__hor_space] = ACTIONS(195),
    [ts_builtin_sym_end] = ACTIONS(195),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(195),
  },
  [53] = {
    [anon_sym_DQUOTE] = ACTIONS(197),
    [sym_error] = ACTIONS(3),
  },
  [54] = {
    [aux_sym_command_param_value_repeat1] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [aux_sym_command_param_value_token1] = ACTIONS(199),
    [sym_error] = ACTIONS(3),
  },
  [55] = {
    [aux_sym_command_param_value_repeat2] = STATE(55),
    [sym__ver_space] = ACTIONS(201),
    [sym__hor_space] = ACTIONS(201),
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(203),
    [sym_expression] = ACTIONS(203),
  },
  [56] = {
    [sym__hor_space] = ACTIONS(206),
    [ts_builtin_sym_end] = ACTIONS(206),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(206),
  },
  [57] = {
    [sym__hor_space] = ACTIONS(208),
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(208),
  },
  [58] = {
    [aux_sym_command_param_value_repeat1] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [aux_sym_command_param_value_token1] = ACTIONS(212),
    [sym_error] = ACTIONS(3),
  },
  [59] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(31),
    [sym__ver_space] = ACTIONS(31),
  },
  [60] = {
    [aux_sym_generic_text_repeat1] = STATE(68),
    [sym_inlined_command] = STATE(68),
    [aux_sym_generic_text_token2] = ACTIONS(215),
    [sym__hor_space] = ACTIONS(41),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(217),
    [sym__ver_space] = ACTIONS(31),
    [sym_expression] = ACTIONS(215),
  },
  [61] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(219),
    [sym__ver_space] = ACTIONS(55),
  },
  [62] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(61),
    [sym__ver_space] = ACTIONS(61),
  },
  [63] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(63),
    [sym__ver_space] = ACTIONS(63),
  },
  [64] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(65),
    [sym__ver_space] = ACTIONS(65),
  },
  [65] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(221),
    [sym__ver_space] = ACTIONS(73),
  },
  [66] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
  },
  [67] = {
    [sym_command_param] = STATE(72),
    [aux_sym_command_repeat1] = STATE(72),
    [sym_command_nameless_param] = STATE(73),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(223),
    [sym__ver_space] = ACTIONS(79),
  },
  [68] = {
    [aux_sym_generic_text_repeat1] = STATE(74),
    [sym_inlined_command] = STATE(74),
    [aux_sym_generic_text_token2] = ACTIONS(225),
    [sym__hor_space] = ACTIONS(83),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(217),
    [sym__ver_space] = ACTIONS(85),
    [sym_expression] = ACTIONS(225),
  },
  [69] = {
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(73),
  },
  [70] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(124),
    [sym__ver_space] = ACTIONS(124),
  },
  [71] = {
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(126),
  },
  [72] = {
    [sym_command_param] = STATE(90),
    [aux_sym_command_repeat1] = STATE(90),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(227),
    [sym__ver_space] = ACTIONS(138),
  },
  [73] = {
    [sym_command_param] = STATE(79),
    [aux_sym_command_repeat1] = STATE(79),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(227),
    [sym__ver_space] = ACTIONS(138),
  },
  [74] = {
    [aux_sym_generic_text_repeat1] = STATE(74),
    [sym_inlined_command] = STATE(74),
    [aux_sym_generic_text_token2] = ACTIONS(229),
    [sym__hor_space] = ACTIONS(143),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(232),
    [sym__ver_space] = ACTIONS(145),
    [sym_expression] = ACTIONS(229),
  },
  [75] = {
    [aux_sym_generic_text_token2] = ACTIONS(150),
    [sym__hor_space] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(150),
    [sym__ver_space] = ACTIONS(150),
    [sym_expression] = ACTIONS(150),
  },
  [76] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(176),
  },
  [77] = {
    [aux_sym_command_param_value_repeat2] = STATE(83),
    [sym__hor_space] = ACTIONS(180),
    [anon_sym_RBRACK] = ACTIONS(180),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(237),
    [sym_expression] = ACTIONS(237),
  },
  [78] = {
    [sym_command_param] = STATE(78),
    [aux_sym_command_repeat1] = STATE(78),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(185),
  },
  [79] = {
    [sym_command_param] = STATE(90),
    [aux_sym_command_repeat1] = STATE(90),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(227),
    [sym__ver_space] = ACTIONS(187),
  },
  [80] = {
    [aux_sym_generic_text_token2] = ACTIONS(189),
    [sym__hor_space] = ACTIONS(242),
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym__ver_space] = ACTIONS(189),
    [sym_expression] = ACTIONS(189),
  },
  [81] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(193),
    [sym__ver_space] = ACTIONS(193),
  },
  [82] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(195),
    [anon_sym_RBRACK] = ACTIONS(195),
  },
  [83] = {
    [aux_sym_command_param_value_repeat2] = STATE(83),
    [sym__hor_space] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(244),
    [sym_expression] = ACTIONS(244),
  },
  [84] = {
    [aux_sym_generic_text_token2] = ACTIONS(206),
    [sym__hor_space] = ACTIONS(247),
    [ts_builtin_sym_end] = ACTIONS(206),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(206),
    [sym__ver_space] = ACTIONS(206),
    [sym_expression] = ACTIONS(206),
  },
  [85] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(208),
    [anon_sym_RBRACK] = ACTIONS(208),
  },
  [86] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(75),
    [sym__ver_space] = ACTIONS(75),
  },
  [87] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(150),
    [sym__ver_space] = ACTIONS(150),
  },
  [88] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(176),
    [sym__ver_space] = ACTIONS(176),
  },
  [89] = {
    [aux_sym_command_param_value_repeat2] = STATE(93),
    [sym_expression] = ACTIONS(249),
    [sym__hor_space] = ACTIONS(180),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(180),
    [aux_sym_command_param_value_token2] = ACTIONS(249),
  },
  [90] = {
    [sym_command_param] = STATE(90),
    [aux_sym_command_repeat1] = STATE(90),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(251),
    [sym__ver_space] = ACTIONS(185),
  },
  [91] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(189),
    [sym__ver_space] = ACTIONS(189),
  },
  [92] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(195),
    [sym__ver_space] = ACTIONS(195),
  },
  [93] = {
    [aux_sym_command_param_value_repeat2] = STATE(93),
    [sym__ver_space] = ACTIONS(201),
    [sym__hor_space] = ACTIONS(201),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(254),
    [sym_expression] = ACTIONS(254),
  },
  [94] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(206),
    [sym__ver_space] = ACTIONS(206),
  },
  [95] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(208),
    [sym__ver_space] = ACTIONS(208),
  },
  [96] = {
    [aux_sym_generic_text_token2] = ACTIONS(150),
    [sym__hor_space] = ACTIONS(235),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(150),
    [sym__ver_space] = ACTIONS(150),
    [sym_expression] = ACTIONS(150),
  },
  [97] = {
    [aux_sym_generic_text_token2] = ACTIONS(189),
    [sym__hor_space] = ACTIONS(242),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym__ver_space] = ACTIONS(189),
    [sym_expression] = ACTIONS(189),
  },
  [98] = {
    [aux_sym_generic_text_token2] = ACTIONS(206),
    [sym__hor_space] = ACTIONS(247),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(206),
    [sym__ver_space] = ACTIONS(206),
    [sym_expression] = ACTIONS(206),
  },
  [99] = {
    [sym_error] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(257),
  },
  [100] = {
    [sym_label_id] = STATE(64),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(259),
    [aux_sym_define_key_token1] = ACTIONS(261),
  },
  [101] = {
    [sym_command_id] = STATE(67),
    [sym_error] = ACTIONS(3),
    [aux_sym_define_key_token1] = ACTIONS(263),
  },
  [102] = {
    [sym_label_id] = STATE(70),
    [sym_error] = ACTIONS(3),
    [aux_sym_define_key_token1] = ACTIONS(261),
  },
  [103] = {
    [sym_command_param] = STATE(105),
    [aux_sym_command_repeat1] = STATE(105),
    [sym_command_nameless_param] = STATE(106),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(265),
  },
  [104] = {
    [sym_command_param_value] = STATE(76),
    [aux_sym_command_param_value_repeat2] = STATE(77),
    [sym_expression] = ACTIONS(267),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(271),
    [sym_command_param_id] = ACTIONS(273),
  },
  [105] = {
    [sym_command_param] = STATE(78),
    [aux_sym_command_repeat1] = STATE(78),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(275),
  },
  [106] = {
    [sym_command_param] = STATE(110),
    [aux_sym_command_repeat1] = STATE(110),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(275),
  },
  [107] = {
    [sym_define_value] = ACTIONS(277),
    [sym_error] = ACTIONS(3),
  },
  [108] = {
    [sym_command_param_value] = STATE(82),
    [aux_sym_command_param_value_repeat2] = STATE(77),
    [anon_sym_DQUOTE] = ACTIONS(269),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(267),
    [sym_expression] = ACTIONS(267),
  },
  [109] = {
    [sym_error] = ACTIONS(3),
    [sym_command_param_id] = ACTIONS(273),
  },
  [110] = {
    [sym_command_param] = STATE(78),
    [aux_sym_command_repeat1] = STATE(78),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(279),
  },
  [111] = {
    [anon_sym_DQUOTE] = ACTIONS(281),
    [sym_error] = ACTIONS(3),
  },
  [112] = {
    [aux_sym_command_param_value_repeat1] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(281),
    [aux_sym_command_param_value_token1] = ACTIONS(199),
    [sym_error] = ACTIONS(3),
  },
  [113] = {
    [sym_command_param] = STATE(115),
    [aux_sym_command_repeat1] = STATE(115),
    [sym_command_nameless_param] = STATE(116),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(283),
  },
  [114] = {
    [sym_command_param_value] = STATE(88),
    [aux_sym_command_param_value_repeat2] = STATE(89),
    [sym_expression] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(289),
    [sym_command_param_id] = ACTIONS(291),
  },
  [115] = {
    [sym_command_param] = STATE(78),
    [aux_sym_command_repeat1] = STATE(78),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(293),
  },
  [116] = {
    [sym_command_param] = STATE(119),
    [aux_sym_command_repeat1] = STATE(119),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(293),
  },
  [117] = {
    [sym_command_param_value] = STATE(92),
    [aux_sym_command_param_value_repeat2] = STATE(89),
    [anon_sym_DQUOTE] = ACTIONS(287),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(285),
    [sym_expression] = ACTIONS(285),
  },
  [118] = {
    [sym_error] = ACTIONS(3),
    [sym_command_param_id] = ACTIONS(291),
  },
  [119] = {
    [sym_command_param] = STATE(78),
    [aux_sym_command_repeat1] = STATE(78),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(295),
  },
  [120] = {
    [anon_sym_DQUOTE] = ACTIONS(297),
    [sym_error] = ACTIONS(3),
  },
  [121] = {
    [aux_sym_command_param_value_repeat1] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [aux_sym_command_param_value_token1] = ACTIONS(199),
    [sym_error] = ACTIONS(3),
  },
  [122] = {
    [sym_command_param] = STATE(123),
    [aux_sym_command_repeat1] = STATE(123),
    [sym_command_nameless_param] = STATE(124),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(299),
  },
  [123] = {
    [sym_command_param] = STATE(78),
    [aux_sym_command_repeat1] = STATE(78),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(301),
  },
  [124] = {
    [sym_command_param] = STATE(125),
    [aux_sym_command_repeat1] = STATE(125),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(301),
  },
  [125] = {
    [sym_command_param] = STATE(78),
    [aux_sym_command_repeat1] = STATE(78),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(303),
  },
  [126] = {
    [sym_command_id] = STATE(103),
    [sym_error] = ACTIONS(3),
    [aux_sym_define_key_token1] = ACTIONS(45),
  },
  [127] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(305),
  },
  [128] = {
    [aux_sym_command_param_value_repeat1] = STATE(112),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token1] = ACTIONS(307),
    [sym_expression] = ACTIONS(309),
  },
  [129] = {
    [sym_command_id] = STATE(113),
    [sym_error] = ACTIONS(3),
    [aux_sym_define_key_token1] = ACTIONS(45),
  },
  [130] = {
    [aux_sym_command_param_value_repeat1] = STATE(121),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token1] = ACTIONS(311),
    [sym_expression] = ACTIONS(313),
  },
  [131] = {
    [sym_command_id] = STATE(122),
    [sym_error] = ACTIONS(3),
    [aux_sym_define_key_token1] = ACTIONS(45),
  },
  [132] = {
    [sym_define_key] = STATE(127),
    [sym_error] = ACTIONS(3),
    [aux_sym_define_key_token1] = ACTIONS(47),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_script, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, SHIFT(10),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_generic_text, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_script, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = true}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, SHIFT(22),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_generic_text, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(126),
  [45] = {.count = 1, .reusable = true}, SHIFT(66),
  [47] = {.count = 1, .reusable = true}, SHIFT(24),
  [49] = {.count = 1, .reusable = false}, SHIFT(26),
  [51] = {.count = 1, .reusable = true}, SHIFT(27),
  [53] = {.count = 1, .reusable = true}, SHIFT(29),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_line, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [59] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_label_id, 1),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [67] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2),
  [69] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2),
  [71] = {.count = 1, .reusable = true}, SHIFT(31),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_line, 2),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_command_id, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(32),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_command, 2),
  [81] = {.count = 1, .reusable = true}, SHIFT(35),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_generic_text, 2),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_generic_text, 2),
  [87] = {.count = 1, .reusable = true}, SHIFT(104),
  [89] = {.count = 1, .reusable = true}, SHIFT(36),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_define_key, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(39),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_script, 2),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(99),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(100),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(59),
  [106] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(40),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(101),
  [112] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(60),
  [115] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(129),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(132),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(27),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_line, 3),
  [128] = {.count = 1, .reusable = true}, SHIFT(45),
  [130] = {.count = 1, .reusable = true}, SHIFT(43),
  [132] = {.count = 1, .reusable = false}, SHIFT(45),
  [134] = {.count = 1, .reusable = true}, SHIFT(42),
  [136] = {.count = 1, .reusable = true}, SHIFT(46),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_command, 3),
  [140] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(35),
  [143] = {.count = 1, .reusable = false}, REDUCE(aux_sym_generic_text_repeat1, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(126),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 3),
  [152] = {.count = 1, .reusable = true}, SHIFT(109),
  [154] = {.count = 1, .reusable = true}, SHIFT(49),
  [156] = {.count = 1, .reusable = true}, SHIFT(51),
  [158] = {.count = 1, .reusable = true}, SHIFT(99),
  [160] = {.count = 1, .reusable = true}, SHIFT(100),
  [162] = {.count = 1, .reusable = false}, SHIFT(59),
  [164] = {.count = 1, .reusable = true}, SHIFT(101),
  [166] = {.count = 1, .reusable = false}, SHIFT(60),
  [168] = {.count = 1, .reusable = false}, SHIFT(129),
  [170] = {.count = 1, .reusable = true}, SHIFT(132),
  [172] = {.count = 1, .reusable = true}, SHIFT(54),
  [174] = {.count = 1, .reusable = true}, SHIFT(53),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_command_nameless_param, 2),
  [178] = {.count = 1, .reusable = true}, SHIFT(55),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_command_param_value, 1),
  [182] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(46),
  [185] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 4),
  [191] = {.count = 1, .reusable = true}, SHIFT(56),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_define, 4),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_command_param, 3),
  [197] = {.count = 1, .reusable = true}, SHIFT(57),
  [199] = {.count = 1, .reusable = true}, SHIFT(58),
  [201] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(55),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 5),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_command_param_value, 3),
  [210] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(58),
  [215] = {.count = 1, .reusable = true}, SHIFT(68),
  [217] = {.count = 1, .reusable = true}, SHIFT(131),
  [219] = {.count = 1, .reusable = true}, SHIFT(69),
  [221] = {.count = 1, .reusable = true}, SHIFT(71),
  [223] = {.count = 1, .reusable = true}, SHIFT(114),
  [225] = {.count = 1, .reusable = true}, SHIFT(74),
  [227] = {.count = 1, .reusable = true}, SHIFT(118),
  [229] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(74),
  [232] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(131),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 3),
  [237] = {.count = 1, .reusable = true}, SHIFT(83),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(109),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 4),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(83),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 5),
  [249] = {.count = 1, .reusable = true}, SHIFT(93),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(118),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(93),
  [257] = {.count = 1, .reusable = true}, SHIFT(62),
  [259] = {.count = 1, .reusable = true}, SHIFT(102),
  [261] = {.count = 1, .reusable = true}, SHIFT(63),
  [263] = {.count = 1, .reusable = true}, SHIFT(86),
  [265] = {.count = 1, .reusable = true}, SHIFT(75),
  [267] = {.count = 1, .reusable = true}, SHIFT(77),
  [269] = {.count = 1, .reusable = true}, SHIFT(128),
  [271] = {.count = 1, .reusable = false}, SHIFT(77),
  [273] = {.count = 1, .reusable = true}, SHIFT(108),
  [275] = {.count = 1, .reusable = true}, SHIFT(80),
  [277] = {.count = 1, .reusable = true}, SHIFT(81),
  [279] = {.count = 1, .reusable = true}, SHIFT(84),
  [281] = {.count = 1, .reusable = true}, SHIFT(85),
  [283] = {.count = 1, .reusable = true}, SHIFT(87),
  [285] = {.count = 1, .reusable = true}, SHIFT(89),
  [287] = {.count = 1, .reusable = true}, SHIFT(130),
  [289] = {.count = 1, .reusable = false}, SHIFT(89),
  [291] = {.count = 1, .reusable = true}, SHIFT(117),
  [293] = {.count = 1, .reusable = true}, SHIFT(91),
  [295] = {.count = 1, .reusable = true}, SHIFT(94),
  [297] = {.count = 1, .reusable = true}, SHIFT(95),
  [299] = {.count = 1, .reusable = true}, SHIFT(96),
  [301] = {.count = 1, .reusable = true}, SHIFT(97),
  [303] = {.count = 1, .reusable = true}, SHIFT(98),
  [305] = {.count = 1, .reusable = true}, SHIFT(107),
  [307] = {.count = 1, .reusable = true}, SHIFT(112),
  [309] = {.count = 1, .reusable = true}, SHIFT(111),
  [311] = {.count = 1, .reusable = true}, SHIFT(121),
  [313] = {.count = 1, .reusable = true}, SHIFT(120),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_naniscript(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
