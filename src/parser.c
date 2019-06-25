#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 86
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
  aux_sym_generic_text_token3 = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  sym_expression = 17,
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
  [aux_sym_generic_text_token3] = "generic_text_token3",
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
  [aux_sym_generic_text_token3] = {
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
      if (lookahead == 0) ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(34);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '>') ADVANCE(11);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '{') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(34);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '{') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != ':' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(34);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '>') ADVANCE(11);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(8);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(34);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_define_key_token1);
      if (lookahead == ':') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_define_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_command_param_id);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '@' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ':' &&
          lookahead != '@' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_generic_text_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_generic_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_generic_text_token3);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_generic_text_token3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_expression);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__hor_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__ver_space);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 6},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__ver_space] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_define_key_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_expression] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__hor_space] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
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
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_expression] = ACTIONS(11),
    [sym__hor_space] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(19),
    [sym__ver_space] = ACTIONS(21),
  },
  [2] = {
    [sym_command_id] = STATE(15),
    [aux_sym_define_key_token1] = ACTIONS(23),
  },
  [3] = {
    [aux_sym_comment_token1] = ACTIONS(25),
  },
  [4] = {
    [sym_label_id] = STATE(19),
    [sym__hor_space] = ACTIONS(27),
    [aux_sym_define_key_token1] = ACTIONS(29),
  },
  [5] = {
    [aux_sym_generic_text_repeat1] = STATE(21),
    [sym_inlined_command] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_expression] = ACTIONS(33),
    [aux_sym_generic_text_token3] = ACTIONS(35),
    [sym__ver_space] = ACTIONS(31),
  },
  [6] = {
    [sym_label] = STATE(11),
    [sym_define] = STATE(11),
    [sym_generic_text] = STATE(11),
    [sym_line] = STATE(23),
    [sym_comment] = STATE(11),
    [sym_command] = STATE(11),
    [sym_inlined_command] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_expression] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(19),
    [sym__ver_space] = ACTIONS(39),
  },
  [7] = {
    [sym_command_id] = STATE(24),
    [aux_sym_define_key_token1] = ACTIONS(23),
  },
  [8] = {
    [aux_sym_generic_text_token2] = ACTIONS(41),
  },
  [9] = {
    [sym_define_key] = STATE(27),
    [aux_sym_define_key_token1] = ACTIONS(43),
  },
  [10] = {
    [aux_sym_script_repeat1] = STATE(29),
    [sym_define] = STATE(11),
    [sym_label] = STATE(11),
    [sym_generic_text] = STATE(11),
    [sym_line] = STATE(30),
    [sym_comment] = STATE(11),
    [sym_command] = STATE(11),
    [sym_inlined_command] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_expression] = ACTIONS(11),
    [sym__hor_space] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(19),
    [sym__ver_space] = ACTIONS(47),
  },
  [11] = {
    [sym__ver_space] = ACTIONS(49),
    [ts_builtin_sym_end] = ACTIONS(49),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(51),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym__ver_space] = ACTIONS(39),
  },
  [14] = {
    [sym__hor_space] = ACTIONS(53),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym__ver_space] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(53),
  },
  [15] = {
    [sym_command_nameless_param] = STATE(34),
    [sym_command_param] = STATE(33),
    [aux_sym_command_repeat1] = STATE(33),
    [sym__hor_space] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(57),
  },
  [16] = {
    [sym__ver_space] = ACTIONS(59),
    [ts_builtin_sym_end] = ACTIONS(59),
  },
  [17] = {
    [sym_label_id] = STATE(35),
    [aux_sym_define_key_token1] = ACTIONS(29),
  },
  [18] = {
    [sym__hor_space] = ACTIONS(61),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym__ver_space] = ACTIONS(61),
  },
  [19] = {
    [sym__hor_space] = ACTIONS(63),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym__ver_space] = ACTIONS(65),
  },
  [20] = {
    [aux_sym_generic_text_token2] = ACTIONS(67),
  },
  [21] = {
    [aux_sym_generic_text_repeat1] = STATE(38),
    [sym_inlined_command] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_expression] = ACTIONS(71),
    [aux_sym_generic_text_token3] = ACTIONS(35),
    [sym__ver_space] = ACTIONS(69),
  },
  [22] = {
    [anon_sym_LBRACK] = ACTIONS(73),
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_expression] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(73),
    [sym__hor_space] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(73),
    [aux_sym_generic_text_token1] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [sym__ver_space] = ACTIONS(73),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym__ver_space] = ACTIONS(77),
  },
  [24] = {
    [sym_command_param] = STATE(41),
    [aux_sym_command_repeat1] = STATE(41),
    [sym_command_nameless_param] = STATE(42),
    [sym__hor_space] = ACTIONS(79),
    [sym__ver_space] = ACTIONS(81),
    [ts_builtin_sym_end] = ACTIONS(81),
  },
  [25] = {
    [aux_sym_generic_text_repeat1] = STATE(43),
    [sym_inlined_command] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_expression] = ACTIONS(83),
    [aux_sym_generic_text_token3] = ACTIONS(35),
    [sym__ver_space] = ACTIONS(69),
  },
  [26] = {
    [sym__hor_space] = ACTIONS(85),
  },
  [27] = {
    [sym__hor_space] = ACTIONS(87),
  },
  [28] = {
    [sym_label] = STATE(11),
    [sym_define] = STATE(11),
    [sym_generic_text] = STATE(11),
    [sym_line] = STATE(45),
    [sym_comment] = STATE(11),
    [sym_command] = STATE(11),
    [sym_inlined_command] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_expression] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(19),
    [sym__ver_space] = ACTIONS(39),
  },
  [29] = {
    [aux_sym_script_repeat1] = STATE(29),
    [sym_define] = STATE(11),
    [sym_label] = STATE(11),
    [sym_generic_text] = STATE(11),
    [sym_line] = STATE(47),
    [sym_comment] = STATE(11),
    [sym_command] = STATE(11),
    [sym_inlined_command] = STATE(5),
    [anon_sym_LBRACK] = ACTIONS(89),
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_expression] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_POUND] = ACTIONS(98),
    [sym__hor_space] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(104),
    [aux_sym_generic_text_token1] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(110),
    [sym__ver_space] = ACTIONS(113),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym__ver_space] = ACTIONS(39),
  },
  [31] = {
    [sym_command_param_value] = STATE(50),
    [aux_sym_command_param_value_repeat2] = STATE(51),
    [sym_expression] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [aux_sym_command_param_value_token2] = ACTIONS(120),
    [sym_command_param_id] = ACTIONS(122),
  },
  [32] = {
    [anon_sym_LBRACK] = ACTIONS(124),
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_expression] = ACTIONS(124),
    [aux_sym_generic_text_token3] = ACTIONS(124),
    [sym__ver_space] = ACTIONS(124),
  },
  [33] = {
    [sym_command_param] = STATE(54),
    [aux_sym_command_repeat1] = STATE(54),
    [sym__hor_space] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(128),
  },
  [34] = {
    [sym_command_param] = STATE(55),
    [aux_sym_command_repeat1] = STATE(55),
    [sym__hor_space] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(128),
  },
  [35] = {
    [sym__hor_space] = ACTIONS(130),
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym__ver_space] = ACTIONS(132),
  },
  [36] = {
    [sym__ver_space] = ACTIONS(132),
    [ts_builtin_sym_end] = ACTIONS(132),
  },
  [37] = {
    [anon_sym_LBRACK] = ACTIONS(134),
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_expression] = ACTIONS(134),
    [aux_sym_generic_text_token3] = ACTIONS(134),
    [sym__ver_space] = ACTIONS(134),
  },
  [38] = {
    [aux_sym_generic_text_repeat1] = STATE(38),
    [sym_inlined_command] = STATE(38),
    [anon_sym_LBRACK] = ACTIONS(136),
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_expression] = ACTIONS(139),
    [aux_sym_generic_text_token3] = ACTIONS(142),
    [sym__ver_space] = ACTIONS(134),
  },
  [39] = {
    [anon_sym_LBRACK] = ACTIONS(145),
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_expression] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(145),
    [sym__hor_space] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(145),
    [aux_sym_generic_text_token1] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [sym__ver_space] = ACTIONS(145),
  },
  [40] = {
    [sym_command_param_value] = STATE(50),
    [aux_sym_command_param_value_repeat2] = STATE(71),
    [sym_command_param_id] = ACTIONS(147),
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_expression] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__ver_space] = ACTIONS(149),
    [aux_sym_command_param_value_token2] = ACTIONS(155),
  },
  [41] = {
    [sym_command_param] = STATE(73),
    [aux_sym_command_repeat1] = STATE(73),
    [sym__hor_space] = ACTIONS(157),
    [sym__ver_space] = ACTIONS(149),
    [ts_builtin_sym_end] = ACTIONS(149),
  },
  [42] = {
    [sym_command_param] = STATE(58),
    [aux_sym_command_repeat1] = STATE(58),
    [sym__hor_space] = ACTIONS(157),
    [sym__ver_space] = ACTIONS(149),
    [ts_builtin_sym_end] = ACTIONS(149),
  },
  [43] = {
    [aux_sym_generic_text_repeat1] = STATE(38),
    [sym_inlined_command] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_expression] = ACTIONS(71),
    [aux_sym_generic_text_token3] = ACTIONS(35),
    [sym__ver_space] = ACTIONS(159),
  },
  [44] = {
    [sym_define_value] = ACTIONS(161),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym__ver_space] = ACTIONS(77),
  },
  [46] = {
    [sym_label] = STATE(11),
    [sym_define] = STATE(11),
    [sym_generic_text] = STATE(11),
    [sym_line] = STATE(60),
    [sym_comment] = STATE(11),
    [sym_command] = STATE(11),
    [sym_inlined_command] = STATE(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_expression] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(165),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(19),
    [sym__ver_space] = ACTIONS(39),
  },
  [47] = {
    [sym__ver_space] = ACTIONS(39),
  },
  [48] = {
    [aux_sym_command_param_value_repeat1] = STATE(62),
    [aux_sym_command_param_value_token1] = ACTIONS(167),
    [sym_expression] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(169),
  },
  [49] = {
    [sym_command_param_value] = STATE(63),
    [aux_sym_command_param_value_repeat2] = STATE(51),
    [sym_expression] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [aux_sym_command_param_value_token2] = ACTIONS(116),
  },
  [50] = {
    [sym__hor_space] = ACTIONS(171),
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym__ver_space] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
  },
  [51] = {
    [aux_sym_command_param_value_repeat2] = STATE(64),
    [sym_expression] = ACTIONS(173),
    [aux_sym_command_param_value_token2] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(175),
    [sym__hor_space] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [sym__ver_space] = ACTIONS(175),
  },
  [52] = {
    [sym_command_param_id] = ACTIONS(122),
  },
  [53] = {
    [anon_sym_LBRACK] = ACTIONS(177),
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_expression] = ACTIONS(177),
    [aux_sym_generic_text_token3] = ACTIONS(177),
    [sym__ver_space] = ACTIONS(177),
  },
  [54] = {
    [sym_command_param] = STATE(54),
    [aux_sym_command_repeat1] = STATE(54),
    [sym__hor_space] = ACTIONS(179),
    [sym__ver_space] = ACTIONS(182),
    [anon_sym_RBRACK] = ACTIONS(182),
  },
  [55] = {
    [sym_command_param] = STATE(54),
    [aux_sym_command_repeat1] = STATE(54),
    [sym__hor_space] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(184),
  },
  [56] = {
    [sym__ver_space] = ACTIONS(186),
    [ts_builtin_sym_end] = ACTIONS(186),
  },
  [57] = {
    [sym_command_param_id] = ACTIONS(147),
    [sym__ver_space] = ACTIONS(188),
    [ts_builtin_sym_end] = ACTIONS(188),
  },
  [58] = {
    [sym_command_param] = STATE(73),
    [aux_sym_command_repeat1] = STATE(73),
    [sym__hor_space] = ACTIONS(190),
    [sym__ver_space] = ACTIONS(188),
    [ts_builtin_sym_end] = ACTIONS(188),
  },
  [59] = {
    [sym__ver_space] = ACTIONS(192),
    [ts_builtin_sym_end] = ACTIONS(192),
  },
  [60] = {
    [sym__ver_space] = ACTIONS(77),
  },
  [61] = {
    [sym_expression] = ACTIONS(194),
    [aux_sym_command_param_value_token2] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
    [sym__hor_space] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [sym__ver_space] = ACTIONS(194),
  },
  [62] = {
    [aux_sym_command_param_value_repeat1] = STATE(68),
    [aux_sym_command_param_value_token1] = ACTIONS(196),
    [sym_expression] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(198),
  },
  [63] = {
    [sym__hor_space] = ACTIONS(200),
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym__ver_space] = ACTIONS(200),
    [anon_sym_RBRACK] = ACTIONS(200),
  },
  [64] = {
    [aux_sym_command_param_value_repeat2] = STATE(64),
    [sym_expression] = ACTIONS(202),
    [aux_sym_command_param_value_token2] = ACTIONS(202),
    [anon_sym_RBRACK] = ACTIONS(194),
    [sym__hor_space] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [sym__ver_space] = ACTIONS(194),
  },
  [65] = {
    [anon_sym_LBRACK] = ACTIONS(208),
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym_expression] = ACTIONS(208),
    [aux_sym_generic_text_token3] = ACTIONS(208),
    [sym__ver_space] = ACTIONS(208),
  },
  [66] = {
    [sym_command_param_id] = ACTIONS(147),
    [sym__ver_space] = ACTIONS(210),
    [ts_builtin_sym_end] = ACTIONS(210),
  },
  [67] = {
    [sym_expression] = ACTIONS(212),
    [aux_sym_command_param_value_token2] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [sym__hor_space] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [sym__ver_space] = ACTIONS(212),
  },
  [68] = {
    [aux_sym_command_param_value_repeat1] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [aux_sym_command_param_value_token1] = ACTIONS(216),
    [sym_expression] = ACTIONS(216),
  },
  [69] = {
    [sym_command_param_value] = STATE(50),
    [aux_sym_command_param_value_repeat2] = STATE(51),
    [sym_command_param_id] = ACTIONS(122),
    [sym_expression] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [sym__ver_space] = ACTIONS(149),
    [aux_sym_command_param_value_token2] = ACTIONS(120),
  },
  [70] = {
    [sym_command_param_value] = STATE(63),
    [aux_sym_command_param_value_repeat2] = STATE(71),
    [sym_expression] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [aux_sym_command_param_value_token2] = ACTIONS(151),
  },
  [71] = {
    [aux_sym_command_param_value_repeat2] = STATE(76),
    [sym__hor_space] = ACTIONS(175),
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_expression] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(153),
    [sym__ver_space] = ACTIONS(175),
    [aux_sym_command_param_value_token2] = ACTIONS(219),
  },
  [72] = {
    [sym_command_param_id] = ACTIONS(147),
  },
  [73] = {
    [sym_command_param] = STATE(73),
    [aux_sym_command_repeat1] = STATE(73),
    [sym__hor_space] = ACTIONS(221),
    [sym__ver_space] = ACTIONS(182),
    [ts_builtin_sym_end] = ACTIONS(182),
  },
  [74] = {
    [sym__ver_space] = ACTIONS(188),
    [sym_command_param_id] = ACTIONS(122),
  },
  [75] = {
    [sym__hor_space] = ACTIONS(194),
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [sym_expression] = ACTIONS(194),
    [aux_sym_command_param_value_token2] = ACTIONS(194),
    [sym__ver_space] = ACTIONS(194),
  },
  [76] = {
    [aux_sym_command_param_value_repeat2] = STATE(76),
    [sym__hor_space] = ACTIONS(194),
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [sym_expression] = ACTIONS(227),
    [aux_sym_command_param_value_token2] = ACTIONS(227),
    [sym__ver_space] = ACTIONS(194),
  },
  [77] = {
    [sym__ver_space] = ACTIONS(210),
    [sym_command_param_id] = ACTIONS(122),
  },
  [78] = {
    [sym__hor_space] = ACTIONS(212),
    [ts_builtin_sym_end] = ACTIONS(212),
    [anon_sym_DQUOTE] = ACTIONS(212),
    [sym_expression] = ACTIONS(212),
    [aux_sym_command_param_value_token2] = ACTIONS(212),
    [sym__ver_space] = ACTIONS(212),
  },
  [79] = {
    [sym_command_param] = STATE(80),
    [aux_sym_command_repeat1] = STATE(80),
    [sym_command_nameless_param] = STATE(81),
    [sym__hor_space] = ACTIONS(230),
    [sym__ver_space] = ACTIONS(81),
  },
  [80] = {
    [sym_command_param] = STATE(54),
    [aux_sym_command_repeat1] = STATE(54),
    [sym__hor_space] = ACTIONS(232),
    [sym__ver_space] = ACTIONS(149),
  },
  [81] = {
    [sym_command_param] = STATE(83),
    [aux_sym_command_repeat1] = STATE(83),
    [sym__hor_space] = ACTIONS(232),
    [sym__ver_space] = ACTIONS(149),
  },
  [82] = {
    [aux_sym_command_param_value_repeat1] = STATE(84),
    [sym_expression] = ACTIONS(234),
    [aux_sym_command_param_value_token1] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(236),
  },
  [83] = {
    [sym_command_param] = STATE(54),
    [aux_sym_command_repeat1] = STATE(54),
    [sym__hor_space] = ACTIONS(238),
    [sym__ver_space] = ACTIONS(188),
  },
  [84] = {
    [aux_sym_command_param_value_repeat1] = STATE(68),
    [sym_expression] = ACTIONS(196),
    [aux_sym_command_param_value_token1] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(240),
  },
  [85] = {
    [sym_command_id] = STATE(79),
    [aux_sym_define_key_token1] = ACTIONS(23),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_script, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(10),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = true}, SHIFT(16),
  [27] = {.count = 1, .reusable = true}, SHIFT(17),
  [29] = {.count = 1, .reusable = true}, SHIFT(18),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_generic_text, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(21),
  [35] = {.count = 1, .reusable = true}, SHIFT(20),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_script, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(22),
  [41] = {.count = 1, .reusable = true}, SHIFT(25),
  [43] = {.count = 1, .reusable = true}, SHIFT(26),
  [45] = {.count = 1, .reusable = true}, SHIFT(28),
  [47] = {.count = 1, .reusable = true}, SHIFT(29),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_line, 1),
  [51] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_command_id, 1),
  [55] = {.count = 1, .reusable = true}, SHIFT(31),
  [57] = {.count = 1, .reusable = true}, SHIFT(32),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_label_id, 1),
  [63] = {.count = 1, .reusable = true}, SHIFT(36),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [67] = {.count = 1, .reusable = true}, SHIFT(37),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_generic_text, 2),
  [71] = {.count = 1, .reusable = true}, SHIFT(38),
  [73] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_script, 2),
  [77] = {.count = 1, .reusable = true}, SHIFT(39),
  [79] = {.count = 1, .reusable = true}, SHIFT(40),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_command, 2),
  [83] = {.count = 1, .reusable = true}, SHIFT(43),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_define_key, 1),
  [87] = {.count = 1, .reusable = true}, SHIFT(44),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(2),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(5),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(3),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(4),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(46),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(85),
  [107] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(8),
  [110] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(9),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(29),
  [116] = {.count = 1, .reusable = true}, SHIFT(51),
  [118] = {.count = 1, .reusable = true}, SHIFT(48),
  [120] = {.count = 1, .reusable = false}, SHIFT(51),
  [122] = {.count = 1, .reusable = true}, SHIFT(49),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 3),
  [126] = {.count = 1, .reusable = true}, SHIFT(52),
  [128] = {.count = 1, .reusable = true}, SHIFT(53),
  [130] = {.count = 1, .reusable = true}, SHIFT(56),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [134] = {.count = 1, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(2),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(38),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(20),
  [145] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat1, 3),
  [147] = {.count = 1, .reusable = true}, SHIFT(70),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_command, 3),
  [151] = {.count = 1, .reusable = true}, SHIFT(71),
  [153] = {.count = 1, .reusable = true}, SHIFT(82),
  [155] = {.count = 1, .reusable = false}, SHIFT(71),
  [157] = {.count = 1, .reusable = true}, SHIFT(57),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_generic_text, 3),
  [161] = {.count = 1, .reusable = true}, SHIFT(59),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_script, 3),
  [165] = {.count = 1, .reusable = true}, SHIFT(85),
  [167] = {.count = 1, .reusable = true}, SHIFT(62),
  [169] = {.count = 1, .reusable = true}, SHIFT(61),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_command_nameless_param, 2),
  [173] = {.count = 1, .reusable = true}, SHIFT(64),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_command_param_value, 1),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 4),
  [179] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(52),
  [182] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2),
  [184] = {.count = 1, .reusable = true}, SHIFT(65),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_label, 4),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [190] = {.count = 1, .reusable = true}, SHIFT(66),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_define, 4),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2),
  [196] = {.count = 1, .reusable = true}, SHIFT(68),
  [198] = {.count = 1, .reusable = true}, SHIFT(67),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_command_param, 3),
  [202] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(64),
  [205] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(48),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 5),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_command, 5),
  [212] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 3),
  [214] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(68),
  [219] = {.count = 1, .reusable = true}, SHIFT(76),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(72),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(82),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(76),
  [230] = {.count = 1, .reusable = true}, SHIFT(69),
  [232] = {.count = 1, .reusable = true}, SHIFT(74),
  [234] = {.count = 1, .reusable = true}, SHIFT(84),
  [236] = {.count = 1, .reusable = true}, SHIFT(75),
  [238] = {.count = 1, .reusable = true}, SHIFT(77),
  [240] = {.count = 1, .reusable = true}, SHIFT(78),
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
