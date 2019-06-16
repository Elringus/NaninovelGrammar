#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 46
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
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
  sym__hor_space = 11,
  sym_program = 12,
  sym_label = 13,
  sym_label_name = 14,
  sym_comment = 15,
  sym_define = 16,
  sym_define_name = 17,
  sym_command_line = 18,
  sym_inline_command = 19,
  sym__non_inlined_name = 20,
  sym_command_name = 21,
  aux_sym_program_repeat1 = 22,
  aux_sym_command_line_repeat1 = 23,
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
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
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (lookahead == ':')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"')
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_named_arg);
      if (lookahead == '"')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ':')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_named_arg);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '"')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_named_arg);
      if (lookahead == '"')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(12);
      END_STATE();
    case 14:
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
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == ':')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_label_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(17);
      END_STATE();
    case 18:
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
        ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__hor_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(19);
      END_STATE();
    case 20:
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
        ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(20);
      END_STATE();
    case 21:
      if (lookahead == ']')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(23);
      if (lookahead == '#')
        ADVANCE(24);
      if (lookahead == ';')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(26);
      if (lookahead == '@')
        ADVANCE(5);
      if (lookahead == '[')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ']')
        ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == '"')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(23);
      END_STATE();
    case 24:
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
          lookahead != ']')
        ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == ':' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(25);
      END_STATE();
    case 26:
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
          lookahead != ']')
        ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_unnamed_arg);
      if (lookahead == ':')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '@' || '[' < lookahead) &&
          lookahead != ']')
        ADVANCE(28);
      END_STATE();
    case 28:
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
          lookahead != ']')
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_unnamed_arg);
      if (lookahead == '"')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(23);
      END_STATE();
    case 30:
      if (lookahead == '\n')
        SKIP(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_define_val);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_define_val);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '"')
        ADVANCE(23);
      if (lookahead == ']')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != ':' &&
          (lookahead < '@' || '[' < lookahead))
        ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 33},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 33},
  [45] = {.lex_state = 14},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_define_sign] = ACTIONS(1),
    [sym_named_arg] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_label_name_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
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
    [sym__hor_space] = ACTIONS(45),
    [sym_label_sign] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [aux_sym_comment_token1] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(43),
  },
  [14] = {
    [aux_sym_command_line_repeat1] = STATE(25),
    [sym__hor_space] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(49),
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
    [sym__hor_space] = ACTIONS(55),
    [ts_builtin_sym_end] = ACTIONS(55),
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
    [sym_label_sign] = ACTIONS(74),
    [sym_unnamed_arg] = ACTIONS(80),
    [aux_sym_comment_token1] = ACTIONS(78),
    [anon_sym_AT] = ACTIONS(78),
  },
  [19] = {
    [aux_sym_command_line_repeat1] = STATE(29),
    [sym_define_sign] = ACTIONS(74),
    [sym_label_sign] = ACTIONS(74),
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym__hor_space] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(74),
    [aux_sym_comment_token1] = ACTIONS(74),
    [anon_sym_AT] = ACTIONS(74),
  },
  [20] = {
    [sym_define_val] = ACTIONS(84),
  },
  [21] = {
    [sym_define_sign] = ACTIONS(86),
    [sym_label_sign] = ACTIONS(86),
    [sym__hor_space] = ACTIONS(88),
    [ts_builtin_sym_end] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(86),
    [aux_sym_comment_token1] = ACTIONS(86),
    [anon_sym_AT] = ACTIONS(86),
  },
  [22] = {
    [sym_define_sign] = ACTIONS(90),
    [sym_label_sign] = ACTIONS(90),
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym__hor_space] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(90),
    [aux_sym_comment_token1] = ACTIONS(90),
    [anon_sym_AT] = ACTIONS(90),
  },
  [23] = {
    [sym_unnamed_arg] = ACTIONS(96),
    [sym_named_arg] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(98),
  },
  [24] = {
    [sym_define_sign] = ACTIONS(100),
    [sym_label_sign] = ACTIONS(100),
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(100),
    [aux_sym_comment_token1] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(100),
  },
  [25] = {
    [aux_sym_command_line_repeat1] = STATE(29),
    [sym__hor_space] = ACTIONS(102),
    [anon_sym_RBRACK] = ACTIONS(104),
  },
  [26] = {
    [aux_sym_command_line_repeat1] = STATE(36),
    [sym_define_sign] = ACTIONS(106),
    [sym_label_sign] = ACTIONS(106),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym__hor_space] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(106),
    [aux_sym_comment_token1] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(106),
  },
  [27] = {
    [sym_define_sign] = ACTIONS(112),
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(112),
    [sym__hor_space] = ACTIONS(114),
    [sym_label_sign] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [aux_sym_comment_token1] = ACTIONS(112),
    [anon_sym_AT] = ACTIONS(112),
  },
  [28] = {
    [sym_define_sign] = ACTIONS(108),
    [sym_label_sign] = ACTIONS(108),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_named_arg] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(108),
    [aux_sym_comment_token1] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(108),
  },
  [29] = {
    [aux_sym_command_line_repeat1] = STATE(29),
    [sym_define_sign] = ACTIONS(112),
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(112),
    [sym__hor_space] = ACTIONS(116),
    [sym_label_sign] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [aux_sym_comment_token1] = ACTIONS(112),
    [anon_sym_AT] = ACTIONS(112),
  },
  [30] = {
    [sym_define_sign] = ACTIONS(119),
    [sym_label_sign] = ACTIONS(119),
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym__hor_space] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(119),
    [aux_sym_comment_token1] = ACTIONS(119),
    [anon_sym_AT] = ACTIONS(119),
  },
  [31] = {
    [sym_define_sign] = ACTIONS(125),
    [sym_label_sign] = ACTIONS(125),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [aux_sym_comment_token1] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(125),
  },
  [32] = {
    [aux_sym_command_line_repeat1] = STATE(41),
    [sym__hor_space] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(129),
  },
  [33] = {
    [sym_define_sign] = ACTIONS(131),
    [sym_label_sign] = ACTIONS(131),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [aux_sym_comment_token1] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(131),
  },
  [34] = {
    [sym_named_arg] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(133),
  },
  [35] = {
    [sym_define_sign] = ACTIONS(135),
    [sym_label_sign] = ACTIONS(135),
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_named_arg] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(135),
    [aux_sym_comment_token1] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(135),
  },
  [36] = {
    [aux_sym_command_line_repeat1] = STATE(29),
    [sym_define_sign] = ACTIONS(137),
    [sym_label_sign] = ACTIONS(137),
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym__hor_space] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [aux_sym_comment_token1] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(137),
  },
  [37] = {
    [sym_named_arg] = ACTIONS(76),
  },
  [38] = {
    [sym_define_sign] = ACTIONS(141),
    [sym_label_sign] = ACTIONS(141),
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_LBRACK] = ACTIONS(141),
    [aux_sym_comment_token1] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(141),
  },
  [39] = {
    [sym_named_arg] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(143),
  },
  [40] = {
    [sym_define_sign] = ACTIONS(145),
    [sym_label_sign] = ACTIONS(145),
    [ts_builtin_sym_end] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(145),
    [aux_sym_comment_token1] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(145),
  },
  [41] = {
    [aux_sym_command_line_repeat1] = STATE(29),
    [sym__hor_space] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(149),
  },
  [42] = {
    [sym_define_sign] = ACTIONS(151),
    [sym_label_sign] = ACTIONS(151),
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_named_arg] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(151),
    [aux_sym_comment_token1] = ACTIONS(151),
    [anon_sym_AT] = ACTIONS(151),
  },
  [43] = {
    [sym_define_sign] = ACTIONS(153),
    [sym_label_sign] = ACTIONS(153),
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [aux_sym_comment_token1] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(153),
  },
  [44] = {
    [sym_named_arg] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(155),
  },
  [45] = {
    [sym_define_sign] = ACTIONS(157),
    [sym_label_sign] = ACTIONS(157),
    [ts_builtin_sym_end] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(157),
    [aux_sym_comment_token1] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(157),
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
  [47] = {.count = 1, .reusable = true}, SHIFT(23),
  [49] = {.count = 1, .reusable = false}, SHIFT(24),
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
  [80] = {.count = 1, .reusable = false}, SHIFT(26),
  [82] = {.count = 1, .reusable = true}, SHIFT(28),
  [84] = {.count = 1, .reusable = true}, SHIFT(30),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym_label_name, 1),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_label_name, 1),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [94] = {.count = 1, .reusable = true}, SHIFT(31),
  [96] = {.count = 1, .reusable = false}, SHIFT(32),
  [98] = {.count = 1, .reusable = true}, SHIFT(33),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 3),
  [102] = {.count = 1, .reusable = true}, SHIFT(34),
  [104] = {.count = 1, .reusable = false}, SHIFT(33),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_command_line, 3),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_command_line, 3),
  [110] = {.count = 1, .reusable = true}, SHIFT(35),
  [112] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_line_repeat1, 2),
  [114] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_line_repeat1, 2),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_line_repeat1, 2), SHIFT_REPEAT(37),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_define, 4),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_define, 4),
  [123] = {.count = 1, .reusable = true}, SHIFT(38),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_label, 4),
  [127] = {.count = 1, .reusable = true}, SHIFT(39),
  [129] = {.count = 1, .reusable = false}, SHIFT(40),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 4),
  [133] = {.count = 1, .reusable = true}, SHIFT(40),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_command_line, 4),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_command_line, 4),
  [139] = {.count = 1, .reusable = true}, SHIFT(42),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_define, 5),
  [143] = {.count = 1, .reusable = true}, SHIFT(43),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 5),
  [147] = {.count = 1, .reusable = true}, SHIFT(44),
  [149] = {.count = 1, .reusable = false}, SHIFT(43),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_command_line, 5),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 6),
  [155] = {.count = 1, .reusable = true}, SHIFT(45),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 7),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_naninovel(void) {
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
