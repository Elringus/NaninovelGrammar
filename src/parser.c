#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 119
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  aux_sym_script_token1 = 1,
  aux_sym_line_token1 = 2,
  sym_comment = 3,
  anon_sym_GT = 4,
  aux_sym_define_token1 = 5,
  aux_sym_define_key_token1 = 6,
  sym_define_value = 7,
  anon_sym_POUND = 8,
  anon_sym_AT = 9,
  sym_command_param_id = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_command_param_value_token1 = 12,
  aux_sym_command_param_value_token2 = 13,
  aux_sym_generic_text_token1 = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_LBRACE = 17,
  aux_sym_expression_token1 = 18,
  anon_sym_RBRACE = 19,
  sym_script = 20,
  sym_line = 21,
  sym_define = 22,
  sym_define_key = 23,
  sym_label = 24,
  sym_label_id = 25,
  sym_command = 26,
  sym_command_id = 27,
  sym_command_param = 28,
  sym_command_nameless_param = 29,
  sym_command_param_value = 30,
  sym_generic_text = 31,
  sym_inlined_command = 32,
  sym_expression = 33,
  aux_sym_script_repeat1 = 34,
  aux_sym_command_repeat1 = 35,
  aux_sym_command_param_value_repeat1 = 36,
  aux_sym_command_param_value_repeat2 = 37,
  aux_sym_generic_text_repeat1 = 38,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_script_token1] = "script_token1",
  [aux_sym_line_token1] = "line_token1",
  [sym_comment] = "comment",
  [anon_sym_GT] = ">",
  [aux_sym_define_token1] = "define_token1",
  [aux_sym_define_key_token1] = "define_key_token1",
  [sym_define_value] = "define_value",
  [anon_sym_POUND] = "#",
  [anon_sym_AT] = "@",
  [sym_command_param_id] = "command_param_id",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_command_param_value_token1] = "command_param_value_token1",
  [aux_sym_command_param_value_token2] = "command_param_value_token2",
  [aux_sym_generic_text_token1] = "generic_text_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [aux_sym_expression_token1] = "expression_token1",
  [anon_sym_RBRACE] = "}",
  [sym_script] = "script",
  [sym_line] = "line",
  [sym_define] = "define",
  [sym_define_key] = "define_key",
  [sym_label] = "label",
  [sym_label_id] = "label_id",
  [sym_command] = "command",
  [sym_command_id] = "command_id",
  [sym_command_param] = "command_param",
  [sym_command_nameless_param] = "command_nameless_param",
  [sym_command_param_value] = "command_param_value",
  [sym_generic_text] = "generic_text",
  [sym_inlined_command] = "inlined_command",
  [sym_expression] = "expression",
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
  [aux_sym_script_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_token1] = {
    .visible = false,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
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
  [sym_command_param] = {
    .visible = true,
    .named = true,
  },
  [sym_command_nameless_param] = {
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
  [sym_expression] = {
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
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(4);
      if (lookahead == '@')
        ADVANCE(5);
      if (lookahead == '[')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(11);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_script_token1);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_generic_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_define_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_expression_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '#')
        ADVANCE(13);
      if (lookahead == ';')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '@')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(11);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '[')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(17);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == ']')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '}')
        ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_define_token1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(26);
      END_STATE();
    case 27:
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
        ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '}')
        ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == '"')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(27);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead == ':')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
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
        ADVANCE(27);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_command_param_id);
      END_STATE();
    case 33:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '"')
        ADVANCE(30);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}')
        ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_line_token1);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == '"')
        ADVANCE(30);
      if (lookahead == ']')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '}')
        ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 25},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 35},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 29},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 23},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 35},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 35},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 23},
  [58] = {.lex_state = 23},
  [59] = {.lex_state = 23},
  [60] = {.lex_state = 24},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 23},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 29},
  [68] = {.lex_state = 23},
  [69] = {.lex_state = 38},
  [70] = {.lex_state = 29},
  [71] = {.lex_state = 24},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 23},
  [76] = {.lex_state = 38},
  [77] = {.lex_state = 24},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 23},
  [80] = {.lex_state = 39},
  [81] = {.lex_state = 29},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 38},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 38},
  [88] = {.lex_state = 23},
  [89] = {.lex_state = 38},
  [90] = {.lex_state = 38},
  [91] = {.lex_state = 22},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 25},
  [94] = {.lex_state = 28},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 29},
  [97] = {.lex_state = 25},
  [98] = {.lex_state = 25},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 25},
  [101] = {.lex_state = 35},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 28},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 35},
  [106] = {.lex_state = 29},
  [107] = {.lex_state = 28},
  [108] = {.lex_state = 28},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 21},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 25},
  [113] = {.lex_state = 35},
  [114] = {.lex_state = 21},
  [115] = {.lex_state = 35},
  [116] = {.lex_state = 21},
  [117] = {.lex_state = 21},
  [118] = {.lex_state = 19},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [aux_sym_define_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_script_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_line_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_script_repeat1] = STATE(9),
    [sym_label] = STATE(7),
    [sym_script] = STATE(10),
    [sym_command] = STATE(7),
    [sym_generic_text] = STATE(7),
    [sym_inlined_command] = STATE(12),
    [sym_line] = STATE(11),
    [sym_define] = STATE(7),
    [aux_sym_generic_text_repeat1] = STATE(12),
    [sym_expression] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [aux_sym_line_token1] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [aux_sym_generic_text_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
  },
  [2] = {
    [sym_command_id] = STATE(14),
    [aux_sym_define_key_token1] = ACTIONS(21),
  },
  [3] = {
    [sym_define_key] = STATE(16),
    [aux_sym_define_key_token1] = ACTIONS(23),
  },
  [4] = {
    [aux_sym_expression_token1] = ACTIONS(25),
  },
  [5] = {
    [sym_command] = STATE(18),
    [sym_generic_text] = STATE(18),
    [sym_inlined_command] = STATE(12),
    [sym_label] = STATE(18),
    [aux_sym_generic_text_repeat1] = STATE(12),
    [sym_define] = STATE(18),
    [sym_expression] = STATE(12),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_GT] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(27),
    [aux_sym_generic_text_token1] = ACTIONS(15),
  },
  [6] = {
    [sym_command_id] = STATE(19),
    [aux_sym_define_key_token1] = ACTIONS(29),
  },
  [7] = {
    [aux_sym_script_token1] = ACTIONS(31),
    [aux_sym_line_token1] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(31),
  },
  [8] = {
    [aux_sym_line_token1] = ACTIONS(35),
  },
  [9] = {
    [aux_sym_script_repeat1] = STATE(22),
    [sym_label] = STATE(7),
    [sym_command] = STATE(7),
    [sym_generic_text] = STATE(7),
    [sym_inlined_command] = STATE(12),
    [sym_line] = STATE(23),
    [sym_define] = STATE(7),
    [aux_sym_generic_text_repeat1] = STATE(12),
    [sym_expression] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [aux_sym_line_token1] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [aux_sym_generic_text_token1] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(39),
  },
  [11] = {
    [aux_sym_script_token1] = ACTIONS(41),
    [ts_builtin_sym_end] = ACTIONS(37),
  },
  [12] = {
    [aux_sym_generic_text_repeat1] = STATE(25),
    [sym_inlined_command] = STATE(25),
    [sym_expression] = STATE(25),
    [aux_sym_line_token1] = ACTIONS(43),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(7),
    [aux_sym_script_token1] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(9),
    [aux_sym_generic_text_token1] = ACTIONS(47),
  },
  [13] = {
    [aux_sym_define_token1] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
  },
  [14] = {
    [aux_sym_command_repeat1] = STATE(28),
    [sym_command_param] = STATE(28),
    [sym_command_nameless_param] = STATE(29),
    [aux_sym_define_token1] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(53),
  },
  [15] = {
    [aux_sym_define_token1] = ACTIONS(55),
  },
  [16] = {
    [aux_sym_define_token1] = ACTIONS(57),
  },
  [17] = {
    [anon_sym_RBRACE] = ACTIONS(59),
  },
  [18] = {
    [aux_sym_script_token1] = ACTIONS(61),
    [aux_sym_line_token1] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(61),
  },
  [19] = {
    [aux_sym_command_repeat1] = STATE(33),
    [sym_command_param] = STATE(33),
    [sym_command_nameless_param] = STATE(34),
    [aux_sym_define_token1] = ACTIONS(65),
    [aux_sym_line_token1] = ACTIONS(67),
    [ts_builtin_sym_end] = ACTIONS(69),
    [aux_sym_script_token1] = ACTIONS(69),
  },
  [20] = {
    [aux_sym_script_token1] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(61),
  },
  [21] = {
    [sym_label_id] = STATE(36),
    [aux_sym_define_key_token1] = ACTIONS(71),
  },
  [22] = {
    [aux_sym_script_repeat1] = STATE(22),
    [sym_label] = STATE(55),
    [sym_command] = STATE(55),
    [sym_generic_text] = STATE(55),
    [sym_inlined_command] = STATE(56),
    [sym_line] = STATE(37),
    [sym_define] = STATE(55),
    [aux_sym_generic_text_repeat1] = STATE(56),
    [sym_expression] = STATE(56),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(82),
    [aux_sym_line_token1] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(87),
    [aux_sym_generic_text_token1] = ACTIONS(90),
    [sym_comment] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(96),
  },
  [23] = {
    [aux_sym_script_token1] = ACTIONS(41),
    [ts_builtin_sym_end] = ACTIONS(99),
  },
  [24] = {
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(82),
    [ts_builtin_sym_end] = ACTIONS(82),
    [aux_sym_line_token1] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(101),
    [aux_sym_generic_text_token1] = ACTIONS(101),
    [sym_comment] = ACTIONS(82),
    [anon_sym_POUND] = ACTIONS(101),
  },
  [25] = {
    [aux_sym_generic_text_repeat1] = STATE(25),
    [sym_inlined_command] = STATE(25),
    [sym_expression] = STATE(25),
    [aux_sym_line_token1] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(105),
    [ts_builtin_sym_end] = ACTIONS(108),
    [aux_sym_script_token1] = ACTIONS(108),
    [aux_sym_generic_text_token1] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(113),
  },
  [26] = {
    [sym_command_param_value] = STATE(40),
    [aux_sym_command_param_value_repeat2] = STATE(41),
    [sym_expression] = STATE(41),
    [aux_sym_command_param_value_token2] = ACTIONS(116),
    [sym_command_param_id] = ACTIONS(118),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(122),
  },
  [27] = {
    [aux_sym_line_token1] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [ts_builtin_sym_end] = ACTIONS(126),
    [aux_sym_script_token1] = ACTIONS(126),
    [aux_sym_generic_text_token1] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(126),
  },
  [28] = {
    [aux_sym_command_repeat1] = STATE(44),
    [sym_command_param] = STATE(44),
    [aux_sym_define_token1] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(130),
  },
  [29] = {
    [aux_sym_command_repeat1] = STATE(45),
    [sym_command_param] = STATE(45),
    [aux_sym_define_token1] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(130),
  },
  [30] = {
    [sym_define_value] = ACTIONS(132),
  },
  [31] = {
    [aux_sym_line_token1] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(136),
    [ts_builtin_sym_end] = ACTIONS(136),
    [aux_sym_script_token1] = ACTIONS(136),
    [aux_sym_generic_text_token1] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(136),
  },
  [32] = {
    [aux_sym_script_token1] = ACTIONS(138),
    [ts_builtin_sym_end] = ACTIONS(138),
  },
  [33] = {
    [aux_sym_command_repeat1] = STATE(72),
    [sym_command_param] = STATE(72),
    [aux_sym_define_token1] = ACTIONS(140),
    [aux_sym_line_token1] = ACTIONS(142),
    [ts_builtin_sym_end] = ACTIONS(144),
    [aux_sym_script_token1] = ACTIONS(144),
  },
  [34] = {
    [aux_sym_command_repeat1] = STATE(47),
    [sym_command_param] = STATE(47),
    [aux_sym_define_token1] = ACTIONS(140),
    [aux_sym_line_token1] = ACTIONS(142),
    [ts_builtin_sym_end] = ACTIONS(144),
    [aux_sym_script_token1] = ACTIONS(144),
  },
  [35] = {
    [aux_sym_script_token1] = ACTIONS(146),
    [aux_sym_line_token1] = ACTIONS(148),
    [ts_builtin_sym_end] = ACTIONS(146),
  },
  [36] = {
    [aux_sym_script_token1] = ACTIONS(150),
    [aux_sym_line_token1] = ACTIONS(152),
    [ts_builtin_sym_end] = ACTIONS(150),
  },
  [37] = {
    [aux_sym_script_token1] = ACTIONS(41),
  },
  [38] = {
    [sym_command_param_value] = STATE(48),
    [aux_sym_command_param_value_repeat2] = STATE(41),
    [sym_expression] = STATE(41),
    [anon_sym_LBRACE] = ACTIONS(120),
    [aux_sym_command_param_value_token2] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(122),
  },
  [39] = {
    [aux_sym_command_param_value_repeat1] = STATE(49),
    [sym_expression] = STATE(50),
    [anon_sym_LBRACE] = ACTIONS(120),
    [aux_sym_command_param_value_token1] = ACTIONS(156),
  },
  [40] = {
    [aux_sym_define_token1] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(158),
  },
  [41] = {
    [sym_expression] = STATE(51),
    [aux_sym_command_param_value_repeat2] = STATE(51),
    [aux_sym_define_token1] = ACTIONS(160),
    [aux_sym_command_param_value_token2] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(160),
  },
  [42] = {
    [sym_command_param_id] = ACTIONS(118),
  },
  [43] = {
    [aux_sym_line_token1] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(166),
    [ts_builtin_sym_end] = ACTIONS(166),
    [aux_sym_script_token1] = ACTIONS(166),
    [aux_sym_generic_text_token1] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(166),
  },
  [44] = {
    [aux_sym_command_repeat1] = STATE(44),
    [sym_command_param] = STATE(44),
    [aux_sym_define_token1] = ACTIONS(168),
    [anon_sym_RBRACK] = ACTIONS(171),
  },
  [45] = {
    [aux_sym_command_repeat1] = STATE(44),
    [sym_command_param] = STATE(44),
    [aux_sym_define_token1] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(173),
  },
  [46] = {
    [aux_sym_script_token1] = ACTIONS(175),
    [aux_sym_line_token1] = ACTIONS(177),
    [ts_builtin_sym_end] = ACTIONS(175),
  },
  [47] = {
    [aux_sym_command_repeat1] = STATE(72),
    [sym_command_param] = STATE(72),
    [aux_sym_define_token1] = ACTIONS(140),
    [aux_sym_line_token1] = ACTIONS(179),
    [ts_builtin_sym_end] = ACTIONS(181),
    [aux_sym_script_token1] = ACTIONS(181),
  },
  [48] = {
    [aux_sym_define_token1] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
  },
  [49] = {
    [aux_sym_command_param_value_repeat1] = STATE(54),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [aux_sym_command_param_value_token1] = ACTIONS(187),
  },
  [50] = {
    [anon_sym_DQUOTE] = ACTIONS(185),
  },
  [51] = {
    [sym_expression] = STATE(51),
    [aux_sym_command_param_value_repeat2] = STATE(51),
    [aux_sym_define_token1] = ACTIONS(189),
    [aux_sym_command_param_value_token2] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(189),
  },
  [52] = {
    [aux_sym_line_token1] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(199),
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_script_token1] = ACTIONS(199),
    [aux_sym_generic_text_token1] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(199),
  },
  [53] = {
    [aux_sym_define_token1] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
  },
  [54] = {
    [aux_sym_command_param_value_repeat1] = STATE(54),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [aux_sym_command_param_value_token1] = ACTIONS(205),
  },
  [55] = {
    [aux_sym_script_token1] = ACTIONS(31),
    [aux_sym_line_token1] = ACTIONS(33),
  },
  [56] = {
    [aux_sym_generic_text_repeat1] = STATE(60),
    [sym_inlined_command] = STATE(60),
    [sym_expression] = STATE(60),
    [aux_sym_line_token1] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(208),
    [aux_sym_script_token1] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(210),
    [aux_sym_generic_text_token1] = ACTIONS(212),
  },
  [57] = {
    [aux_sym_define_token1] = ACTIONS(214),
    [aux_sym_line_token1] = ACTIONS(214),
    [ts_builtin_sym_end] = ACTIONS(49),
    [aux_sym_script_token1] = ACTIONS(49),
  },
  [58] = {
    [aux_sym_script_token1] = ACTIONS(61),
    [aux_sym_line_token1] = ACTIONS(63),
  },
  [59] = {
    [aux_sym_command_repeat1] = STATE(63),
    [sym_command_param] = STATE(63),
    [sym_command_nameless_param] = STATE(64),
    [aux_sym_script_token1] = ACTIONS(69),
    [aux_sym_line_token1] = ACTIONS(67),
    [aux_sym_define_token1] = ACTIONS(216),
  },
  [60] = {
    [aux_sym_generic_text_repeat1] = STATE(60),
    [sym_inlined_command] = STATE(60),
    [sym_expression] = STATE(60),
    [aux_sym_line_token1] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(218),
    [aux_sym_script_token1] = ACTIONS(108),
    [aux_sym_generic_text_token1] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(224),
  },
  [61] = {
    [aux_sym_line_token1] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [aux_sym_script_token1] = ACTIONS(126),
    [aux_sym_generic_text_token1] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(126),
  },
  [62] = {
    [aux_sym_line_token1] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(136),
    [aux_sym_script_token1] = ACTIONS(136),
    [aux_sym_generic_text_token1] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(136),
  },
  [63] = {
    [aux_sym_command_repeat1] = STATE(85),
    [sym_command_param] = STATE(85),
    [aux_sym_script_token1] = ACTIONS(144),
    [aux_sym_line_token1] = ACTIONS(142),
    [aux_sym_define_token1] = ACTIONS(227),
  },
  [64] = {
    [aux_sym_command_repeat1] = STATE(74),
    [sym_command_param] = STATE(74),
    [aux_sym_script_token1] = ACTIONS(144),
    [aux_sym_line_token1] = ACTIONS(142),
    [aux_sym_define_token1] = ACTIONS(227),
  },
  [65] = {
    [aux_sym_script_token1] = ACTIONS(146),
    [aux_sym_line_token1] = ACTIONS(148),
  },
  [66] = {
    [aux_sym_script_token1] = ACTIONS(150),
    [aux_sym_line_token1] = ACTIONS(152),
  },
  [67] = {
    [sym_command_param_value] = STATE(75),
    [aux_sym_command_param_value_repeat2] = STATE(69),
    [sym_expression] = STATE(69),
    [anon_sym_LBRACE] = ACTIONS(229),
    [aux_sym_command_param_value_token2] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(233),
  },
  [68] = {
    [aux_sym_define_token1] = ACTIONS(235),
    [aux_sym_line_token1] = ACTIONS(235),
    [ts_builtin_sym_end] = ACTIONS(158),
    [aux_sym_script_token1] = ACTIONS(158),
  },
  [69] = {
    [sym_expression] = STATE(76),
    [aux_sym_command_param_value_repeat2] = STATE(76),
    [aux_sym_define_token1] = ACTIONS(237),
    [aux_sym_line_token1] = ACTIONS(237),
    [ts_builtin_sym_end] = ACTIONS(160),
    [aux_sym_command_param_value_token2] = ACTIONS(239),
    [aux_sym_script_token1] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(229),
  },
  [70] = {
    [sym_command_param_id] = ACTIONS(241),
  },
  [71] = {
    [aux_sym_line_token1] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(166),
    [aux_sym_script_token1] = ACTIONS(166),
    [aux_sym_generic_text_token1] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(166),
  },
  [72] = {
    [aux_sym_command_repeat1] = STATE(72),
    [sym_command_param] = STATE(72),
    [aux_sym_define_token1] = ACTIONS(243),
    [aux_sym_line_token1] = ACTIONS(246),
    [ts_builtin_sym_end] = ACTIONS(171),
    [aux_sym_script_token1] = ACTIONS(171),
  },
  [73] = {
    [aux_sym_script_token1] = ACTIONS(175),
    [aux_sym_line_token1] = ACTIONS(177),
  },
  [74] = {
    [aux_sym_command_repeat1] = STATE(85),
    [sym_command_param] = STATE(85),
    [aux_sym_script_token1] = ACTIONS(181),
    [aux_sym_line_token1] = ACTIONS(179),
    [aux_sym_define_token1] = ACTIONS(227),
  },
  [75] = {
    [aux_sym_define_token1] = ACTIONS(248),
    [aux_sym_line_token1] = ACTIONS(248),
    [ts_builtin_sym_end] = ACTIONS(183),
    [aux_sym_script_token1] = ACTIONS(183),
  },
  [76] = {
    [sym_expression] = STATE(76),
    [aux_sym_command_param_value_repeat2] = STATE(76),
    [aux_sym_define_token1] = ACTIONS(250),
    [aux_sym_line_token1] = ACTIONS(250),
    [aux_sym_command_param_value_token2] = ACTIONS(252),
    [ts_builtin_sym_end] = ACTIONS(189),
    [aux_sym_script_token1] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(255),
  },
  [77] = {
    [aux_sym_line_token1] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(199),
    [aux_sym_script_token1] = ACTIONS(199),
    [aux_sym_generic_text_token1] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(199),
  },
  [78] = {
    [aux_sym_define_token1] = ACTIONS(258),
    [aux_sym_line_token1] = ACTIONS(258),
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_script_token1] = ACTIONS(201),
  },
  [79] = {
    [aux_sym_script_token1] = ACTIONS(49),
    [aux_sym_line_token1] = ACTIONS(214),
    [aux_sym_define_token1] = ACTIONS(214),
  },
  [80] = {
    [aux_sym_define_token1] = ACTIONS(136),
    [aux_sym_command_param_value_token2] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(136),
  },
  [81] = {
    [sym_command_param_value] = STATE(86),
    [aux_sym_command_param_value_repeat2] = STATE(83),
    [sym_expression] = STATE(83),
    [anon_sym_LBRACE] = ACTIONS(260),
    [aux_sym_command_param_value_token2] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(264),
  },
  [82] = {
    [aux_sym_script_token1] = ACTIONS(158),
    [aux_sym_line_token1] = ACTIONS(235),
    [aux_sym_define_token1] = ACTIONS(235),
  },
  [83] = {
    [sym_expression] = STATE(87),
    [aux_sym_command_param_value_repeat2] = STATE(87),
    [aux_sym_define_token1] = ACTIONS(237),
    [aux_sym_line_token1] = ACTIONS(237),
    [aux_sym_command_param_value_token2] = ACTIONS(266),
    [aux_sym_script_token1] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(260),
  },
  [84] = {
    [sym_command_param_id] = ACTIONS(268),
  },
  [85] = {
    [aux_sym_command_repeat1] = STATE(85),
    [sym_command_param] = STATE(85),
    [aux_sym_script_token1] = ACTIONS(171),
    [aux_sym_line_token1] = ACTIONS(246),
    [aux_sym_define_token1] = ACTIONS(270),
  },
  [86] = {
    [aux_sym_script_token1] = ACTIONS(183),
    [aux_sym_line_token1] = ACTIONS(248),
    [aux_sym_define_token1] = ACTIONS(248),
  },
  [87] = {
    [sym_expression] = STATE(87),
    [aux_sym_command_param_value_repeat2] = STATE(87),
    [aux_sym_define_token1] = ACTIONS(250),
    [aux_sym_line_token1] = ACTIONS(250),
    [aux_sym_command_param_value_token2] = ACTIONS(273),
    [aux_sym_script_token1] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(276),
  },
  [88] = {
    [aux_sym_script_token1] = ACTIONS(201),
    [aux_sym_line_token1] = ACTIONS(258),
    [aux_sym_define_token1] = ACTIONS(258),
  },
  [89] = {
    [aux_sym_define_token1] = ACTIONS(134),
    [aux_sym_line_token1] = ACTIONS(134),
    [aux_sym_command_param_value_token2] = ACTIONS(136),
    [ts_builtin_sym_end] = ACTIONS(136),
    [aux_sym_script_token1] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
  },
  [90] = {
    [aux_sym_define_token1] = ACTIONS(134),
    [aux_sym_line_token1] = ACTIONS(134),
    [aux_sym_command_param_value_token2] = ACTIONS(136),
    [aux_sym_script_token1] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
  },
  [91] = {
    [sym_command] = STATE(58),
    [sym_generic_text] = STATE(58),
    [sym_inlined_command] = STATE(56),
    [sym_label] = STATE(58),
    [aux_sym_generic_text_repeat1] = STATE(56),
    [sym_define] = STATE(58),
    [sym_expression] = STATE(56),
    [anon_sym_POUND] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(208),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(283),
    [anon_sym_LBRACE] = ACTIONS(210),
    [sym_comment] = ACTIONS(285),
    [aux_sym_generic_text_token1] = ACTIONS(287),
  },
  [92] = {
    [sym_command_id] = STATE(59),
    [aux_sym_define_key_token1] = ACTIONS(289),
  },
  [93] = {
    [aux_sym_command_repeat1] = STATE(97),
    [sym_command_param] = STATE(97),
    [sym_command_nameless_param] = STATE(98),
    [aux_sym_define_token1] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(291),
  },
  [94] = {
    [anon_sym_RBRACE] = ACTIONS(293),
  },
  [95] = {
    [sym_label_id] = STATE(66),
    [aux_sym_define_key_token1] = ACTIONS(295),
  },
  [96] = {
    [sym_command_param_value] = STATE(68),
    [aux_sym_command_param_value_repeat2] = STATE(69),
    [sym_expression] = STATE(69),
    [aux_sym_command_param_value_token2] = ACTIONS(297),
    [sym_command_param_id] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(233),
  },
  [97] = {
    [aux_sym_command_repeat1] = STATE(44),
    [sym_command_param] = STATE(44),
    [aux_sym_define_token1] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(299),
  },
  [98] = {
    [aux_sym_command_repeat1] = STATE(100),
    [sym_command_param] = STATE(100),
    [aux_sym_define_token1] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(299),
  },
  [99] = {
    [sym_define_value] = ACTIONS(301),
  },
  [100] = {
    [aux_sym_command_repeat1] = STATE(44),
    [sym_command_param] = STATE(44),
    [aux_sym_define_token1] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(303),
  },
  [101] = {
    [aux_sym_command_param_value_repeat1] = STATE(54),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_command_param_value_token1] = ACTIONS(187),
  },
  [102] = {
    [anon_sym_DQUOTE] = ACTIONS(305),
  },
  [103] = {
    [anon_sym_RBRACE] = ACTIONS(307),
  },
  [104] = {
    [sym_command_param_value] = STATE(82),
    [aux_sym_command_param_value_repeat2] = STATE(83),
    [sym_expression] = STATE(83),
    [aux_sym_command_param_value_token2] = ACTIONS(309),
    [sym_command_param_id] = ACTIONS(268),
    [anon_sym_LBRACE] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(264),
  },
  [105] = {
    [aux_sym_command_param_value_repeat1] = STATE(54),
    [anon_sym_DQUOTE] = ACTIONS(311),
    [aux_sym_command_param_value_token1] = ACTIONS(187),
  },
  [106] = {
    [anon_sym_DQUOTE] = ACTIONS(311),
  },
  [107] = {
    [anon_sym_RBRACE] = ACTIONS(313),
  },
  [108] = {
    [anon_sym_RBRACE] = ACTIONS(315),
  },
  [109] = {
    [sym_command_id] = STATE(93),
    [aux_sym_define_key_token1] = ACTIONS(21),
  },
  [110] = {
    [aux_sym_expression_token1] = ACTIONS(317),
  },
  [111] = {
    [aux_sym_line_token1] = ACTIONS(319),
  },
  [112] = {
    [aux_sym_define_token1] = ACTIONS(321),
  },
  [113] = {
    [aux_sym_command_param_value_repeat1] = STATE(101),
    [sym_expression] = STATE(102),
    [anon_sym_LBRACE] = ACTIONS(120),
    [aux_sym_command_param_value_token1] = ACTIONS(323),
  },
  [114] = {
    [aux_sym_expression_token1] = ACTIONS(325),
  },
  [115] = {
    [aux_sym_command_param_value_repeat1] = STATE(105),
    [sym_expression] = STATE(106),
    [anon_sym_LBRACE] = ACTIONS(120),
    [aux_sym_command_param_value_token1] = ACTIONS(327),
  },
  [116] = {
    [aux_sym_expression_token1] = ACTIONS(329),
  },
  [117] = {
    [aux_sym_expression_token1] = ACTIONS(331),
  },
  [118] = {
    [sym_define_key] = STATE(112),
    [aux_sym_define_key_token1] = ACTIONS(23),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_script, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = false}, SHIFT(6),
  [15] = {.count = 1, .reusable = false}, SHIFT(12),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = true}, SHIFT(15),
  [25] = {.count = 1, .reusable = true}, SHIFT(17),
  [27] = {.count = 1, .reusable = true}, SHIFT(18),
  [29] = {.count = 1, .reusable = true}, SHIFT(57),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_line, 1),
  [33] = {.count = 1, .reusable = false}, SHIFT(20),
  [35] = {.count = 1, .reusable = true}, SHIFT(21),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_script, 1),
  [39] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [41] = {.count = 1, .reusable = true}, SHIFT(24),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_generic_text, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_generic_text, 1),
  [47] = {.count = 1, .reusable = false}, SHIFT(25),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_command_id, 1),
  [51] = {.count = 1, .reusable = true}, SHIFT(26),
  [53] = {.count = 1, .reusable = true}, SHIFT(27),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_define_key, 1),
  [57] = {.count = 1, .reusable = true}, SHIFT(30),
  [59] = {.count = 1, .reusable = true}, SHIFT(31),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_line, 2),
  [63] = {.count = 1, .reusable = false}, SHIFT(32),
  [65] = {.count = 1, .reusable = false}, SHIFT(96),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_command, 2),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_command, 2),
  [71] = {.count = 1, .reusable = true}, SHIFT(35),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(109),
  [76] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(118),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(110),
  [82] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2),
  [84] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(91),
  [87] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(92),
  [90] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(56),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(55),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(111),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_script, 2),
  [101] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2),
  [103] = {.count = 1, .reusable = false}, REDUCE(aux_sym_generic_text_repeat1, 2),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(2),
  [108] = {.count = 1, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2),
  [110] = {.count = 2, .reusable = false}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(25),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(4),
  [116] = {.count = 1, .reusable = false}, SHIFT(41),
  [118] = {.count = 1, .reusable = true}, SHIFT(38),
  [120] = {.count = 1, .reusable = true}, SHIFT(114),
  [122] = {.count = 1, .reusable = true}, SHIFT(39),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 3),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 3),
  [128] = {.count = 1, .reusable = true}, SHIFT(42),
  [130] = {.count = 1, .reusable = true}, SHIFT(43),
  [132] = {.count = 1, .reusable = true}, SHIFT(46),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_expression, 3),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_expression, 3),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_line, 3),
  [140] = {.count = 1, .reusable = false}, SHIFT(70),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_command, 3),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_command, 3),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_label_id, 1),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_label_id, 1),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [154] = {.count = 1, .reusable = true}, SHIFT(41),
  [156] = {.count = 1, .reusable = true}, SHIFT(49),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_command_nameless_param, 2),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_command_param_value, 1),
  [162] = {.count = 1, .reusable = true}, SHIFT(51),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 4),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 4),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(42),
  [171] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2),
  [173] = {.count = 1, .reusable = true}, SHIFT(52),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_define, 4),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_define, 4),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_command, 4),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_command_param, 3),
  [185] = {.count = 1, .reusable = true}, SHIFT(53),
  [187] = {.count = 1, .reusable = true}, SHIFT(54),
  [189] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(51),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(114),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 5),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 5),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_command_param_value, 3),
  [203] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(54),
  [208] = {.count = 1, .reusable = true}, SHIFT(109),
  [210] = {.count = 1, .reusable = true}, SHIFT(110),
  [212] = {.count = 1, .reusable = false}, SHIFT(60),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_command_id, 1),
  [216] = {.count = 1, .reusable = false}, SHIFT(104),
  [218] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(109),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(60),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(110),
  [227] = {.count = 1, .reusable = false}, SHIFT(84),
  [229] = {.count = 1, .reusable = true}, SHIFT(116),
  [231] = {.count = 1, .reusable = true}, SHIFT(69),
  [233] = {.count = 1, .reusable = true}, SHIFT(113),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_command_nameless_param, 2),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_command_param_value, 1),
  [239] = {.count = 1, .reusable = true}, SHIFT(76),
  [241] = {.count = 1, .reusable = true}, SHIFT(67),
  [243] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(70),
  [246] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym_command_param, 3),
  [250] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_param_value_repeat2, 2),
  [252] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(76),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(116),
  [258] = {.count = 1, .reusable = false}, REDUCE(sym_command_param_value, 3),
  [260] = {.count = 1, .reusable = true}, SHIFT(117),
  [262] = {.count = 1, .reusable = true}, SHIFT(83),
  [264] = {.count = 1, .reusable = true}, SHIFT(115),
  [266] = {.count = 1, .reusable = true}, SHIFT(87),
  [268] = {.count = 1, .reusable = true}, SHIFT(81),
  [270] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(84),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(87),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(117),
  [279] = {.count = 1, .reusable = false}, SHIFT(111),
  [281] = {.count = 1, .reusable = false}, SHIFT(118),
  [283] = {.count = 1, .reusable = false}, SHIFT(92),
  [285] = {.count = 1, .reusable = true}, SHIFT(58),
  [287] = {.count = 1, .reusable = false}, SHIFT(56),
  [289] = {.count = 1, .reusable = true}, SHIFT(79),
  [291] = {.count = 1, .reusable = true}, SHIFT(61),
  [293] = {.count = 1, .reusable = true}, SHIFT(62),
  [295] = {.count = 1, .reusable = true}, SHIFT(65),
  [297] = {.count = 1, .reusable = false}, SHIFT(69),
  [299] = {.count = 1, .reusable = true}, SHIFT(71),
  [301] = {.count = 1, .reusable = true}, SHIFT(73),
  [303] = {.count = 1, .reusable = true}, SHIFT(77),
  [305] = {.count = 1, .reusable = true}, SHIFT(78),
  [307] = {.count = 1, .reusable = true}, SHIFT(80),
  [309] = {.count = 1, .reusable = false}, SHIFT(83),
  [311] = {.count = 1, .reusable = true}, SHIFT(88),
  [313] = {.count = 1, .reusable = true}, SHIFT(89),
  [315] = {.count = 1, .reusable = true}, SHIFT(90),
  [317] = {.count = 1, .reusable = true}, SHIFT(94),
  [319] = {.count = 1, .reusable = true}, SHIFT(95),
  [321] = {.count = 1, .reusable = true}, SHIFT(99),
  [323] = {.count = 1, .reusable = true}, SHIFT(101),
  [325] = {.count = 1, .reusable = true}, SHIFT(103),
  [327] = {.count = 1, .reusable = true}, SHIFT(105),
  [329] = {.count = 1, .reusable = true}, SHIFT(107),
  [331] = {.count = 1, .reusable = true}, SHIFT(108),
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
