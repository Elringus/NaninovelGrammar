#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 106
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
      if (lookahead == '}')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{')
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_define_key_token1);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_expression);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_command_param_id);
      END_STATE();
    case 15:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(16);
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
        ADVANCE(17);
      if (lookahead == '{')
        ADVANCE(18);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__hor_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(20);
      if (lookahead == '\r')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '}')
        ADVANCE(21);
      if (lookahead == '\r' ||
          lookahead == '{')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_generic_text_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_generic_text_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_generic_text_token1);
      if (lookahead == '}')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{')
        ADVANCE(11);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_define_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 29:
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
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(30);
      END_STATE();
    case 30:
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
        ADVANCE(30);
      END_STATE();
    case 31:
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
        ADVANCE(17);
      if (lookahead == '{')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '\n')
        ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(21);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 33:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(35);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(35);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(4);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '}')
        ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == '"')
        ADVANCE(4);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != ':' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(30);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(41);
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
        ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(44);
      END_STATE();
    case 45:
      if (lookahead == '"')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(47);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}')
        ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\')
        ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(48);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 29},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 29},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 29},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 29},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 34},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 38},
  [32] = {.lex_state = 40},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 29},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 29},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 39},
  [39] = {.lex_state = 42},
  [40] = {.lex_state = 31},
  [41] = {.lex_state = 38},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 45},
  [44] = {.lex_state = 29},
  [45] = {.lex_state = 29},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 29},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 29},
  [52] = {.lex_state = 29},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 45},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 29},
  [57] = {.lex_state = 29},
  [58] = {.lex_state = 45},
  [59] = {.lex_state = 34},
  [60] = {.lex_state = 39},
  [61] = {.lex_state = 34},
  [62] = {.lex_state = 34},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 39},
  [67] = {.lex_state = 34},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 39},
  [70] = {.lex_state = 39},
  [71] = {.lex_state = 34},
  [72] = {.lex_state = 39},
  [73] = {.lex_state = 34},
  [74] = {.lex_state = 29},
  [75] = {.lex_state = 34},
  [76] = {.lex_state = 29},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 34},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 39},
  [81] = {.lex_state = 40},
  [82] = {.lex_state = 39},
  [83] = {.lex_state = 39},
  [84] = {.lex_state = 40},
  [85] = {.lex_state = 45},
  [86] = {.lex_state = 40},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 29},
  [89] = {.lex_state = 39},
  [90] = {.lex_state = 45},
  [91] = {.lex_state = 39},
  [92] = {.lex_state = 40},
  [93] = {.lex_state = 39},
  [94] = {.lex_state = 39},
  [95] = {.lex_state = 40},
  [96] = {.lex_state = 45},
  [97] = {.lex_state = 40},
  [98] = {.lex_state = 39},
  [99] = {.lex_state = 45},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 29},
  [104] = {.lex_state = 33},
  [105] = {.lex_state = 33},
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
    [sym__hor_space] = ACTIONS(27),
    [aux_sym_define_key_token1] = ACTIONS(29),
    [sym_error] = ACTIONS(3),
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
    [sym_error] = ACTIONS(37),
    [aux_sym_define_key_token1] = ACTIONS(39),
  },
  [7] = {
    [aux_sym_generic_text_repeat1] = STATE(22),
    [sym_inlined_command] = STATE(22),
    [aux_sym_generic_text_token2] = ACTIONS(41),
    [sym__hor_space] = ACTIONS(43),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(45),
    [sym__ver_space] = ACTIONS(31),
    [sym_expression] = ACTIONS(41),
  },
  [8] = {
    [sym_command_id] = STATE(23),
    [sym_error] = ACTIONS(37),
    [aux_sym_define_key_token1] = ACTIONS(47),
  },
  [9] = {
    [sym_define_key] = STATE(25),
    [sym_error] = ACTIONS(37),
    [aux_sym_define_key_token1] = ACTIONS(49),
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
    [sym__hor_space] = ACTIONS(51),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
    [sym__ver_space] = ACTIONS(53),
  },
  [11] = {
    [sym__hor_space] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(57),
  },
  [12] = {
    [sym_error] = ACTIONS(37),
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
    [sym_error] = ACTIONS(37),
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
    [anon_sym_LBRACK] = ACTIONS(45),
    [sym__ver_space] = ACTIONS(85),
    [sym_expression] = ACTIONS(81),
  },
  [23] = {
    [sym_command_nameless_param] = STATE(38),
    [sym_command_param] = STATE(37),
    [aux_sym_command_repeat1] = STATE(37),
    [sym__hor_space] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(89),
    [sym_error] = ACTIONS(3),
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
    [sym_define] = STATE(11),
    [sym_label] = STATE(11),
    [sym_generic_text] = STATE(11),
    [sym_line] = STATE(41),
    [sym_comment] = STATE(11),
    [sym_command] = STATE(11),
    [sym_inlined_command] = STATE(4),
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
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(73),
  },
  [30] = {
    [sym__hor_space] = ACTIONS(124),
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(124),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(126),
  },
  [32] = {
    [sym_command_param_value] = STATE(44),
    [aux_sym_command_param_value_repeat2] = STATE(45),
    [sym_expression] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [sym_error] = ACTIONS(37),
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
    [sym_command_param] = STATE(66),
    [aux_sym_command_repeat1] = STATE(66),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(154),
    [sym_error] = ACTIONS(3),
  },
  [38] = {
    [sym_command_param] = STATE(50),
    [aux_sym_command_repeat1] = STATE(50),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(154),
    [sym_error] = ACTIONS(3),
  },
  [39] = {
    [sym_define_value] = ACTIONS(156),
    [sym_error] = ACTIONS(3),
  },
  [40] = {
    [sym_inlined_command] = STATE(4),
    [sym_define] = STATE(19),
    [sym_generic_text] = STATE(19),
    [sym_comment] = STATE(19),
    [sym_command] = STATE(19),
    [sym_label] = STATE(19),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(158),
    [aux_sym_generic_text_token1] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
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
    [sym_error] = ACTIONS(37),
    [aux_sym_command_param_value_token2] = ACTIONS(128),
    [sym_expression] = ACTIONS(128),
  },
  [43] = {
    [aux_sym_command_param_value_repeat1] = STATE(54),
    [aux_sym_command_param_value_token1] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(162),
  },
  [44] = {
    [sym__hor_space] = ACTIONS(166),
    [ts_builtin_sym_end] = ACTIONS(166),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(166),
  },
  [45] = {
    [aux_sym_command_param_value_repeat2] = STATE(55),
    [sym_expression] = ACTIONS(168),
    [sym__hor_space] = ACTIONS(170),
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(170),
    [aux_sym_command_param_value_token2] = ACTIONS(168),
  },
  [46] = {
    [sym_error] = ACTIONS(37),
    [sym_command_param_id] = ACTIONS(134),
  },
  [47] = {
    [sym_command_param] = STATE(47),
    [aux_sym_command_repeat1] = STATE(47),
    [sym__hor_space] = ACTIONS(172),
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(175),
  },
  [48] = {
    [sym_command_param] = STATE(47),
    [aux_sym_command_repeat1] = STATE(47),
    [sym__hor_space] = ACTIONS(136),
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(177),
  },
  [49] = {
    [sym__hor_space] = ACTIONS(179),
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(179),
  },
  [50] = {
    [sym_command_param] = STATE(66),
    [aux_sym_command_repeat1] = STATE(66),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(181),
    [sym_error] = ACTIONS(3),
  },
  [51] = {
    [sym__hor_space] = ACTIONS(183),
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(183),
  },
  [52] = {
    [sym__hor_space] = ACTIONS(185),
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(185),
  },
  [53] = {
    [sym__ver_space] = ACTIONS(187),
    [sym__hor_space] = ACTIONS(187),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(187),
    [sym_expression] = ACTIONS(187),
  },
  [54] = {
    [aux_sym_command_param_value_repeat1] = STATE(58),
    [aux_sym_command_param_value_token1] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(189),
  },
  [55] = {
    [aux_sym_command_param_value_repeat2] = STATE(55),
    [sym__ver_space] = ACTIONS(187),
    [sym__hor_space] = ACTIONS(187),
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(196),
    [sym_expression] = ACTIONS(196),
  },
  [56] = {
    [sym__hor_space] = ACTIONS(199),
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(199),
  },
  [57] = {
    [sym__ver_space] = ACTIONS(201),
    [sym__hor_space] = ACTIONS(201),
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(201),
    [sym_expression] = ACTIONS(201),
  },
  [58] = {
    [aux_sym_command_param_value_repeat1] = STATE(58),
    [aux_sym_command_param_value_token1] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(203),
  },
  [59] = {
    [aux_sym_generic_text_repeat1] = STATE(61),
    [sym_inlined_command] = STATE(61),
    [aux_sym_generic_text_token2] = ACTIONS(208),
    [sym__hor_space] = ACTIONS(43),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(210),
    [sym__ver_space] = ACTIONS(31),
    [sym_expression] = ACTIONS(208),
  },
  [60] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
  },
  [61] = {
    [aux_sym_generic_text_repeat1] = STATE(62),
    [sym_inlined_command] = STATE(62),
    [aux_sym_generic_text_token2] = ACTIONS(212),
    [sym__hor_space] = ACTIONS(83),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(210),
    [sym__ver_space] = ACTIONS(85),
    [sym_expression] = ACTIONS(212),
  },
  [62] = {
    [aux_sym_generic_text_repeat1] = STATE(62),
    [sym_inlined_command] = STATE(62),
    [aux_sym_generic_text_token2] = ACTIONS(214),
    [sym__hor_space] = ACTIONS(143),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(217),
    [sym__ver_space] = ACTIONS(145),
    [sym_expression] = ACTIONS(214),
  },
  [63] = {
    [aux_sym_generic_text_token2] = ACTIONS(150),
    [sym__hor_space] = ACTIONS(220),
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(150),
    [sym__ver_space] = ACTIONS(150),
    [sym_expression] = ACTIONS(150),
  },
  [64] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(166),
  },
  [65] = {
    [aux_sym_command_param_value_repeat2] = STATE(70),
    [sym__hor_space] = ACTIONS(170),
    [anon_sym_RBRACK] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(224),
    [sym_expression] = ACTIONS(224),
  },
  [66] = {
    [sym_command_param] = STATE(66),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(226),
    [anon_sym_RBRACK] = ACTIONS(175),
  },
  [67] = {
    [aux_sym_generic_text_token2] = ACTIONS(179),
    [sym__hor_space] = ACTIONS(229),
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym__ver_space] = ACTIONS(179),
    [sym_expression] = ACTIONS(179),
  },
  [68] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
  },
  [69] = {
    [sym__hor_space] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(187),
    [sym_expression] = ACTIONS(187),
  },
  [70] = {
    [aux_sym_command_param_value_repeat2] = STATE(70),
    [sym__hor_space] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(234),
    [sym_expression] = ACTIONS(234),
  },
  [71] = {
    [aux_sym_generic_text_token2] = ACTIONS(199),
    [sym__hor_space] = ACTIONS(237),
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(199),
    [sym__ver_space] = ACTIONS(199),
    [sym_expression] = ACTIONS(199),
  },
  [72] = {
    [sym__hor_space] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(201),
    [sym_expression] = ACTIONS(201),
  },
  [73] = {
    [aux_sym_generic_text_token2] = ACTIONS(150),
    [sym__hor_space] = ACTIONS(220),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(150),
    [sym__ver_space] = ACTIONS(150),
    [sym_expression] = ACTIONS(150),
  },
  [74] = {
    [aux_sym_command_param_value_repeat2] = STATE(77),
    [sym_expression] = ACTIONS(239),
    [sym__hor_space] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(170),
    [aux_sym_command_param_value_token2] = ACTIONS(239),
  },
  [75] = {
    [aux_sym_generic_text_token2] = ACTIONS(179),
    [sym__hor_space] = ACTIONS(229),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym__ver_space] = ACTIONS(179),
    [sym_expression] = ACTIONS(179),
  },
  [76] = {
    [sym__ver_space] = ACTIONS(187),
    [sym__hor_space] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(187),
    [sym_expression] = ACTIONS(187),
  },
  [77] = {
    [aux_sym_command_param_value_repeat2] = STATE(77),
    [sym__ver_space] = ACTIONS(187),
    [sym__hor_space] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(243),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(246),
    [sym_expression] = ACTIONS(246),
  },
  [78] = {
    [aux_sym_generic_text_token2] = ACTIONS(199),
    [sym__hor_space] = ACTIONS(237),
    [sym_error] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(199),
    [sym__ver_space] = ACTIONS(199),
    [sym_expression] = ACTIONS(199),
  },
  [79] = {
    [sym__ver_space] = ACTIONS(201),
    [sym__hor_space] = ACTIONS(201),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(201),
    [sym_expression] = ACTIONS(201),
  },
  [80] = {
    [sym_command_param] = STATE(82),
    [aux_sym_command_repeat1] = STATE(82),
    [sym_command_nameless_param] = STATE(83),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(249),
  },
  [81] = {
    [sym_command_param_value] = STATE(64),
    [aux_sym_command_param_value_repeat2] = STATE(65),
    [sym_expression] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [sym_error] = ACTIONS(37),
    [aux_sym_command_param_value_token2] = ACTIONS(253),
    [sym_command_param_id] = ACTIONS(255),
  },
  [82] = {
    [sym_command_param] = STATE(66),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(257),
  },
  [83] = {
    [sym_command_param] = STATE(89),
    [aux_sym_command_repeat1] = STATE(89),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(257),
  },
  [84] = {
    [sym_command_param_value] = STATE(68),
    [aux_sym_command_param_value_repeat2] = STATE(65),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [sym_error] = ACTIONS(37),
    [aux_sym_command_param_value_token2] = ACTIONS(251),
    [sym_expression] = ACTIONS(251),
  },
  [85] = {
    [aux_sym_command_param_value_repeat1] = STATE(90),
    [aux_sym_command_param_value_token1] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(259),
  },
  [86] = {
    [sym_error] = ACTIONS(37),
    [sym_command_param_id] = ACTIONS(255),
  },
  [87] = {
    [sym_command_param] = STATE(87),
    [aux_sym_command_repeat1] = STATE(87),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(263),
    [sym__ver_space] = ACTIONS(175),
  },
  [88] = {
    [sym_command_param] = STATE(87),
    [aux_sym_command_repeat1] = STATE(87),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(266),
    [sym__ver_space] = ACTIONS(177),
  },
  [89] = {
    [sym_command_param] = STATE(66),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(268),
  },
  [90] = {
    [aux_sym_command_param_value_repeat1] = STATE(58),
    [aux_sym_command_param_value_token1] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(270),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(189),
  },
  [91] = {
    [sym_command_param] = STATE(93),
    [aux_sym_command_repeat1] = STATE(93),
    [sym_command_nameless_param] = STATE(94),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(272),
  },
  [92] = {
    [sym_command_param_value] = STATE(44),
    [aux_sym_command_param_value_repeat2] = STATE(74),
    [sym_expression] = ACTIONS(274),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [sym_error] = ACTIONS(37),
    [aux_sym_command_param_value_token2] = ACTIONS(276),
    [sym_command_param_id] = ACTIONS(278),
  },
  [93] = {
    [sym_command_param] = STATE(66),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(280),
  },
  [94] = {
    [sym_command_param] = STATE(98),
    [aux_sym_command_repeat1] = STATE(98),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(280),
  },
  [95] = {
    [sym_command_param_value] = STATE(52),
    [aux_sym_command_param_value_repeat2] = STATE(74),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [sym_error] = ACTIONS(37),
    [aux_sym_command_param_value_token2] = ACTIONS(274),
    [sym_expression] = ACTIONS(274),
  },
  [96] = {
    [aux_sym_command_param_value_repeat1] = STATE(99),
    [aux_sym_command_param_value_token1] = ACTIONS(282),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(282),
  },
  [97] = {
    [sym_error] = ACTIONS(37),
    [sym_command_param_id] = ACTIONS(278),
  },
  [98] = {
    [sym_command_param] = STATE(66),
    [aux_sym_command_repeat1] = STATE(66),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(286),
  },
  [99] = {
    [aux_sym_command_param_value_repeat1] = STATE(58),
    [aux_sym_command_param_value_token1] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(189),
  },
  [100] = {
    [sym_command_id] = STATE(80),
    [sym_error] = ACTIONS(37),
    [aux_sym_define_key_token1] = ACTIONS(47),
  },
  [101] = {
    [sym_command_param] = STATE(102),
    [aux_sym_command_repeat1] = STATE(102),
    [sym_command_nameless_param] = STATE(103),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(290),
    [sym__ver_space] = ACTIONS(79),
  },
  [102] = {
    [sym_command_param] = STATE(87),
    [aux_sym_command_repeat1] = STATE(87),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(266),
    [sym__ver_space] = ACTIONS(138),
  },
  [103] = {
    [sym_command_param] = STATE(88),
    [aux_sym_command_repeat1] = STATE(88),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(266),
    [sym__ver_space] = ACTIONS(138),
  },
  [104] = {
    [sym_command_id] = STATE(91),
    [sym_error] = ACTIONS(37),
    [aux_sym_define_key_token1] = ACTIONS(47),
  },
  [105] = {
    [sym_command_id] = STATE(101),
    [sym_error] = ACTIONS(37),
    [aux_sym_define_key_token1] = ACTIONS(39),
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
  [37] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [39] = {.count = 1, .reusable = true}, SHIFT(20),
  [41] = {.count = 1, .reusable = true}, SHIFT(22),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_generic_text, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(100),
  [47] = {.count = 1, .reusable = true}, SHIFT(60),
  [49] = {.count = 1, .reusable = true}, SHIFT(24),
  [51] = {.count = 1, .reusable = false}, SHIFT(26),
  [53] = {.count = 1, .reusable = true}, SHIFT(27),
  [55] = {.count = 1, .reusable = true}, SHIFT(29),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_line, 1),
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
  [87] = {.count = 1, .reusable = true}, SHIFT(81),
  [89] = {.count = 1, .reusable = true}, SHIFT(36),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_define_key, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(39),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_script, 2),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(2),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(3),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(4),
  [106] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(40),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(105),
  [112] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(59),
  [115] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(8),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(9),
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
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(100),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 3),
  [152] = {.count = 1, .reusable = true}, SHIFT(86),
  [154] = {.count = 1, .reusable = true}, SHIFT(49),
  [156] = {.count = 1, .reusable = true}, SHIFT(51),
  [158] = {.count = 1, .reusable = true}, SHIFT(105),
  [160] = {.count = 1, .reusable = false}, SHIFT(59),
  [162] = {.count = 1, .reusable = true}, SHIFT(54),
  [164] = {.count = 1, .reusable = true}, SHIFT(53),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_command_nameless_param, 2),
  [168] = {.count = 1, .reusable = true}, SHIFT(55),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_command_param_value, 1),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(46),
  [175] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 4),
  [181] = {.count = 1, .reusable = true}, SHIFT(56),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_define, 4),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_command_param, 3),
  [187] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(58),
  [191] = {.count = 1, .reusable = true}, SHIFT(57),
  [193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(43),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(55),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 5),
  [201] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 3),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(58),
  [206] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2),
  [208] = {.count = 1, .reusable = true}, SHIFT(61),
  [210] = {.count = 1, .reusable = true}, SHIFT(104),
  [212] = {.count = 1, .reusable = true}, SHIFT(62),
  [214] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(62),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(104),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 3),
  [222] = {.count = 1, .reusable = true}, SHIFT(85),
  [224] = {.count = 1, .reusable = true}, SHIFT(70),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(86),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 4),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(85),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(70),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 5),
  [239] = {.count = 1, .reusable = true}, SHIFT(77),
  [241] = {.count = 1, .reusable = true}, SHIFT(96),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(96),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(77),
  [249] = {.count = 1, .reusable = true}, SHIFT(63),
  [251] = {.count = 1, .reusable = true}, SHIFT(65),
  [253] = {.count = 1, .reusable = false}, SHIFT(65),
  [255] = {.count = 1, .reusable = true}, SHIFT(84),
  [257] = {.count = 1, .reusable = true}, SHIFT(67),
  [259] = {.count = 1, .reusable = true}, SHIFT(90),
  [261] = {.count = 1, .reusable = true}, SHIFT(69),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(97),
  [266] = {.count = 1, .reusable = true}, SHIFT(97),
  [268] = {.count = 1, .reusable = true}, SHIFT(71),
  [270] = {.count = 1, .reusable = true}, SHIFT(72),
  [272] = {.count = 1, .reusable = true}, SHIFT(73),
  [274] = {.count = 1, .reusable = true}, SHIFT(74),
  [276] = {.count = 1, .reusable = false}, SHIFT(74),
  [278] = {.count = 1, .reusable = true}, SHIFT(95),
  [280] = {.count = 1, .reusable = true}, SHIFT(75),
  [282] = {.count = 1, .reusable = true}, SHIFT(99),
  [284] = {.count = 1, .reusable = true}, SHIFT(76),
  [286] = {.count = 1, .reusable = true}, SHIFT(78),
  [288] = {.count = 1, .reusable = true}, SHIFT(79),
  [290] = {.count = 1, .reusable = true}, SHIFT(92),
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
