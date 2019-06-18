#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 52
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym__hor_space = 1,
  sym_comment = 2,
  sym_expression = 3,
  sym_generic_text = 4,
  anon_sym_GT = 5,
  aux_sym_define_key_token1 = 6,
  sym_define_value = 7,
  anon_sym_POUND = 8,
  anon_sym_AT = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  sym_command_param_id = 12,
  aux_sym_command_param_value_token1 = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_command_param_value_token2 = 15,
  sym_fragment = 16,
  sym__node = 17,
  sym_define = 18,
  sym_define_key = 19,
  sym_label = 20,
  sym_label_id = 21,
  sym_command = 22,
  sym_inlined_command = 23,
  sym_command_id = 24,
  sym_command_param = 25,
  sym_command_nameless_param = 26,
  sym_command_param_value = 27,
  aux_sym_fragment_repeat1 = 28,
  aux_sym_command_repeat1 = 29,
  aux_sym_command_param_value_repeat1 = 30,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__hor_space] = "_hor_space",
  [sym_comment] = "comment",
  [sym_expression] = "expression",
  [sym_generic_text] = "generic_text",
  [anon_sym_GT] = ">",
  [aux_sym_define_key_token1] = "define_key_token1",
  [sym_define_value] = "define_value",
  [anon_sym_POUND] = "#",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_command_param_id] = "command_param_id",
  [aux_sym_command_param_value_token1] = "command_param_value_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_command_param_value_token2] = "command_param_value_token2",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_define] = "define",
  [sym_define_key] = "define_key",
  [sym_label] = "label",
  [sym_label_id] = "label_id",
  [sym_command] = "command",
  [sym_inlined_command] = "inlined_command",
  [sym_command_id] = "command_id",
  [sym_command_param] = "command_param",
  [sym_command_nameless_param] = "command_nameless_param",
  [sym_command_param_value] = "command_param_value",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_param_value_repeat1] = "command_param_value_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__hor_space] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_text] = {
    .visible = true,
    .named = true,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_command_param_id] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_command_param_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_command_param_value_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
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
  [sym_inlined_command] = {
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
  [aux_sym_fragment_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(5);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == ']')
        ADVANCE(8);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__hor_space);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_define_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '}')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{')
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_expression);
      END_STATE();
    case 14:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(5);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(14);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_generic_text);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(5);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(18);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_generic_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(5);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(18);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__hor_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ']')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(22);
      END_STATE();
    case 23:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == ';')
        ADVANCE(15);
      if (lookahead == '>')
        ADVANCE(5);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(23);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(17);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(25);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(24);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_define_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != ':' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
      if (lookahead == ':')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
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
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_command_param_value_token1);
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
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_command_param_id);
      END_STATE();
    case 31:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(31);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(29);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead == '\\')
        ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead == '\\')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead == '\\')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == ']')
        ADVANCE(8);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(35);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != '}')
        ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(37);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == ';')
        ADVANCE(38);
      if (lookahead == '>')
        ADVANCE(39);
      if (lookahead == '@')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(36);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(29);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND);
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
        ADVANCE(29);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == ':' ||
          lookahead == '@')
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT);
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
        ADVANCE(29);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 22},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 35},
  [40] = {.lex_state = 23},
  [41] = {.lex_state = 31},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 23},
  [47] = {.lex_state = 36},
  [48] = {.lex_state = 36},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 32},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__hor_space] = ACTIONS(1),
    [aux_sym_define_key_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_expression] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(6),
    [sym_label] = STATE(6),
    [sym_define] = STATE(6),
    [sym_inlined_command] = STATE(6),
    [sym__node] = STATE(6),
    [sym_fragment] = STATE(7),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_generic_text] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [sym_expression] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(15),
  },
  [2] = {
    [sym_define_key] = STATE(9),
    [aux_sym_define_key_token1] = ACTIONS(17),
  },
  [3] = {
    [sym_command_id] = STATE(11),
    [aux_sym_define_key_token1] = ACTIONS(19),
  },
  [4] = {
    [sym_command_id] = STATE(12),
    [aux_sym_define_key_token1] = ACTIONS(21),
  },
  [5] = {
    [sym_label_id] = STATE(15),
    [sym__hor_space] = ACTIONS(23),
    [aux_sym_define_key_token1] = ACTIONS(25),
  },
  [6] = {
    [sym_command] = STATE(16),
    [sym_label] = STATE(16),
    [sym__node] = STATE(16),
    [sym_define] = STATE(16),
    [sym_inlined_command] = STATE(16),
    [aux_sym_fragment_repeat1] = STATE(16),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_generic_text] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(13),
    [sym_expression] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(15),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(33),
  },
  [8] = {
    [sym__hor_space] = ACTIONS(35),
  },
  [9] = {
    [sym__hor_space] = ACTIONS(37),
  },
  [10] = {
    [sym__hor_space] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(41),
  },
  [11] = {
    [sym_command_nameless_param] = STATE(21),
    [sym_command_param] = STATE(20),
    [aux_sym_command_repeat1] = STATE(20),
    [sym__hor_space] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(45),
  },
  [12] = {
    [sym_command_nameless_param] = STATE(23),
    [sym_command_param] = STATE(22),
    [aux_sym_command_repeat1] = STATE(22),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_generic_text] = ACTIONS(47),
    [sym__hor_space] = ACTIONS(51),
    [sym_comment] = ACTIONS(47),
    [anon_sym_AT] = ACTIONS(47),
    [sym_expression] = ACTIONS(49),
    [anon_sym_POUND] = ACTIONS(47),
  },
  [13] = {
    [sym_label_id] = STATE(24),
    [aux_sym_define_key_token1] = ACTIONS(53),
  },
  [14] = {
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_generic_text] = ACTIONS(57),
    [sym_comment] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(55),
    [sym_expression] = ACTIONS(55),
    [anon_sym_POUND] = ACTIONS(55),
  },
  [15] = {
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_generic_text] = ACTIONS(61),
    [sym_comment] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(59),
    [sym_expression] = ACTIONS(59),
    [anon_sym_POUND] = ACTIONS(59),
  },
  [16] = {
    [sym_command] = STATE(16),
    [sym_label] = STATE(16),
    [sym__node] = STATE(16),
    [sym_define] = STATE(16),
    [sym_inlined_command] = STATE(16),
    [aux_sym_fragment_repeat1] = STATE(16),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(66),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_generic_text] = ACTIONS(71),
    [sym_comment] = ACTIONS(74),
    [anon_sym_AT] = ACTIONS(77),
    [sym_expression] = ACTIONS(74),
    [anon_sym_POUND] = ACTIONS(80),
  },
  [17] = {
    [sym_define_value] = ACTIONS(83),
  },
  [18] = {
    [aux_sym_command_param_value_repeat1] = STATE(28),
    [sym_command_param_value] = STATE(29),
    [aux_sym_command_param_value_token1] = ACTIONS(85),
    [sym_command_param_id] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_expression] = ACTIONS(91),
  },
  [19] = {
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_generic_text] = ACTIONS(95),
    [sym_comment] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [sym_expression] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(93),
  },
  [20] = {
    [sym_command_param] = STATE(32),
    [aux_sym_command_repeat1] = STATE(32),
    [sym__hor_space] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(99),
  },
  [21] = {
    [sym_command_param] = STATE(33),
    [aux_sym_command_repeat1] = STATE(33),
    [sym__hor_space] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(99),
  },
  [22] = {
    [sym_command_param] = STATE(45),
    [aux_sym_command_repeat1] = STATE(45),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_generic_text] = ACTIONS(101),
    [sym__hor_space] = ACTIONS(105),
    [sym_comment] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(101),
    [sym_expression] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(101),
  },
  [23] = {
    [sym_command_param] = STATE(34),
    [aux_sym_command_repeat1] = STATE(34),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_generic_text] = ACTIONS(101),
    [sym__hor_space] = ACTIONS(105),
    [sym_comment] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(101),
    [sym_expression] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(101),
  },
  [24] = {
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_generic_text] = ACTIONS(109),
    [sym_comment] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [sym_expression] = ACTIONS(107),
    [anon_sym_POUND] = ACTIONS(107),
  },
  [25] = {
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_generic_text] = ACTIONS(113),
    [sym_comment] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(111),
    [sym_expression] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(111),
  },
  [26] = {
    [aux_sym_command_param_value_repeat1] = STATE(28),
    [sym_command_param_value] = STATE(35),
    [aux_sym_command_param_value_token1] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_expression] = ACTIONS(91),
  },
  [27] = {
    [aux_sym_command_param_value_token2] = ACTIONS(115),
  },
  [28] = {
    [aux_sym_command_param_value_repeat1] = STATE(37),
    [aux_sym_command_param_value_token1] = ACTIONS(117),
    [sym__hor_space] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(119),
    [sym_expression] = ACTIONS(123),
  },
  [29] = {
    [sym__hor_space] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
  },
  [30] = {
    [sym_command_param_id] = ACTIONS(87),
  },
  [31] = {
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_generic_text] = ACTIONS(131),
    [sym_comment] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(129),
    [sym_expression] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(129),
  },
  [32] = {
    [sym_command_param] = STATE(32),
    [aux_sym_command_repeat1] = STATE(32),
    [sym__hor_space] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(136),
  },
  [33] = {
    [sym_command_param] = STATE(32),
    [aux_sym_command_repeat1] = STATE(32),
    [sym__hor_space] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(138),
  },
  [34] = {
    [sym_command_param] = STATE(45),
    [aux_sym_command_repeat1] = STATE(45),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(140),
    [ts_builtin_sym_end] = ACTIONS(142),
    [sym_generic_text] = ACTIONS(140),
    [sym__hor_space] = ACTIONS(105),
    [sym_comment] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(140),
    [sym_expression] = ACTIONS(142),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [35] = {
    [sym__hor_space] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(146),
  },
  [36] = {
    [anon_sym_DQUOTE] = ACTIONS(148),
  },
  [37] = {
    [aux_sym_command_param_value_repeat1] = STATE(37),
    [aux_sym_command_param_value_token1] = ACTIONS(150),
    [sym__hor_space] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_expression] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(153),
  },
  [38] = {
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_generic_text] = ACTIONS(163),
    [sym_comment] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
    [sym_expression] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(161),
  },
  [39] = {
    [aux_sym_command_param_value_token1] = ACTIONS(165),
    [sym__hor_space] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym_expression] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(165),
  },
  [40] = {
    [anon_sym_GT] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(41),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_generic_text] = ACTIONS(41),
    [sym__hor_space] = ACTIONS(41),
    [sym_comment] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(41),
    [sym_expression] = ACTIONS(39),
    [anon_sym_POUND] = ACTIONS(41),
  },
  [41] = {
    [aux_sym_command_param_value_repeat1] = STATE(42),
    [sym_command_param_value] = STATE(46),
    [aux_sym_command_param_value_token1] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [sym_expression] = ACTIONS(169),
  },
  [42] = {
    [aux_sym_command_param_value_repeat1] = STATE(47),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_generic_text] = ACTIONS(119),
    [sym__hor_space] = ACTIONS(119),
    [aux_sym_command_param_value_token1] = ACTIONS(175),
    [sym_comment] = ACTIONS(119),
    [anon_sym_AT] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [sym_expression] = ACTIONS(179),
    [anon_sym_POUND] = ACTIONS(119),
  },
  [43] = {
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_generic_text] = ACTIONS(127),
    [sym__hor_space] = ACTIONS(127),
    [sym_comment] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
    [sym_expression] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(127),
  },
  [44] = {
    [sym_command_param_id] = ACTIONS(181),
  },
  [45] = {
    [sym_command_param] = STATE(45),
    [aux_sym_command_repeat1] = STATE(45),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(136),
    [ts_builtin_sym_end] = ACTIONS(183),
    [sym_generic_text] = ACTIONS(136),
    [sym__hor_space] = ACTIONS(185),
    [sym_comment] = ACTIONS(136),
    [anon_sym_AT] = ACTIONS(136),
    [sym_expression] = ACTIONS(183),
    [anon_sym_POUND] = ACTIONS(136),
  },
  [46] = {
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_LBRACK] = ACTIONS(146),
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_generic_text] = ACTIONS(146),
    [sym__hor_space] = ACTIONS(146),
    [sym_comment] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(146),
    [sym_expression] = ACTIONS(144),
    [anon_sym_POUND] = ACTIONS(146),
  },
  [47] = {
    [aux_sym_command_param_value_repeat1] = STATE(47),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [ts_builtin_sym_end] = ACTIONS(188),
    [sym_generic_text] = ACTIONS(153),
    [sym__hor_space] = ACTIONS(153),
    [aux_sym_command_param_value_token1] = ACTIONS(190),
    [sym_comment] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(153),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [sym_expression] = ACTIONS(196),
    [anon_sym_POUND] = ACTIONS(153),
  },
  [48] = {
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [ts_builtin_sym_end] = ACTIONS(167),
    [sym_generic_text] = ACTIONS(165),
    [sym__hor_space] = ACTIONS(165),
    [aux_sym_command_param_value_token1] = ACTIONS(165),
    [sym_comment] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym_expression] = ACTIONS(167),
    [anon_sym_POUND] = ACTIONS(165),
  },
  [49] = {
    [aux_sym_command_param_value_repeat1] = STATE(42),
    [sym_command_param_value] = STATE(43),
    [aux_sym_command_param_value_token1] = ACTIONS(199),
    [sym_command_param_id] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [sym_expression] = ACTIONS(169),
  },
  [50] = {
    [anon_sym_DQUOTE] = ACTIONS(201),
  },
  [51] = {
    [aux_sym_command_param_value_token2] = ACTIONS(203),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, SHIFT(6),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(10),
  [21] = {.count = 1, .reusable = true}, SHIFT(40),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = false}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 1),
  [29] = {.count = 1, .reusable = false}, SHIFT(16),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_define_key, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(17),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_command_id, 1),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_command_id, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(18),
  [45] = {.count = 1, .reusable = false}, SHIFT(19),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_command, 2),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_command, 2),
  [51] = {.count = 1, .reusable = false}, SHIFT(49),
  [53] = {.count = 1, .reusable = true}, SHIFT(14),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_label_id, 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_label_id, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [63] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(3),
  [69] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(16),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(16),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(4),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [83] = {.count = 1, .reusable = true}, SHIFT(25),
  [85] = {.count = 1, .reusable = false}, SHIFT(28),
  [87] = {.count = 1, .reusable = true}, SHIFT(26),
  [89] = {.count = 1, .reusable = true}, SHIFT(27),
  [91] = {.count = 1, .reusable = true}, SHIFT(28),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 3),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 3),
  [97] = {.count = 1, .reusable = true}, SHIFT(30),
  [99] = {.count = 1, .reusable = false}, SHIFT(31),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_command, 3),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_command, 3),
  [105] = {.count = 1, .reusable = false}, SHIFT(44),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_define, 4),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_define, 4),
  [115] = {.count = 1, .reusable = true}, SHIFT(36),
  [117] = {.count = 1, .reusable = false}, SHIFT(37),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_command_param_value, 1),
  [121] = {.count = 1, .reusable = false}, SHIFT(27),
  [123] = {.count = 1, .reusable = true}, SHIFT(37),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_command_nameless_param, 2),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_command_nameless_param, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 4),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 4),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(30),
  [136] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2),
  [138] = {.count = 1, .reusable = false}, SHIFT(38),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_command, 4),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_command_param, 3),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_command_param, 3),
  [148] = {.count = 1, .reusable = true}, SHIFT(39),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(37),
  [153] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_param_value_repeat1, 2),
  [155] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(27),
  [158] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(37),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 5),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 5),
  [165] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_param_value_repeat1, 3),
  [167] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 3),
  [169] = {.count = 1, .reusable = true}, SHIFT(42),
  [171] = {.count = 1, .reusable = true}, SHIFT(51),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_command_param_value, 1),
  [175] = {.count = 1, .reusable = false}, SHIFT(47),
  [177] = {.count = 1, .reusable = false}, SHIFT(51),
  [179] = {.count = 1, .reusable = true}, SHIFT(47),
  [181] = {.count = 1, .reusable = true}, SHIFT(41),
  [183] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2),
  [185] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(44),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2),
  [190] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(47),
  [193] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(51),
  [196] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(47),
  [199] = {.count = 1, .reusable = false}, SHIFT(42),
  [201] = {.count = 1, .reusable = true}, SHIFT(48),
  [203] = {.count = 1, .reusable = true}, SHIFT(50),
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
