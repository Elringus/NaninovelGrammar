#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 89
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
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
  sym__hor_space = 17,
  sym__ver_space = 18,
  sym_script = 19,
  sym_line = 20,
  sym_comment = 21,
  sym_define = 22,
  sym_define_key = 23,
  sym_label = 24,
  sym_label_id = 25,
  sym_command = 26,
  sym_command_id = 27,
  sym_command_nameless_param = 28,
  sym_command_param = 29,
  sym_command_param_value = 30,
  sym_generic_text = 31,
  sym_inlined_command = 32,
  aux_sym_script_repeat1 = 33,
  aux_sym_command_repeat1 = 34,
  aux_sym_command_param_value_repeat1 = 35,
  aux_sym_command_param_value_repeat2 = 36,
  aux_sym_generic_text_repeat1 = 37,
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
      if (lookahead != 0)
        ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
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
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(28);
      END_STATE();
    case 28:
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
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(30);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '\n' ||
          lookahead == '\r')
        ADVANCE(3);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '}')
        ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == ']')
        ADVANCE(10);
      END_STATE();
    case 34:
      if (lookahead == '"')
        ADVANCE(4);
      if (lookahead == '{')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(28);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead == ':')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
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
        ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '"')
        ADVANCE(4);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}')
        ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\')
        ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 29},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 29},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 34},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 29},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 36},
  [40] = {.lex_state = 23},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 34},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 32},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 34},
  [47] = {.lex_state = 27},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 33},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 32},
  [53] = {.lex_state = 34},
  [54] = {.lex_state = 38},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 32},
  [58] = {.lex_state = 38},
  [59] = {.lex_state = 29},
  [60] = {.lex_state = 29},
  [61] = {.lex_state = 29},
  [62] = {.lex_state = 29},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 29},
  [65] = {.lex_state = 32},
  [66] = {.lex_state = 29},
  [67] = {.lex_state = 29},
  [68] = {.lex_state = 29},
  [69] = {.lex_state = 29},
  [70] = {.lex_state = 33},
  [71] = {.lex_state = 34},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 34},
  [75] = {.lex_state = 34},
  [76] = {.lex_state = 32},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 33},
  [79] = {.lex_state = 33},
  [80] = {.lex_state = 33},
  [81] = {.lex_state = 33},
  [82] = {.lex_state = 33},
  [83] = {.lex_state = 25},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 27},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 25},
  [88] = {.lex_state = 25},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_define_key_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__hor_space] = ACTIONS(1),
    [sym_expression] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ver_space] = ACTIONS(1),
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
    [sym_inlined_command] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_expression] = ACTIONS(11),
    [sym__ver_space] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
  },
  [2] = {
    [sym_inlined_command] = STATE(5),
    [sym_define] = STATE(15),
    [sym_generic_text] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_command] = STATE(15),
    [sym_label] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_expression] = ACTIONS(11),
    [sym__ver_space] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
  },
  [3] = {
    [aux_sym_comment_token1] = ACTIONS(27),
  },
  [4] = {
    [sym_label_id] = STATE(19),
    [sym__hor_space] = ACTIONS(29),
    [aux_sym_define_key_token1] = ACTIONS(31),
  },
  [5] = {
    [sym__ver_space] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__hor_space] = ACTIONS(33),
  },
  [6] = {
    [sym_command_id] = STATE(21),
    [aux_sym_define_key_token1] = ACTIONS(35),
  },
  [7] = {
    [aux_sym_generic_text_repeat1] = STATE(22),
    [sym_inlined_command] = STATE(22),
    [aux_sym_generic_text_token2] = ACTIONS(37),
    [sym__ver_space] = ACTIONS(33),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__hor_space] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_expression] = ACTIONS(43),
  },
  [8] = {
    [sym_command_id] = STATE(23),
    [aux_sym_define_key_token1] = ACTIONS(35),
  },
  [9] = {
    [sym_define_key] = STATE(25),
    [aux_sym_define_key_token1] = ACTIONS(45),
  },
  [10] = {
    [aux_sym_script_repeat1] = STATE(27),
    [sym_define] = STATE(11),
    [sym_label] = STATE(11),
    [sym_generic_text] = STATE(11),
    [sym_line] = STATE(28),
    [sym_comment] = STATE(11),
    [sym_command] = STATE(11),
    [sym_inlined_command] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__hor_space] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_expression] = ACTIONS(11),
    [sym__ver_space] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
  },
  [11] = {
    [sym__ver_space] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym__hor_space] = ACTIONS(53),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(55),
  },
  [13] = {
    [sym__ver_space] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(57),
    [sym__hor_space] = ACTIONS(59),
    [sym_expression] = ACTIONS(59),
    [sym__ver_space] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(57),
    [aux_sym_generic_text_token1] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(57),
  },
  [15] = {
    [sym__ver_space] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym__hor_space] = ACTIONS(63),
  },
  [16] = {
    [sym__ver_space] = ACTIONS(65),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym__hor_space] = ACTIONS(65),
  },
  [17] = {
    [sym_label_id] = STATE(31),
    [aux_sym_define_key_token1] = ACTIONS(31),
  },
  [18] = {
    [sym__ver_space] = ACTIONS(67),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym__hor_space] = ACTIONS(67),
  },
  [19] = {
    [sym__ver_space] = ACTIONS(69),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym__hor_space] = ACTIONS(69),
  },
  [20] = {
    [sym__ver_space] = ACTIONS(71),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(71),
    [sym__hor_space] = ACTIONS(71),
  },
  [21] = {
    [sym_command_param] = STATE(33),
    [aux_sym_command_repeat1] = STATE(33),
    [sym_command_nameless_param] = STATE(34),
    [sym__hor_space] = ACTIONS(73),
    [sym__ver_space] = ACTIONS(75),
    [ts_builtin_sym_end] = ACTIONS(75),
  },
  [22] = {
    [aux_sym_generic_text_repeat1] = STATE(35),
    [sym_inlined_command] = STATE(35),
    [aux_sym_generic_text_token2] = ACTIONS(77),
    [sym__ver_space] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym__hor_space] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_expression] = ACTIONS(83),
  },
  [23] = {
    [sym_command_nameless_param] = STATE(38),
    [sym_command_param] = STATE(37),
    [aux_sym_command_repeat1] = STATE(37),
    [sym__hor_space] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(87),
  },
  [24] = {
    [sym__hor_space] = ACTIONS(89),
  },
  [25] = {
    [sym__hor_space] = ACTIONS(91),
  },
  [26] = {
    [sym_inlined_command] = STATE(5),
    [sym_define] = STATE(15),
    [sym_generic_text] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_command] = STATE(15),
    [sym_label] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_expression] = ACTIONS(11),
    [sym__ver_space] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
  },
  [27] = {
    [aux_sym_script_repeat1] = STATE(27),
    [sym_define] = STATE(11),
    [sym_label] = STATE(11),
    [sym_generic_text] = STATE(11),
    [sym_line] = STATE(41),
    [sym_comment] = STATE(11),
    [sym_command] = STATE(11),
    [sym_inlined_command] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_POUND] = ACTIONS(98),
    [sym__hor_space] = ACTIONS(101),
    [sym_expression] = ACTIONS(104),
    [sym__ver_space] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(110),
    [aux_sym_generic_text_token1] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_GT] = ACTIONS(119),
  },
  [28] = {
    [sym__ver_space] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(93),
  },
  [29] = {
    [sym__ver_space] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(61),
  },
  [30] = {
    [sym__ver_space] = ACTIONS(122),
    [ts_builtin_sym_end] = ACTIONS(122),
  },
  [31] = {
    [sym__ver_space] = ACTIONS(124),
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym__hor_space] = ACTIONS(124),
  },
  [32] = {
    [sym_command_param_value] = STATE(44),
    [aux_sym_command_param_value_repeat2] = STATE(45),
    [sym_expression] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [aux_sym_command_param_value_token2] = ACTIONS(130),
    [sym_command_param_id] = ACTIONS(132),
  },
  [33] = {
    [sym_command_param] = STATE(47),
    [aux_sym_command_repeat1] = STATE(47),
    [sym__hor_space] = ACTIONS(134),
    [sym__ver_space] = ACTIONS(136),
    [ts_builtin_sym_end] = ACTIONS(136),
  },
  [34] = {
    [sym_command_param] = STATE(48),
    [aux_sym_command_repeat1] = STATE(48),
    [sym__hor_space] = ACTIONS(134),
    [sym__ver_space] = ACTIONS(136),
    [ts_builtin_sym_end] = ACTIONS(136),
  },
  [35] = {
    [aux_sym_generic_text_repeat1] = STATE(35),
    [sym_inlined_command] = STATE(35),
    [aux_sym_generic_text_token2] = ACTIONS(138),
    [sym__ver_space] = ACTIONS(141),
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym__hor_space] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(145),
    [sym_expression] = ACTIONS(148),
  },
  [36] = {
    [sym__ver_space] = ACTIONS(151),
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym__hor_space] = ACTIONS(151),
  },
  [37] = {
    [sym_command_param] = STATE(76),
    [aux_sym_command_repeat1] = STATE(76),
    [sym__hor_space] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(155),
  },
  [38] = {
    [sym_command_param] = STATE(50),
    [aux_sym_command_repeat1] = STATE(50),
    [sym__hor_space] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(155),
  },
  [39] = {
    [sym_define_value] = ACTIONS(157),
  },
  [40] = {
    [sym_inlined_command] = STATE(5),
    [sym_define] = STATE(15),
    [sym_generic_text] = STATE(15),
    [sym_comment] = STATE(15),
    [sym_command] = STATE(15),
    [sym_label] = STATE(15),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_expression] = ACTIONS(11),
    [sym__ver_space] = ACTIONS(25),
    [anon_sym_AT] = ACTIONS(159),
    [aux_sym_generic_text_token1] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
  },
  [41] = {
    [sym__ver_space] = ACTIONS(25),
  },
  [42] = {
    [sym_command_param_value] = STATE(52),
    [aux_sym_command_param_value_repeat2] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [aux_sym_command_param_value_token2] = ACTIONS(126),
    [sym_expression] = ACTIONS(126),
  },
  [43] = {
    [aux_sym_command_param_value_repeat1] = STATE(54),
    [aux_sym_command_param_value_token1] = ACTIONS(163),
    [sym_expression] = ACTIONS(165),
  },
  [44] = {
    [sym__ver_space] = ACTIONS(167),
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(167),
    [sym__hor_space] = ACTIONS(167),
  },
  [45] = {
    [aux_sym_command_param_value_repeat2] = STATE(55),
    [sym__ver_space] = ACTIONS(169),
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym__hor_space] = ACTIONS(169),
    [aux_sym_command_param_value_token2] = ACTIONS(171),
    [sym_expression] = ACTIONS(171),
  },
  [46] = {
    [sym_command_param_id] = ACTIONS(132),
  },
  [47] = {
    [sym_command_param] = STATE(47),
    [aux_sym_command_repeat1] = STATE(47),
    [sym__hor_space] = ACTIONS(173),
    [sym__ver_space] = ACTIONS(176),
    [ts_builtin_sym_end] = ACTIONS(176),
  },
  [48] = {
    [sym_command_param] = STATE(47),
    [aux_sym_command_repeat1] = STATE(47),
    [sym__hor_space] = ACTIONS(134),
    [sym__ver_space] = ACTIONS(178),
    [ts_builtin_sym_end] = ACTIONS(178),
  },
  [49] = {
    [sym__ver_space] = ACTIONS(180),
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym__hor_space] = ACTIONS(180),
  },
  [50] = {
    [sym_command_param] = STATE(76),
    [aux_sym_command_repeat1] = STATE(76),
    [sym__hor_space] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(182),
  },
  [51] = {
    [sym__ver_space] = ACTIONS(184),
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym__hor_space] = ACTIONS(184),
  },
  [52] = {
    [sym__ver_space] = ACTIONS(186),
    [ts_builtin_sym_end] = ACTIONS(186),
    [anon_sym_RBRACK] = ACTIONS(186),
    [sym__hor_space] = ACTIONS(186),
  },
  [53] = {
    [anon_sym_DQUOTE] = ACTIONS(188),
  },
  [54] = {
    [aux_sym_command_param_value_repeat1] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(188),
    [aux_sym_command_param_value_token1] = ACTIONS(190),
  },
  [55] = {
    [aux_sym_command_param_value_repeat2] = STATE(55),
    [sym__ver_space] = ACTIONS(192),
    [ts_builtin_sym_end] = ACTIONS(192),
    [sym__hor_space] = ACTIONS(192),
    [aux_sym_command_param_value_token2] = ACTIONS(194),
    [sym_expression] = ACTIONS(194),
  },
  [56] = {
    [sym__ver_space] = ACTIONS(197),
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym__hor_space] = ACTIONS(197),
  },
  [57] = {
    [sym__ver_space] = ACTIONS(199),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [sym__hor_space] = ACTIONS(199),
  },
  [58] = {
    [aux_sym_command_param_value_repeat1] = STATE(58),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [aux_sym_command_param_value_token1] = ACTIONS(203),
  },
  [59] = {
    [aux_sym_generic_text_repeat1] = STATE(60),
    [sym_inlined_command] = STATE(60),
    [aux_sym_generic_text_token2] = ACTIONS(206),
    [sym__ver_space] = ACTIONS(33),
    [sym__hor_space] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_expression] = ACTIONS(210),
  },
  [60] = {
    [aux_sym_generic_text_repeat1] = STATE(61),
    [sym_inlined_command] = STATE(61),
    [aux_sym_generic_text_token2] = ACTIONS(212),
    [sym__ver_space] = ACTIONS(79),
    [sym__hor_space] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(208),
    [sym_expression] = ACTIONS(214),
  },
  [61] = {
    [aux_sym_generic_text_repeat1] = STATE(61),
    [sym_inlined_command] = STATE(61),
    [aux_sym_generic_text_token2] = ACTIONS(216),
    [sym__ver_space] = ACTIONS(141),
    [sym__hor_space] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_expression] = ACTIONS(222),
  },
  [62] = {
    [aux_sym_generic_text_token2] = ACTIONS(225),
    [sym__ver_space] = ACTIONS(151),
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym__hor_space] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(151),
    [sym_expression] = ACTIONS(151),
  },
  [63] = {
    [aux_sym_command_param_value_repeat2] = STATE(65),
    [sym__ver_space] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym__hor_space] = ACTIONS(169),
    [aux_sym_command_param_value_token2] = ACTIONS(227),
    [sym_expression] = ACTIONS(227),
  },
  [64] = {
    [aux_sym_generic_text_token2] = ACTIONS(229),
    [sym__ver_space] = ACTIONS(180),
    [ts_builtin_sym_end] = ACTIONS(180),
    [sym__hor_space] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(180),
    [sym_expression] = ACTIONS(180),
  },
  [65] = {
    [aux_sym_command_param_value_repeat2] = STATE(65),
    [sym__ver_space] = ACTIONS(192),
    [anon_sym_RBRACK] = ACTIONS(192),
    [sym__hor_space] = ACTIONS(192),
    [aux_sym_command_param_value_token2] = ACTIONS(231),
    [sym_expression] = ACTIONS(231),
  },
  [66] = {
    [aux_sym_generic_text_token2] = ACTIONS(234),
    [sym__ver_space] = ACTIONS(197),
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym__hor_space] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym_expression] = ACTIONS(197),
  },
  [67] = {
    [aux_sym_generic_text_token2] = ACTIONS(225),
    [sym__ver_space] = ACTIONS(151),
    [sym__hor_space] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(151),
    [sym_expression] = ACTIONS(151),
  },
  [68] = {
    [aux_sym_generic_text_token2] = ACTIONS(229),
    [sym__ver_space] = ACTIONS(180),
    [sym__hor_space] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(180),
    [sym_expression] = ACTIONS(180),
  },
  [69] = {
    [aux_sym_generic_text_token2] = ACTIONS(234),
    [sym__ver_space] = ACTIONS(197),
    [sym__hor_space] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(197),
    [sym_expression] = ACTIONS(197),
  },
  [70] = {
    [sym_command_param] = STATE(72),
    [aux_sym_command_repeat1] = STATE(72),
    [sym_command_nameless_param] = STATE(73),
    [sym__hor_space] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(236),
  },
  [71] = {
    [sym_command_param_value] = STATE(44),
    [aux_sym_command_param_value_repeat2] = STATE(63),
    [sym_expression] = ACTIONS(238),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [aux_sym_command_param_value_token2] = ACTIONS(240),
    [sym_command_param_id] = ACTIONS(242),
  },
  [72] = {
    [sym_command_param] = STATE(76),
    [aux_sym_command_repeat1] = STATE(76),
    [sym__hor_space] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(244),
  },
  [73] = {
    [sym_command_param] = STATE(78),
    [aux_sym_command_repeat1] = STATE(78),
    [sym__hor_space] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(244),
  },
  [74] = {
    [sym_command_param_value] = STATE(52),
    [aux_sym_command_param_value_repeat2] = STATE(63),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [aux_sym_command_param_value_token2] = ACTIONS(238),
    [sym_expression] = ACTIONS(238),
  },
  [75] = {
    [sym_command_param_id] = ACTIONS(242),
  },
  [76] = {
    [sym_command_param] = STATE(76),
    [aux_sym_command_repeat1] = STATE(76),
    [sym__hor_space] = ACTIONS(246),
    [sym__ver_space] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(176),
  },
  [77] = {
    [sym_command_param] = STATE(76),
    [aux_sym_command_repeat1] = STATE(76),
    [sym__hor_space] = ACTIONS(153),
    [sym__ver_space] = ACTIONS(178),
  },
  [78] = {
    [sym_command_param] = STATE(76),
    [aux_sym_command_repeat1] = STATE(76),
    [sym__hor_space] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(249),
  },
  [79] = {
    [sym_command_param] = STATE(80),
    [aux_sym_command_repeat1] = STATE(80),
    [sym_command_nameless_param] = STATE(81),
    [sym__hor_space] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(251),
  },
  [80] = {
    [sym_command_param] = STATE(76),
    [aux_sym_command_repeat1] = STATE(76),
    [sym__hor_space] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(253),
  },
  [81] = {
    [sym_command_param] = STATE(82),
    [aux_sym_command_repeat1] = STATE(82),
    [sym__hor_space] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(253),
  },
  [82] = {
    [sym_command_param] = STATE(76),
    [aux_sym_command_repeat1] = STATE(76),
    [sym__hor_space] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(255),
  },
  [83] = {
    [sym_command_id] = STATE(70),
    [aux_sym_define_key_token1] = ACTIONS(35),
  },
  [84] = {
    [sym_command_param] = STATE(85),
    [aux_sym_command_repeat1] = STATE(85),
    [sym_command_nameless_param] = STATE(86),
    [sym__hor_space] = ACTIONS(85),
    [sym__ver_space] = ACTIONS(75),
  },
  [85] = {
    [sym_command_param] = STATE(76),
    [aux_sym_command_repeat1] = STATE(76),
    [sym__hor_space] = ACTIONS(153),
    [sym__ver_space] = ACTIONS(136),
  },
  [86] = {
    [sym_command_param] = STATE(77),
    [aux_sym_command_repeat1] = STATE(77),
    [sym__hor_space] = ACTIONS(153),
    [sym__ver_space] = ACTIONS(136),
  },
  [87] = {
    [sym_command_id] = STATE(79),
    [aux_sym_define_key_token1] = ACTIONS(35),
  },
  [88] = {
    [sym_command_id] = STATE(84),
    [aux_sym_define_key_token1] = ACTIONS(35),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_script, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(10),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_script, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, SHIFT(16),
  [29] = {.count = 1, .reusable = true}, SHIFT(17),
  [31] = {.count = 1, .reusable = true}, SHIFT(18),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_generic_text, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(20),
  [37] = {.count = 1, .reusable = false}, SHIFT(22),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_generic_text, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(83),
  [43] = {.count = 1, .reusable = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, SHIFT(24),
  [47] = {.count = 1, .reusable = false}, SHIFT(26),
  [49] = {.count = 1, .reusable = true}, SHIFT(27),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_line, 1),
  [53] = {.count = 1, .reusable = true}, SHIFT(29),
  [55] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2),
  [59] = {.count = 1, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_line, 2),
  [63] = {.count = 1, .reusable = true}, SHIFT(30),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_label_id, 1),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_command_id, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(32),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_command, 2),
  [77] = {.count = 1, .reusable = false}, SHIFT(35),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_generic_text, 2),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_generic_text, 2),
  [83] = {.count = 1, .reusable = true}, SHIFT(35),
  [85] = {.count = 1, .reusable = true}, SHIFT(71),
  [87] = {.count = 1, .reusable = true}, SHIFT(36),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_define_key, 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(39),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_script, 2),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(3),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(4),
  [101] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(40),
  [104] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(5),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(27),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(88),
  [113] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(59),
  [116] = {.count = 2, .reusable = false}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(8),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(9),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_line, 3),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [126] = {.count = 1, .reusable = true}, SHIFT(45),
  [128] = {.count = 1, .reusable = true}, SHIFT(43),
  [130] = {.count = 1, .reusable = false}, SHIFT(45),
  [132] = {.count = 1, .reusable = true}, SHIFT(42),
  [134] = {.count = 1, .reusable = true}, SHIFT(46),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_command, 3),
  [138] = {.count = 2, .reusable = false}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(35),
  [141] = {.count = 1, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2),
  [143] = {.count = 1, .reusable = false}, REDUCE(aux_sym_generic_text_repeat1, 2),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(83),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(35),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 3),
  [153] = {.count = 1, .reusable = true}, SHIFT(75),
  [155] = {.count = 1, .reusable = true}, SHIFT(49),
  [157] = {.count = 1, .reusable = true}, SHIFT(51),
  [159] = {.count = 1, .reusable = true}, SHIFT(88),
  [161] = {.count = 1, .reusable = false}, SHIFT(59),
  [163] = {.count = 1, .reusable = true}, SHIFT(54),
  [165] = {.count = 1, .reusable = true}, SHIFT(53),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_command_nameless_param, 2),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_command_param_value, 1),
  [171] = {.count = 1, .reusable = true}, SHIFT(55),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(46),
  [176] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 4),
  [182] = {.count = 1, .reusable = true}, SHIFT(56),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_define, 4),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_command_param, 3),
  [188] = {.count = 1, .reusable = true}, SHIFT(57),
  [190] = {.count = 1, .reusable = true}, SHIFT(58),
  [192] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2),
  [194] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(55),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 5),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_command_param_value, 3),
  [201] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(58),
  [206] = {.count = 1, .reusable = false}, SHIFT(60),
  [208] = {.count = 1, .reusable = true}, SHIFT(87),
  [210] = {.count = 1, .reusable = true}, SHIFT(60),
  [212] = {.count = 1, .reusable = false}, SHIFT(61),
  [214] = {.count = 1, .reusable = true}, SHIFT(61),
  [216] = {.count = 2, .reusable = false}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(61),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(87),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(61),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 3),
  [227] = {.count = 1, .reusable = true}, SHIFT(65),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 4),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(65),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 5),
  [236] = {.count = 1, .reusable = true}, SHIFT(62),
  [238] = {.count = 1, .reusable = true}, SHIFT(63),
  [240] = {.count = 1, .reusable = false}, SHIFT(63),
  [242] = {.count = 1, .reusable = true}, SHIFT(74),
  [244] = {.count = 1, .reusable = true}, SHIFT(64),
  [246] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(75),
  [249] = {.count = 1, .reusable = true}, SHIFT(66),
  [251] = {.count = 1, .reusable = true}, SHIFT(67),
  [253] = {.count = 1, .reusable = true}, SHIFT(68),
  [255] = {.count = 1, .reusable = true}, SHIFT(69),
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
