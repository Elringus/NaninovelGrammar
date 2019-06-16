#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 50
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  aux_sym_label_name_token1 = 1,
  sym_label_sign = 2,
  aux_sym_comment_token1 = 3,
  sym_define_val = 4,
  sym_define_sign = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_AT = 8,
  sym_unnamed_arg = 9,
  sym_named_arg = 10,
  sym_substitution = 11,
  sym__hor_space = 12,
  sym_program = 13,
  sym_label = 14,
  sym_label_name = 15,
  sym_comment = 16,
  sym_define = 17,
  sym_define_name = 18,
  sym_command_line = 19,
  sym_inline_command = 20,
  sym__non_inlined_name = 21,
  sym_command_name = 22,
  aux_sym_program_repeat1 = 23,
  aux_sym_command_line_repeat1 = 24,
  aux_sym_inline_command_repeat1 = 25,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_label_name_token1] = "label_name_token1",
  [sym_label_sign] = "label_sign",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_define_val] = "define_val",
  [sym_define_sign] = "define_sign",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [sym_unnamed_arg] = "unnamed_arg",
  [sym_named_arg] = "named_arg",
  [sym_substitution] = "substitution",
  [sym__hor_space] = "_hor_space",
  [sym_program] = "program",
  [sym_label] = "label",
  [sym_label_name] = "label_name",
  [sym_comment] = "comment",
  [sym_define] = "define",
  [sym_define_name] = "define_name",
  [sym_command_line] = "command_line",
  [sym_inline_command] = "inline_command",
  [sym__non_inlined_name] = "_non_inlined_name",
  [sym_command_name] = "command_name",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_command_line_repeat1] = "command_line_repeat1",
  [aux_sym_inline_command_repeat1] = "inline_command_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_label_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_label_sign] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_define_val] = {
    .visible = true,
    .named = true,
  },
  [sym_define_sign] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_unnamed_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_named_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym__hor_space] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_label_name] = {
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
  [sym_define_name] = {
    .visible = true,
    .named = true,
  },
  [sym_command_line] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_command] = {
    .visible = true,
    .named = true,
  },
  [sym__non_inlined_name] = {
    .visible = false,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_command_repeat1] = {
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_label_sign);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_define_sign);
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
      if (lookahead == '"')
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == ':')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"')
        ADVANCE(10);
      if (lookahead == '}')
        ADVANCE(13);
      if (lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '}')
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{')
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '"')
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_substitution);
      if (lookahead == '"')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '"')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_substitution);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_named_arg);
      if (lookahead == '"')
        ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_named_arg);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '"')
        ADVANCE(18);
      if (lookahead == '}')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ')
        ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == '"')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_named_arg);
      if (lookahead == '"')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(19);
      END_STATE();
    case 21:
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
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == ':')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 25:
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(26);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__hor_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(26);
      END_STATE();
    case 27:
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(26);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == ']')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(26);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(28);
      END_STATE();
    case 29:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(30);
      if (lookahead == '#')
        ADVANCE(31);
      if (lookahead == ';')
        ADVANCE(32);
      if (lookahead == '>')
        ADVANCE(33);
      if (lookahead == '@')
        ADVANCE(5);
      if (lookahead == '[')
        ADVANCE(6);
      if (lookahead == '{')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']' &&
          lookahead != '}')
        ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == '"')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_label_sign);
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
        ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == ':' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_define_sign);
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
        ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_unnamed_arg);
      if (lookahead == ':')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
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
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_unnamed_arg);
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
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_unnamed_arg);
      if (lookahead == '"')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == '\n')
        SKIP(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_define_val);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_define_val);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '"')
        ADVANCE(30);
      if (lookahead == ']')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != ':' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 25},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 40},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 40},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 21},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 40},
  [49] = {.lex_state = 21},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_define_sign] = ACTIONS(1),
    [sym_named_arg] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_label_name_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_substitution] = ACTIONS(1),
    [sym_label_sign] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
  },
  [1] = {
    [sym_comment] = STATE(7),
    [sym_define] = STATE(7),
    [aux_sym_program_repeat1] = STATE(7),
    [sym_program] = STATE(8),
    [sym_command_line] = STATE(7),
    [sym_label] = STATE(7),
    [sym_inline_command] = STATE(7),
    [sym__non_inlined_name] = STATE(9),
    [sym_define_sign] = ACTIONS(3),
    [sym_label_sign] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
  },
  [2] = {
    [sym_define_name] = STATE(11),
    [aux_sym_label_name_token1] = ACTIONS(15),
  },
  [3] = {
    [sym__hor_space] = ACTIONS(17),
  },
  [4] = {
    [sym_command_name] = STATE(14),
    [aux_sym_label_name_token1] = ACTIONS(19),
  },
  [5] = {
    [sym_define_sign] = ACTIONS(21),
    [sym_label_sign] = ACTIONS(21),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__hor_space] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(21),
    [aux_sym_comment_token1] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
  },
  [6] = {
    [sym_command_name] = STATE(16),
    [aux_sym_label_name_token1] = ACTIONS(19),
  },
  [7] = {
    [sym_command_line] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_define] = STATE(17),
    [sym_label] = STATE(17),
    [aux_sym_program_repeat1] = STATE(17),
    [sym_inline_command] = STATE(17),
    [sym__non_inlined_name] = STATE(9),
    [sym_define_sign] = ACTIONS(3),
    [sym_label_sign] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(29),
  },
  [9] = {
    [aux_sym_command_line_repeat1] = STATE(19),
    [sym_define_sign] = ACTIONS(31),
    [sym_label_sign] = ACTIONS(31),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym__hor_space] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(31),
    [anon_sym_AT] = ACTIONS(31),
  },
  [10] = {
    [sym__hor_space] = ACTIONS(37),
  },
  [11] = {
    [sym__hor_space] = ACTIONS(39),
  },
  [12] = {
    [sym_label_name] = STATE(22),
    [aux_sym_label_name_token1] = ACTIONS(41),
  },
  [13] = {
    [sym_define_sign] = ACTIONS(43),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_label_sign] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [sym__hor_space] = ACTIONS(45),
    [aux_sym_comment_token1] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(43),
  },
  [14] = {
    [aux_sym_inline_command_repeat1] = STATE(25),
    [anon_sym_RBRACK] = ACTIONS(47),
    [sym__hor_space] = ACTIONS(49),
  },
  [15] = {
    [sym_define_sign] = ACTIONS(51),
    [sym_label_sign] = ACTIONS(51),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(51),
    [aux_sym_comment_token1] = ACTIONS(51),
    [anon_sym_AT] = ACTIONS(51),
  },
  [16] = {
    [sym_define_sign] = ACTIONS(53),
    [sym_label_sign] = ACTIONS(53),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym__hor_space] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(53),
    [aux_sym_comment_token1] = ACTIONS(53),
    [anon_sym_AT] = ACTIONS(53),
  },
  [17] = {
    [sym_command_line] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_define] = STATE(17),
    [sym_label] = STATE(17),
    [aux_sym_program_repeat1] = STATE(17),
    [sym_inline_command] = STATE(17),
    [sym__non_inlined_name] = STATE(9),
    [sym_define_sign] = ACTIONS(57),
    [sym_label_sign] = ACTIONS(60),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(65),
    [aux_sym_comment_token1] = ACTIONS(68),
    [anon_sym_AT] = ACTIONS(71),
  },
  [18] = {
    [sym_define_sign] = ACTIONS(74),
    [sym_named_arg] = ACTIONS(76),
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(78),
    [sym_substitution] = ACTIONS(80),
    [sym_label_sign] = ACTIONS(74),
    [sym_unnamed_arg] = ACTIONS(82),
    [aux_sym_comment_token1] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
  },
  [19] = {
    [aux_sym_command_line_repeat1] = STATE(30),
    [sym_define_sign] = ACTIONS(74),
    [sym_label_sign] = ACTIONS(74),
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym__hor_space] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(74),
    [aux_sym_comment_token1] = ACTIONS(74),
    [anon_sym_AT] = ACTIONS(74),
  },
  [20] = {
    [sym_define_val] = ACTIONS(86),
  },
  [21] = {
    [sym_define_sign] = ACTIONS(88),
    [sym_label_sign] = ACTIONS(88),
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym__hor_space] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(88),
    [aux_sym_comment_token1] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(88),
  },
  [22] = {
    [sym_define_sign] = ACTIONS(92),
    [sym_label_sign] = ACTIONS(92),
    [ts_builtin_sym_end] = ACTIONS(94),
    [sym__hor_space] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(92),
    [aux_sym_comment_token1] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(92),
  },
  [23] = {
    [sym_define_sign] = ACTIONS(98),
    [sym_label_sign] = ACTIONS(98),
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [aux_sym_comment_token1] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
  },
  [24] = {
    [sym_unnamed_arg] = ACTIONS(100),
    [sym_named_arg] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(104),
  },
  [25] = {
    [aux_sym_inline_command_repeat1] = STATE(37),
    [anon_sym_RBRACK] = ACTIONS(106),
    [sym__hor_space] = ACTIONS(108),
  },
  [26] = {
    [aux_sym_command_line_repeat1] = STATE(39),
    [sym_define_sign] = ACTIONS(110),
    [sym_label_sign] = ACTIONS(110),
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym__hor_space] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(110),
    [aux_sym_comment_token1] = ACTIONS(110),
    [anon_sym_AT] = ACTIONS(110),
  },
  [27] = {
    [sym_define_sign] = ACTIONS(116),
    [sym_label_sign] = ACTIONS(116),
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym__hor_space] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(116),
    [aux_sym_comment_token1] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(116),
  },
  [28] = {
    [aux_sym_command_line_repeat1] = STATE(39),
    [sym_define_sign] = ACTIONS(110),
    [sym_label_sign] = ACTIONS(110),
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym__hor_space] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(110),
    [aux_sym_comment_token1] = ACTIONS(110),
    [anon_sym_AT] = ACTIONS(110),
  },
  [29] = {
    [sym_define_sign] = ACTIONS(112),
    [sym_named_arg] = ACTIONS(76),
    [ts_builtin_sym_end] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [sym_substitution] = ACTIONS(76),
    [sym_label_sign] = ACTIONS(112),
    [aux_sym_comment_token1] = ACTIONS(112),
    [anon_sym_AT] = ACTIONS(112),
  },
  [30] = {
    [aux_sym_command_line_repeat1] = STATE(30),
    [sym_define_sign] = ACTIONS(116),
    [sym_label_sign] = ACTIONS(116),
    [ts_builtin_sym_end] = ACTIONS(118),
    [sym__hor_space] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(116),
    [aux_sym_comment_token1] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(116),
  },
  [31] = {
    [sym_define_sign] = ACTIONS(123),
    [sym_label_sign] = ACTIONS(123),
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym__hor_space] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(123),
    [aux_sym_comment_token1] = ACTIONS(123),
    [anon_sym_AT] = ACTIONS(123),
  },
  [32] = {
    [sym_define_sign] = ACTIONS(129),
    [sym_label_sign] = ACTIONS(129),
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [aux_sym_comment_token1] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(129),
  },
  [33] = {
    [aux_sym_inline_command_repeat1] = STATE(44),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym__hor_space] = ACTIONS(133),
  },
  [34] = {
    [anon_sym_RBRACK] = ACTIONS(135),
    [sym__hor_space] = ACTIONS(137),
  },
  [35] = {
    [sym_define_sign] = ACTIONS(139),
    [sym_label_sign] = ACTIONS(139),
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(139),
    [aux_sym_comment_token1] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(139),
  },
  [36] = {
    [sym_named_arg] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(141),
  },
  [37] = {
    [aux_sym_inline_command_repeat1] = STATE(37),
    [anon_sym_RBRACK] = ACTIONS(135),
    [sym__hor_space] = ACTIONS(143),
  },
  [38] = {
    [sym_define_sign] = ACTIONS(146),
    [sym_named_arg] = ACTIONS(76),
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_LBRACK] = ACTIONS(146),
    [sym_substitution] = ACTIONS(76),
    [sym_label_sign] = ACTIONS(146),
    [aux_sym_comment_token1] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(146),
  },
  [39] = {
    [aux_sym_command_line_repeat1] = STATE(30),
    [sym_define_sign] = ACTIONS(148),
    [sym_label_sign] = ACTIONS(148),
    [ts_builtin_sym_end] = ACTIONS(146),
    [sym__hor_space] = ACTIONS(150),
    [anon_sym_LBRACK] = ACTIONS(148),
    [aux_sym_comment_token1] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(148),
  },
  [40] = {
    [sym_named_arg] = ACTIONS(76),
    [sym_substitution] = ACTIONS(76),
  },
  [41] = {
    [sym_define_sign] = ACTIONS(152),
    [sym_label_sign] = ACTIONS(152),
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
    [aux_sym_comment_token1] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(152),
  },
  [42] = {
    [sym_define_sign] = ACTIONS(154),
    [sym_label_sign] = ACTIONS(154),
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(154),
    [aux_sym_comment_token1] = ACTIONS(154),
    [anon_sym_AT] = ACTIONS(154),
  },
  [43] = {
    [sym_named_arg] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(156),
  },
  [44] = {
    [aux_sym_inline_command_repeat1] = STATE(37),
    [anon_sym_RBRACK] = ACTIONS(158),
    [sym__hor_space] = ACTIONS(160),
  },
  [45] = {
    [sym_named_arg] = ACTIONS(102),
  },
  [46] = {
    [sym_define_sign] = ACTIONS(162),
    [sym_named_arg] = ACTIONS(76),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(162),
    [sym_substitution] = ACTIONS(76),
    [sym_label_sign] = ACTIONS(162),
    [aux_sym_comment_token1] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(162),
  },
  [47] = {
    [sym_define_sign] = ACTIONS(164),
    [sym_label_sign] = ACTIONS(164),
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(164),
    [aux_sym_comment_token1] = ACTIONS(164),
    [anon_sym_AT] = ACTIONS(164),
  },
  [48] = {
    [sym_named_arg] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(166),
  },
  [49] = {
    [sym_define_sign] = ACTIONS(168),
    [sym_label_sign] = ACTIONS(168),
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(168),
    [aux_sym_comment_token1] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(168),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(2),
  [5] = {.count = 1, .reusable = true}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(10),
  [17] = {.count = 1, .reusable = true}, SHIFT(12),
  [19] = {.count = 1, .reusable = true}, SHIFT(13),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [29] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_command_line, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_command_line, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_define_name, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(20),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_command_name, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_command_name, 1),
  [47] = {.count = 1, .reusable = false}, SHIFT(23),
  [49] = {.count = 1, .reusable = true}, SHIFT(24),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [53] = {.count = 1, .reusable = false}, REDUCE(sym__non_inlined_name, 2),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym__non_inlined_name, 2),
  [57] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [63] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [74] = {.count = 1, .reusable = false}, REDUCE(sym_command_line, 2),
  [76] = {.count = 1, .reusable = true}, SHIFT(27),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_command_line, 2),
  [80] = {.count = 1, .reusable = true}, SHIFT(28),
  [82] = {.count = 1, .reusable = false}, SHIFT(26),
  [84] = {.count = 1, .reusable = true}, SHIFT(29),
  [86] = {.count = 1, .reusable = true}, SHIFT(31),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_label_name, 1),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_label_name, 1),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [96] = {.count = 1, .reusable = true}, SHIFT(32),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 3),
  [100] = {.count = 1, .reusable = false}, SHIFT(33),
  [102] = {.count = 1, .reusable = true}, SHIFT(34),
  [104] = {.count = 1, .reusable = true}, SHIFT(35),
  [106] = {.count = 1, .reusable = false}, SHIFT(35),
  [108] = {.count = 1, .reusable = true}, SHIFT(36),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_command_line, 3),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_command_line, 3),
  [114] = {.count = 1, .reusable = true}, SHIFT(38),
  [116] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_line_repeat1, 2),
  [118] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_line_repeat1, 2),
  [120] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_line_repeat1, 2), SHIFT_REPEAT(40),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_define, 4),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_define, 4),
  [127] = {.count = 1, .reusable = true}, SHIFT(41),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_label, 4),
  [131] = {.count = 1, .reusable = false}, SHIFT(42),
  [133] = {.count = 1, .reusable = true}, SHIFT(43),
  [135] = {.count = 1, .reusable = false}, REDUCE(aux_sym_inline_command_repeat1, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_command_repeat1, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 4),
  [141] = {.count = 1, .reusable = true}, SHIFT(42),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inline_command_repeat1, 2), SHIFT_REPEAT(45),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_command_line, 4),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_command_line, 4),
  [150] = {.count = 1, .reusable = true}, SHIFT(46),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_define, 5),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 5),
  [156] = {.count = 1, .reusable = true}, SHIFT(47),
  [158] = {.count = 1, .reusable = false}, SHIFT(47),
  [160] = {.count = 1, .reusable = true}, SHIFT(48),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_command_line, 5),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 6),
  [166] = {.count = 1, .reusable = true}, SHIFT(49),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 7),
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
