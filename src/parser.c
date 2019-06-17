#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 53
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_comment = 1,
  sym_expression = 2,
  sym_generic_text = 3,
  anon_sym_GT = 4,
  aux_sym_define_key_token1 = 5,
  sym_define_value = 6,
  anon_sym_POUND = 7,
  anon_sym_AT = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  aux_sym_command_param_id_token1 = 11,
  aux_sym_command_param_value_token1 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_command_param_value_token2 = 14,
  sym__hor_space = 15,
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
  sym_command_param_id = 27,
  sym_command_param_value = 28,
  aux_sym_fragment_repeat1 = 29,
  aux_sym_command_repeat1 = 30,
  aux_sym_command_param_value_repeat1 = 31,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [aux_sym_command_param_id_token1] = "command_param_id_token1",
  [aux_sym_command_param_value_token1] = "command_param_value_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_command_param_value_token2] = "command_param_value_token2",
  [sym__hor_space] = "_hor_space",
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
  [sym_command_param_id] = "command_param_id",
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
  [aux_sym_command_param_id_token1] = {
    .visible = false,
    .named = false,
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
  [sym__hor_space] = {
    .visible = false,
    .named = true,
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
  [sym_command_param_id] = {
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
          lookahead == ' ')
        ADVANCE(20);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__hor_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == ']')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(20);
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
      ACCEPT_TOKEN(aux_sym_command_param_id_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead == '\\')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead == '\\')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_command_param_value_token2);
      if (lookahead == '\\')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '{')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(34);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(29);
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
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 31},
  [27] = {.lex_state = 34},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 34},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 34},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 36},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 36},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 31},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [aux_sym_define_key_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__hor_space] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_expression] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(7),
    [sym_label] = STATE(7),
    [sym__node] = STATE(7),
    [sym_define] = STATE(7),
    [sym_inlined_command] = STATE(7),
    [sym_fragment] = STATE(6),
    [aux_sym_fragment_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_expression] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_generic_text] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
  },
  [2] = {
    [sym_label_id] = STATE(10),
    [aux_sym_define_key_token1] = ACTIONS(17),
    [sym__hor_space] = ACTIONS(19),
  },
  [3] = {
    [sym_define_key] = STATE(12),
    [aux_sym_define_key_token1] = ACTIONS(21),
  },
  [4] = {
    [sym_command_id] = STATE(14),
    [aux_sym_define_key_token1] = ACTIONS(23),
  },
  [5] = {
    [sym_command_id] = STATE(15),
    [aux_sym_define_key_token1] = ACTIONS(25),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(27),
  },
  [7] = {
    [sym_command] = STATE(16),
    [sym_label] = STATE(16),
    [sym__node] = STATE(16),
    [sym_define] = STATE(16),
    [sym_inlined_command] = STATE(16),
    [aux_sym_fragment_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(5),
    [sym_comment] = ACTIONS(31),
    [sym_expression] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_generic_text] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(15),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(35),
    [sym_comment] = ACTIONS(35),
    [sym_expression] = ACTIONS(35),
    [anon_sym_POUND] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_generic_text] = ACTIONS(37),
    [anon_sym_AT] = ACTIONS(35),
  },
  [9] = {
    [sym_label_id] = STATE(17),
    [aux_sym_define_key_token1] = ACTIONS(39),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_GT] = ACTIONS(41),
    [sym_comment] = ACTIONS(41),
    [sym_expression] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_generic_text] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(41),
  },
  [11] = {
    [sym__hor_space] = ACTIONS(45),
  },
  [12] = {
    [sym__hor_space] = ACTIONS(47),
  },
  [13] = {
    [anon_sym_RBRACK] = ACTIONS(49),
    [sym__hor_space] = ACTIONS(51),
  },
  [14] = {
    [aux_sym_command_repeat1] = STATE(21),
    [sym_command_nameless_param] = STATE(22),
    [sym_command_param] = STATE(21),
    [anon_sym_RBRACK] = ACTIONS(53),
    [sym__hor_space] = ACTIONS(55),
  },
  [15] = {
    [aux_sym_command_repeat1] = STATE(23),
    [sym_command_nameless_param] = STATE(24),
    [sym_command_param] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(59),
    [sym_comment] = ACTIONS(59),
    [sym__hor_space] = ACTIONS(61),
    [sym_expression] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [sym_generic_text] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(59),
  },
  [16] = {
    [sym_command] = STATE(16),
    [sym_label] = STATE(16),
    [sym__node] = STATE(16),
    [sym_define] = STATE(16),
    [sym_inlined_command] = STATE(16),
    [aux_sym_fragment_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(65),
    [sym_comment] = ACTIONS(68),
    [sym_expression] = ACTIONS(68),
    [anon_sym_POUND] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(74),
    [sym_generic_text] = ACTIONS(77),
    [anon_sym_AT] = ACTIONS(80),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(83),
    [sym_comment] = ACTIONS(83),
    [sym_expression] = ACTIONS(83),
    [anon_sym_POUND] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [sym_generic_text] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(83),
  },
  [18] = {
    [sym_define_value] = ACTIONS(87),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [sym_comment] = ACTIONS(89),
    [sym_expression] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [sym_generic_text] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(89),
  },
  [20] = {
    [aux_sym_command_param_value_repeat1] = STATE(28),
    [sym_command_param_id] = STATE(29),
    [sym_command_param_value] = STATE(30),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_expression] = ACTIONS(95),
    [aux_sym_command_param_value_token1] = ACTIONS(97),
    [aux_sym_command_param_id_token1] = ACTIONS(99),
  },
  [21] = {
    [aux_sym_command_repeat1] = STATE(33),
    [sym_command_param] = STATE(33),
    [anon_sym_RBRACK] = ACTIONS(101),
    [sym__hor_space] = ACTIONS(103),
  },
  [22] = {
    [aux_sym_command_repeat1] = STATE(34),
    [sym_command_param] = STATE(34),
    [anon_sym_RBRACK] = ACTIONS(101),
    [sym__hor_space] = ACTIONS(103),
  },
  [23] = {
    [aux_sym_command_repeat1] = STATE(45),
    [sym_command_param] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(107),
    [sym_comment] = ACTIONS(107),
    [sym__hor_space] = ACTIONS(109),
    [sym_expression] = ACTIONS(105),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [sym_generic_text] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
  },
  [24] = {
    [aux_sym_command_repeat1] = STATE(35),
    [sym_command_param] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(107),
    [sym_comment] = ACTIONS(107),
    [sym__hor_space] = ACTIONS(109),
    [sym_expression] = ACTIONS(105),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [sym_generic_text] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(111),
    [sym_comment] = ACTIONS(111),
    [sym_expression] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [sym_generic_text] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(111),
  },
  [26] = {
    [aux_sym_command_param_value_token2] = ACTIONS(115),
  },
  [27] = {
    [anon_sym_DQUOTE] = ACTIONS(117),
    [sym_expression] = ACTIONS(117),
    [aux_sym_command_param_value_token1] = ACTIONS(117),
  },
  [28] = {
    [aux_sym_command_param_value_repeat1] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(121),
    [sym__hor_space] = ACTIONS(121),
    [sym_expression] = ACTIONS(123),
    [aux_sym_command_param_value_token1] = ACTIONS(125),
  },
  [29] = {
    [aux_sym_command_param_value_repeat1] = STATE(28),
    [sym_command_param_value] = STATE(38),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_expression] = ACTIONS(95),
    [aux_sym_command_param_value_token1] = ACTIONS(95),
  },
  [30] = {
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym__hor_space] = ACTIONS(129),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_GT] = ACTIONS(131),
    [sym_comment] = ACTIONS(131),
    [sym_expression] = ACTIONS(131),
    [anon_sym_POUND] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [sym_generic_text] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(131),
  },
  [32] = {
    [sym_command_param_id] = STATE(29),
    [aux_sym_command_param_id_token1] = ACTIONS(99),
  },
  [33] = {
    [aux_sym_command_repeat1] = STATE(33),
    [sym_command_param] = STATE(33),
    [anon_sym_RBRACK] = ACTIONS(135),
    [sym__hor_space] = ACTIONS(137),
  },
  [34] = {
    [aux_sym_command_repeat1] = STATE(33),
    [sym_command_param] = STATE(33),
    [anon_sym_RBRACK] = ACTIONS(140),
    [sym__hor_space] = ACTIONS(103),
  },
  [35] = {
    [aux_sym_command_repeat1] = STATE(45),
    [sym_command_param] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_GT] = ACTIONS(144),
    [sym_comment] = ACTIONS(144),
    [sym__hor_space] = ACTIONS(109),
    [sym_expression] = ACTIONS(142),
    [anon_sym_POUND] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [sym_generic_text] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
  },
  [36] = {
    [anon_sym_DQUOTE] = ACTIONS(146),
  },
  [37] = {
    [aux_sym_command_param_value_repeat1] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [sym_expression] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(154),
    [aux_sym_command_param_value_token1] = ACTIONS(156),
    [sym__hor_space] = ACTIONS(154),
  },
  [38] = {
    [anon_sym_RBRACK] = ACTIONS(159),
    [sym__hor_space] = ACTIONS(161),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(163),
    [sym_comment] = ACTIONS(163),
    [sym_expression] = ACTIONS(163),
    [anon_sym_POUND] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_generic_text] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(163),
  },
  [40] = {
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym_expression] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(167),
    [aux_sym_command_param_value_token1] = ACTIONS(167),
    [sym__hor_space] = ACTIONS(167),
  },
  [41] = {
    [sym__hor_space] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [sym_comment] = ACTIONS(49),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_expression] = ACTIONS(51),
    [anon_sym_POUND] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(49),
    [sym_generic_text] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
  },
  [42] = {
    [aux_sym_command_param_value_repeat1] = STATE(46),
    [sym__hor_space] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [sym_comment] = ACTIONS(121),
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [sym_expression] = ACTIONS(175),
    [anon_sym_POUND] = ACTIONS(121),
    [aux_sym_command_param_value_token1] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(121),
    [sym_generic_text] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(121),
  },
  [43] = {
    [aux_sym_command_param_value_repeat1] = STATE(42),
    [sym_command_param_value] = STATE(47),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [sym_expression] = ACTIONS(181),
    [aux_sym_command_param_value_token1] = ACTIONS(181),
  },
  [44] = {
    [sym__hor_space] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(127),
    [sym_comment] = ACTIONS(127),
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_expression] = ACTIONS(129),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [sym_generic_text] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
  },
  [45] = {
    [aux_sym_command_repeat1] = STATE(45),
    [sym_command_param] = STATE(45),
    [sym__hor_space] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(135),
    [sym_comment] = ACTIONS(135),
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym_expression] = ACTIONS(186),
    [anon_sym_POUND] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(135),
    [sym_generic_text] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(135),
  },
  [46] = {
    [aux_sym_command_param_value_repeat1] = STATE(46),
    [sym__hor_space] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(154),
    [sym_comment] = ACTIONS(154),
    [ts_builtin_sym_end] = ACTIONS(188),
    [anon_sym_DQUOTE] = ACTIONS(190),
    [sym_expression] = ACTIONS(193),
    [anon_sym_POUND] = ACTIONS(154),
    [aux_sym_command_param_value_token1] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(154),
    [sym_generic_text] = ACTIONS(154),
    [anon_sym_AT] = ACTIONS(154),
  },
  [47] = {
    [sym__hor_space] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(159),
    [sym_comment] = ACTIONS(159),
    [ts_builtin_sym_end] = ACTIONS(161),
    [sym_expression] = ACTIONS(161),
    [anon_sym_POUND] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [sym_generic_text] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(159),
  },
  [48] = {
    [sym__hor_space] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(167),
    [sym_comment] = ACTIONS(167),
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym_expression] = ACTIONS(169),
    [anon_sym_POUND] = ACTIONS(167),
    [aux_sym_command_param_value_token1] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_generic_text] = ACTIONS(167),
    [anon_sym_AT] = ACTIONS(167),
  },
  [49] = {
    [aux_sym_command_param_value_repeat1] = STATE(42),
    [sym_command_param_id] = STATE(43),
    [sym_command_param_value] = STATE(44),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [sym_expression] = ACTIONS(181),
    [aux_sym_command_param_value_token1] = ACTIONS(199),
    [aux_sym_command_param_id_token1] = ACTIONS(99),
  },
  [50] = {
    [sym_command_param_id] = STATE(43),
    [aux_sym_command_param_id_token1] = ACTIONS(99),
  },
  [51] = {
    [anon_sym_DQUOTE] = ACTIONS(201),
  },
  [52] = {
    [aux_sym_command_param_value_token2] = ACTIONS(203),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(7),
  [15] = {.count = 1, .reusable = true}, SHIFT(5),
  [17] = {.count = 1, .reusable = false}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(9),
  [21] = {.count = 1, .reusable = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true}, SHIFT(13),
  [25] = {.count = 1, .reusable = true}, SHIFT(41),
  [27] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_fragment, 1),
  [31] = {.count = 1, .reusable = true}, SHIFT(16),
  [33] = {.count = 1, .reusable = false}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_label_id, 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_label_id, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(8),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_define_key, 1),
  [47] = {.count = 1, .reusable = true}, SHIFT(18),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_command_id, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_command_id, 1),
  [53] = {.count = 1, .reusable = false}, SHIFT(19),
  [55] = {.count = 1, .reusable = true}, SHIFT(20),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_command, 2),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_command, 2),
  [61] = {.count = 1, .reusable = false}, SHIFT(49),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(3),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(16),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(4),
  [77] = {.count = 2, .reusable = false}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(16),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [87] = {.count = 1, .reusable = true}, SHIFT(25),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 3),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 3),
  [93] = {.count = 1, .reusable = true}, SHIFT(26),
  [95] = {.count = 1, .reusable = true}, SHIFT(28),
  [97] = {.count = 1, .reusable = false}, SHIFT(28),
  [99] = {.count = 1, .reusable = true}, SHIFT(27),
  [101] = {.count = 1, .reusable = false}, SHIFT(31),
  [103] = {.count = 1, .reusable = true}, SHIFT(32),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_command, 3),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_command, 3),
  [109] = {.count = 1, .reusable = false}, SHIFT(50),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_define, 4),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_define, 4),
  [115] = {.count = 1, .reusable = true}, SHIFT(36),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_command_param_id, 1),
  [119] = {.count = 1, .reusable = false}, SHIFT(26),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_command_param_value, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(37),
  [125] = {.count = 1, .reusable = false}, SHIFT(37),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_command_nameless_param, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_command_nameless_param, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 4),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 4),
  [135] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(32),
  [140] = {.count = 1, .reusable = false}, SHIFT(39),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_command, 4),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_command, 4),
  [146] = {.count = 1, .reusable = true}, SHIFT(40),
  [148] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(26),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(37),
  [154] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_param_value_repeat1, 2),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(37),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_command_param, 3),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_command_param, 3),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_inlined_command, 5),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_inlined_command, 5),
  [167] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_param_value_repeat1, 3),
  [169] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 3),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_command_param_value, 1),
  [173] = {.count = 1, .reusable = false}, SHIFT(52),
  [175] = {.count = 1, .reusable = true}, SHIFT(46),
  [177] = {.count = 1, .reusable = false}, SHIFT(46),
  [179] = {.count = 1, .reusable = true}, SHIFT(52),
  [181] = {.count = 1, .reusable = true}, SHIFT(42),
  [183] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(50),
  [186] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_repeat1, 2),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2),
  [190] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(52),
  [193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(46),
  [196] = {.count = 2, .reusable = false}, REDUCE(aux_sym_command_param_value_repeat1, 2), SHIFT_REPEAT(46),
  [199] = {.count = 1, .reusable = false}, SHIFT(42),
  [201] = {.count = 1, .reusable = true}, SHIFT(48),
  [203] = {.count = 1, .reusable = true}, SHIFT(51),
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
