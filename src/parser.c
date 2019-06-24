#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 113
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

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
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(40);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '{') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(40);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(40);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(40);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != ':' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(40);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '@') ADVANCE(22);
      if (lookahead == '[') ADVANCE(35);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != ':' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '}') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead == ']') ADVANCE(36);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_define_key_token1);
      if (lookahead == ':') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_define_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_command_param_id);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead == ':') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(29);
      END_STATE();
    case 29:
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
          lookahead != '}') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_generic_text_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_generic_text_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_generic_text_token2);
      if (lookahead == '\\') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__hor_space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__ver_space);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 0},
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
    [aux_sym_script_repeat1] = STATE(9),
    [sym_define] = STATE(10),
    [sym_script] = STATE(11),
    [sym_label] = STATE(10),
    [sym_generic_text] = STATE(10),
    [sym_line] = STATE(12),
    [sym_comment] = STATE(10),
    [sym_command] = STATE(10),
    [aux_sym_generic_text_repeat1] = STATE(13),
    [sym_inlined_command] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(11),
    [sym__hor_space] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym__ver_space] = ACTIONS(21),
    [anon_sym_GT] = ACTIONS(23),
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
    [aux_sym_generic_text_repeat1] = STATE(23),
    [sym_inlined_command] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(41),
    [sym__ver_space] = ACTIONS(43),
  },
  [5] = {
    [sym_command_id] = STATE(25),
    [sym_error] = ACTIONS(45),
    [aux_sym_define_key_token1] = ACTIONS(47),
  },
  [6] = {
    [aux_sym_generic_text_token2] = ACTIONS(49),
    [sym_error] = ACTIONS(3),
  },
  [7] = {
    [sym_command_id] = STATE(27),
    [sym_error] = ACTIONS(45),
    [aux_sym_define_key_token1] = ACTIONS(51),
  },
  [8] = {
    [sym_define_key] = STATE(29),
    [sym_error] = ACTIONS(45),
    [aux_sym_define_key_token1] = ACTIONS(53),
  },
  [9] = {
    [aux_sym_script_repeat1] = STATE(31),
    [sym_define] = STATE(10),
    [sym_label] = STATE(10),
    [sym_generic_text] = STATE(10),
    [sym_line] = STATE(32),
    [sym_comment] = STATE(10),
    [sym_command] = STATE(10),
    [aux_sym_generic_text_repeat1] = STATE(13),
    [sym_inlined_command] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(11),
    [sym__hor_space] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym__ver_space] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(23),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(59),
  },
  [11] = {
    [sym_error] = ACTIONS(45),
    [ts_builtin_sym_end] = ACTIONS(61),
  },
  [12] = {
    [sym_error] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym__ver_space] = ACTIONS(43),
  },
  [13] = {
    [aux_sym_generic_text_repeat1] = STATE(33),
    [sym_inlined_command] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(65),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym__ver_space] = ACTIONS(63),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(67),
  },
  [15] = {
    [sym_label_id] = STATE(34),
    [sym_error] = ACTIONS(45),
    [aux_sym_define_key_token1] = ACTIONS(29),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(69),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(71),
  },
  [18] = {
    [sym_error] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(73),
  },
  [19] = {
    [sym_label_id] = STATE(34),
    [sym__hor_space] = ACTIONS(75),
    [aux_sym_define_key_token1] = ACTIONS(29),
    [sym_error] = ACTIONS(3),
  },
  [20] = {
    [sym_command_id] = STATE(37),
    [sym_error] = ACTIONS(45),
    [aux_sym_define_key_token1] = ACTIONS(47),
  },
  [21] = {
    [sym_define_key] = STATE(38),
    [sym_error] = ACTIONS(45),
    [aux_sym_define_key_token1] = ACTIONS(53),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(77),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(77),
    [sym__hor_space] = ACTIONS(77),
    [anon_sym_AT] = ACTIONS(77),
    [aux_sym_generic_text_token1] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [sym__ver_space] = ACTIONS(77),
  },
  [23] = {
    [aux_sym_generic_text_repeat1] = STATE(33),
    [sym_inlined_command] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(65),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [sym__ver_space] = ACTIONS(79),
  },
  [24] = {
    [sym__hor_space] = ACTIONS(81),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(81),
  },
  [25] = {
    [sym_command_param] = STATE(40),
    [aux_sym_command_repeat1] = STATE(40),
    [sym_command_nameless_param] = STATE(41),
    [sym__hor_space] = ACTIONS(83),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(85),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(87),
    [aux_sym_generic_text_token1] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [sym__ver_space] = ACTIONS(87),
  },
  [27] = {
    [sym_command_nameless_param] = STATE(45),
    [sym_command_param] = STATE(44),
    [aux_sym_command_repeat1] = STATE(44),
    [sym__hor_space] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(91),
    [sym_error] = ACTIONS(3),
  },
  [28] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(93),
  },
  [29] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(95),
  },
  [30] = {
    [aux_sym_generic_text_repeat1] = STATE(23),
    [sym_inlined_command] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(39),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(41),
    [sym__ver_space] = ACTIONS(43),
  },
  [31] = {
    [aux_sym_script_repeat1] = STATE(31),
    [sym_define] = STATE(10),
    [sym_label] = STATE(10),
    [sym_generic_text] = STATE(10),
    [sym_line] = STATE(48),
    [sym_comment] = STATE(10),
    [sym_command] = STATE(10),
    [aux_sym_generic_text_repeat1] = STATE(13),
    [sym_inlined_command] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(99),
    [anon_sym_POUND] = ACTIONS(102),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(105),
    [sym__hor_space] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(111),
    [aux_sym_generic_text_token1] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(120),
    [sym__ver_space] = ACTIONS(123),
  },
  [32] = {
    [sym_error] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym__ver_space] = ACTIONS(43),
  },
  [33] = {
    [aux_sym_generic_text_repeat1] = STATE(33),
    [sym_inlined_command] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(126),
    [aux_sym_generic_text_token1] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(132),
    [sym__ver_space] = ACTIONS(87),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(135),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(137),
  },
  [36] = {
    [sym_label_id] = STATE(49),
    [sym_error] = ACTIONS(45),
    [aux_sym_define_key_token1] = ACTIONS(29),
  },
  [37] = {
    [sym_command_param] = STATE(51),
    [aux_sym_command_repeat1] = STATE(51),
    [sym_command_nameless_param] = STATE(52),
    [sym__hor_space] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(141),
  },
  [38] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(143),
  },
  [39] = {
    [sym_command_param_value] = STATE(56),
    [aux_sym_command_param_value_repeat2] = STATE(57),
    [aux_sym_command_param_value_token2] = ACTIONS(145),
    [sym_expression] = ACTIONS(147),
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(141),
    [sym_command_param_id] = ACTIONS(151),
  },
  [40] = {
    [sym_command_param] = STATE(59),
    [aux_sym_command_repeat1] = STATE(59),
    [sym__hor_space] = ACTIONS(153),
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(141),
  },
  [41] = {
    [sym_command_param] = STATE(51),
    [aux_sym_command_repeat1] = STATE(51),
    [sym__hor_space] = ACTIONS(153),
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(141),
  },
  [42] = {
    [sym_command_param_value] = STATE(81),
    [aux_sym_command_param_value_repeat2] = STATE(82),
    [sym_expression] = ACTIONS(155),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_error] = ACTIONS(45),
    [aux_sym_command_param_value_token2] = ACTIONS(159),
    [sym_command_param_id] = ACTIONS(161),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(163),
    [sym__hor_space] = ACTIONS(165),
    [aux_sym_generic_text_token1] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym__ver_space] = ACTIONS(163),
  },
  [44] = {
    [sym_command_param] = STATE(83),
    [aux_sym_command_repeat1] = STATE(83),
    [sym__hor_space] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym_error] = ACTIONS(3),
  },
  [45] = {
    [sym_command_param] = STATE(63),
    [aux_sym_command_repeat1] = STATE(63),
    [sym__hor_space] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym_error] = ACTIONS(3),
  },
  [46] = {
    [sym_define_value] = ACTIONS(171),
    [sym_error] = ACTIONS(3),
  },
  [47] = {
    [aux_sym_generic_text_repeat1] = STATE(23),
    [sym_inlined_command] = STATE(23),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(173),
    [aux_sym_generic_text_token1] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(41),
    [sym__ver_space] = ACTIONS(43),
  },
  [48] = {
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(43),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(175),
  },
  [50] = {
    [sym_command_param_value] = STATE(56),
    [aux_sym_command_param_value_repeat2] = STATE(57),
    [aux_sym_command_param_value_token2] = ACTIONS(145),
    [sym_expression] = ACTIONS(147),
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(177),
    [sym_command_param_id] = ACTIONS(151),
  },
  [51] = {
    [sym_command_param] = STATE(59),
    [aux_sym_command_repeat1] = STATE(59),
    [sym__hor_space] = ACTIONS(179),
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(177),
  },
  [52] = {
    [sym_command_param] = STATE(66),
    [aux_sym_command_repeat1] = STATE(66),
    [sym__hor_space] = ACTIONS(179),
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(177),
  },
  [53] = {
    [sym_define_value] = ACTIONS(181),
    [sym_error] = ACTIONS(3),
  },
  [54] = {
    [sym_command_param_value] = STATE(68),
    [aux_sym_command_param_value_repeat2] = STATE(57),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_error] = ACTIONS(45),
    [aux_sym_command_param_value_token2] = ACTIONS(147),
    [sym_expression] = ACTIONS(147),
  },
  [55] = {
    [aux_sym_command_param_value_repeat1] = STATE(70),
    [aux_sym_command_param_value_token1] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(183),
  },
  [56] = {
    [sym__hor_space] = ACTIONS(187),
    [ts_builtin_sym_end] = ACTIONS(187),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(187),
  },
  [57] = {
    [aux_sym_command_param_value_repeat2] = STATE(71),
    [sym_expression] = ACTIONS(189),
    [sym__hor_space] = ACTIONS(191),
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(191),
    [aux_sym_command_param_value_token2] = ACTIONS(189),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(177),
    [sym_command_param_id] = ACTIONS(151),
  },
  [59] = {
    [sym_command_param] = STATE(59),
    [aux_sym_command_repeat1] = STATE(59),
    [sym__hor_space] = ACTIONS(193),
    [ts_builtin_sym_end] = ACTIONS(196),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(196),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(198),
    [aux_sym_generic_text_token1] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(198),
    [sym__ver_space] = ACTIONS(198),
  },
  [61] = {
    [sym_error] = ACTIONS(45),
    [sym_command_param_id] = ACTIONS(161),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(198),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(198),
    [sym__hor_space] = ACTIONS(200),
    [aux_sym_generic_text_token1] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(198),
    [sym__ver_space] = ACTIONS(198),
  },
  [63] = {
    [sym_command_param] = STATE(83),
    [aux_sym_command_repeat1] = STATE(83),
    [sym__hor_space] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(202),
    [sym_error] = ACTIONS(3),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(204),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(206),
    [sym_command_param_id] = ACTIONS(151),
  },
  [66] = {
    [sym_command_param] = STATE(59),
    [aux_sym_command_repeat1] = STATE(59),
    [sym__hor_space] = ACTIONS(208),
    [ts_builtin_sym_end] = ACTIONS(206),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(206),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(210),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(210),
  },
  [68] = {
    [sym__hor_space] = ACTIONS(212),
    [ts_builtin_sym_end] = ACTIONS(212),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(212),
  },
  [69] = {
    [sym__ver_space] = ACTIONS(214),
    [sym__hor_space] = ACTIONS(214),
    [ts_builtin_sym_end] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(214),
    [sym_expression] = ACTIONS(214),
  },
  [70] = {
    [aux_sym_command_param_value_repeat1] = STATE(76),
    [aux_sym_command_param_value_token1] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(218),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(216),
  },
  [71] = {
    [aux_sym_command_param_value_repeat2] = STATE(71),
    [sym__ver_space] = ACTIONS(214),
    [sym__hor_space] = ACTIONS(214),
    [ts_builtin_sym_end] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(223),
    [sym_expression] = ACTIONS(223),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(226),
    [aux_sym_generic_text_token1] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(226),
    [sym__ver_space] = ACTIONS(226),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(226),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(226),
    [sym__hor_space] = ACTIONS(228),
    [aux_sym_generic_text_token1] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(226),
    [sym__ver_space] = ACTIONS(226),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(230),
    [sym_command_param_id] = ACTIONS(151),
  },
  [75] = {
    [sym__ver_space] = ACTIONS(232),
    [sym__hor_space] = ACTIONS(232),
    [ts_builtin_sym_end] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(232),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(232),
    [sym_expression] = ACTIONS(232),
  },
  [76] = {
    [aux_sym_command_param_value_repeat1] = STATE(76),
    [aux_sym_command_param_value_token1] = ACTIONS(234),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(234),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(239),
    [aux_sym_generic_text_token1] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [sym__ver_space] = ACTIONS(239),
  },
  [78] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
  },
  [79] = {
    [sym_command_param_value] = STATE(56),
    [aux_sym_command_param_value_repeat2] = STATE(88),
    [aux_sym_command_param_value_token2] = ACTIONS(241),
    [sym_expression] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(141),
    [sym_command_param_id] = ACTIONS(247),
  },
  [80] = {
    [sym_command_param_value] = STATE(56),
    [aux_sym_command_param_value_repeat2] = STATE(88),
    [aux_sym_command_param_value_token2] = ACTIONS(241),
    [sym_expression] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(177),
    [sym_command_param_id] = ACTIONS(247),
  },
  [81] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(187),
  },
  [82] = {
    [aux_sym_command_param_value_repeat2] = STATE(86),
    [sym__hor_space] = ACTIONS(191),
    [anon_sym_RBRACK] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(249),
    [sym_expression] = ACTIONS(249),
  },
  [83] = {
    [sym_command_param] = STATE(83),
    [aux_sym_command_repeat1] = STATE(83),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(196),
  },
  [84] = {
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
  },
  [85] = {
    [sym__hor_space] = ACTIONS(214),
    [anon_sym_RBRACK] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(214),
    [sym_expression] = ACTIONS(214),
  },
  [86] = {
    [aux_sym_command_param_value_repeat2] = STATE(86),
    [sym__hor_space] = ACTIONS(214),
    [anon_sym_RBRACK] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(254),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(257),
    [sym_expression] = ACTIONS(257),
  },
  [87] = {
    [sym__hor_space] = ACTIONS(232),
    [anon_sym_RBRACK] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(232),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(232),
    [sym_expression] = ACTIONS(232),
  },
  [88] = {
    [aux_sym_command_param_value_repeat2] = STATE(90),
    [sym_expression] = ACTIONS(260),
    [sym__hor_space] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(191),
    [aux_sym_command_param_value_token2] = ACTIONS(260),
  },
  [89] = {
    [sym__ver_space] = ACTIONS(214),
    [sym__hor_space] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(214),
    [sym_expression] = ACTIONS(214),
  },
  [90] = {
    [aux_sym_command_param_value_repeat2] = STATE(90),
    [sym__ver_space] = ACTIONS(214),
    [sym__hor_space] = ACTIONS(214),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(265),
    [sym_expression] = ACTIONS(265),
  },
  [91] = {
    [sym__ver_space] = ACTIONS(232),
    [sym__hor_space] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(232),
    [sym_error] = ACTIONS(3),
    [aux_sym_command_param_value_token2] = ACTIONS(232),
    [sym_expression] = ACTIONS(232),
  },
  [92] = {
    [sym_command_param] = STATE(106),
    [aux_sym_command_repeat1] = STATE(106),
    [sym_command_nameless_param] = STATE(107),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(268),
    [sym__ver_space] = ACTIONS(85),
  },
  [93] = {
    [sym_command_param] = STATE(108),
    [aux_sym_command_repeat1] = STATE(108),
    [sym_command_nameless_param] = STATE(109),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(270),
    [sym__ver_space] = ACTIONS(141),
  },
  [94] = {
    [sym_command_param_value] = STATE(84),
    [aux_sym_command_param_value_repeat2] = STATE(82),
    [anon_sym_DQUOTE] = ACTIONS(157),
    [sym_error] = ACTIONS(45),
    [aux_sym_command_param_value_token2] = ACTIONS(155),
    [sym_expression] = ACTIONS(155),
  },
  [95] = {
    [aux_sym_command_param_value_repeat1] = STATE(99),
    [aux_sym_command_param_value_token1] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(274),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(272),
  },
  [96] = {
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(177),
    [sym_command_param_id] = ACTIONS(247),
  },
  [97] = {
    [sym_error] = ACTIONS(45),
    [sym_command_param_id] = ACTIONS(151),
  },
  [98] = {
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(206),
    [sym_command_param_id] = ACTIONS(247),
  },
  [99] = {
    [aux_sym_command_param_value_repeat1] = STATE(76),
    [aux_sym_command_param_value_token1] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(216),
  },
  [100] = {
    [sym_error] = ACTIONS(3),
    [sym__ver_space] = ACTIONS(230),
    [sym_command_param_id] = ACTIONS(247),
  },
  [101] = {
    [sym_command_param_value] = STATE(68),
    [aux_sym_command_param_value_repeat2] = STATE(88),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym_error] = ACTIONS(45),
    [aux_sym_command_param_value_token2] = ACTIONS(243),
    [sym_expression] = ACTIONS(243),
  },
  [102] = {
    [aux_sym_command_param_value_repeat1] = STATE(103),
    [aux_sym_command_param_value_token1] = ACTIONS(278),
    [anon_sym_DQUOTE] = ACTIONS(280),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(278),
  },
  [103] = {
    [aux_sym_command_param_value_repeat1] = STATE(76),
    [aux_sym_command_param_value_token1] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(282),
    [sym_error] = ACTIONS(3),
    [sym_expression] = ACTIONS(216),
  },
  [104] = {
    [sym_command_id] = STATE(92),
    [sym_error] = ACTIONS(45),
    [aux_sym_define_key_token1] = ACTIONS(47),
  },
  [105] = {
    [sym_command_id] = STATE(93),
    [sym_error] = ACTIONS(45),
    [aux_sym_define_key_token1] = ACTIONS(47),
  },
  [106] = {
    [sym_command_param] = STATE(110),
    [aux_sym_command_repeat1] = STATE(110),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(284),
    [sym__ver_space] = ACTIONS(141),
  },
  [107] = {
    [sym_command_param] = STATE(108),
    [aux_sym_command_repeat1] = STATE(108),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(284),
    [sym__ver_space] = ACTIONS(141),
  },
  [108] = {
    [sym_command_param] = STATE(110),
    [aux_sym_command_repeat1] = STATE(110),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(286),
    [sym__ver_space] = ACTIONS(177),
  },
  [109] = {
    [sym_command_param] = STATE(112),
    [aux_sym_command_repeat1] = STATE(112),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(286),
    [sym__ver_space] = ACTIONS(177),
  },
  [110] = {
    [sym_command_param] = STATE(110),
    [aux_sym_command_repeat1] = STATE(110),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(288),
    [sym__ver_space] = ACTIONS(196),
  },
  [111] = {
    [sym_error] = ACTIONS(45),
    [sym_command_param_id] = ACTIONS(247),
  },
  [112] = {
    [sym_command_param] = STATE(110),
    [aux_sym_command_repeat1] = STATE(110),
    [sym_error] = ACTIONS(3),
    [sym__hor_space] = ACTIONS(291),
    [sym__ver_space] = ACTIONS(206),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_script, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(13),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, SHIFT(8),
  [25] = {.count = 1, .reusable = true}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_script, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(18),
  [35] = {.count = 1, .reusable = true}, SHIFT(19),
  [37] = {.count = 1, .reusable = true}, SHIFT(23),
  [39] = {.count = 1, .reusable = true}, SHIFT(20),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [47] = {.count = 1, .reusable = true}, SHIFT(24),
  [49] = {.count = 1, .reusable = true}, SHIFT(26),
  [51] = {.count = 1, .reusable = true}, SHIFT(78),
  [53] = {.count = 1, .reusable = true}, SHIFT(28),
  [55] = {.count = 1, .reusable = true}, SHIFT(30),
  [57] = {.count = 1, .reusable = true}, SHIFT(31),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_line, 1),
  [61] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_generic_text, 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(33),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_label_id, 1),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [73] = {.count = 1, .reusable = true}, SHIFT(35),
  [75] = {.count = 1, .reusable = true}, SHIFT(36),
  [77] = {.count = 1, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_generic_text, 2),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_command_id, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(39),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_command, 2),
  [87] = {.count = 1, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2),
  [89] = {.count = 1, .reusable = true}, SHIFT(42),
  [91] = {.count = 1, .reusable = true}, SHIFT(43),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_define_key, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(46),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_script, 2),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(2),
  [102] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(3),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(13),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(47),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(104),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(6),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(7),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(8),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_script_repeat1, 2), SHIFT_REPEAT(31),
  [126] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(33),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(6),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_generic_text_repeat1, 2), SHIFT_REPEAT(7),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 3),
  [139] = {.count = 1, .reusable = true}, SHIFT(50),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_command, 3),
  [143] = {.count = 1, .reusable = true}, SHIFT(53),
  [145] = {.count = 1, .reusable = false}, SHIFT(57),
  [147] = {.count = 1, .reusable = true}, SHIFT(57),
  [149] = {.count = 1, .reusable = true}, SHIFT(55),
  [151] = {.count = 1, .reusable = true}, SHIFT(54),
  [153] = {.count = 1, .reusable = true}, SHIFT(58),
  [155] = {.count = 1, .reusable = true}, SHIFT(82),
  [157] = {.count = 1, .reusable = true}, SHIFT(95),
  [159] = {.count = 1, .reusable = false}, SHIFT(82),
  [161] = {.count = 1, .reusable = true}, SHIFT(94),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 3),
  [165] = {.count = 1, .reusable = true}, SHIFT(60),
  [167] = {.count = 1, .reusable = true}, SHIFT(61),
  [169] = {.count = 1, .reusable = true}, SHIFT(62),
  [171] = {.count = 1, .reusable = true}, SHIFT(64),
  [173] = {.count = 1, .reusable = true}, SHIFT(105),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_label, 4),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [179] = {.count = 1, .reusable = true}, SHIFT(65),
  [181] = {.count = 1, .reusable = true}, SHIFT(67),
  [183] = {.count = 1, .reusable = true}, SHIFT(70),
  [185] = {.count = 1, .reusable = true}, SHIFT(69),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_command_nameless_param, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(71),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_command_param_value, 1),
  [193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(97),
  [196] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 4),
  [200] = {.count = 1, .reusable = true}, SHIFT(72),
  [202] = {.count = 1, .reusable = true}, SHIFT(73),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_define, 4),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_command, 5),
  [208] = {.count = 1, .reusable = true}, SHIFT(74),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_define, 5),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_command_param, 3),
  [214] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2),
  [216] = {.count = 1, .reusable = true}, SHIFT(76),
  [218] = {.count = 1, .reusable = true}, SHIFT(75),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(55),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(71),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 5),
  [228] = {.count = 1, .reusable = true}, SHIFT(77),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_command, 6),
  [232] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 3),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(76),
  [237] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 6),
  [241] = {.count = 1, .reusable = false}, SHIFT(88),
  [243] = {.count = 1, .reusable = true}, SHIFT(88),
  [245] = {.count = 1, .reusable = true}, SHIFT(102),
  [247] = {.count = 1, .reusable = true}, SHIFT(101),
  [249] = {.count = 1, .reusable = true}, SHIFT(86),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(61),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(95),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(86),
  [260] = {.count = 1, .reusable = true}, SHIFT(90),
  [262] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(102),
  [265] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat2, 2), SHIFT_REPEAT(90),
  [268] = {.count = 1, .reusable = true}, SHIFT(79),
  [270] = {.count = 1, .reusable = true}, SHIFT(80),
  [272] = {.count = 1, .reusable = true}, SHIFT(99),
  [274] = {.count = 1, .reusable = true}, SHIFT(85),
  [276] = {.count = 1, .reusable = true}, SHIFT(87),
  [278] = {.count = 1, .reusable = true}, SHIFT(103),
  [280] = {.count = 1, .reusable = true}, SHIFT(89),
  [282] = {.count = 1, .reusable = true}, SHIFT(91),
  [284] = {.count = 1, .reusable = true}, SHIFT(96),
  [286] = {.count = 1, .reusable = true}, SHIFT(98),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(111),
  [291] = {.count = 1, .reusable = true}, SHIFT(100),
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
