#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 47
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_BSLASHw_PLUS_SLASH = 1,
  sym_label_sign = 2,
  aux_sym_SLASH_SEMI_DOT_STAR_SLASH = 3,
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
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = "/\\w+/",
  [sym_label_sign] = "label_sign",
  [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = "/;.*/",
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
  [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_label_sign] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = {
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
      ACCEPT_TOKEN(aux_sym_SLASH_SEMI_DOT_STAR_SLASH);
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
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (lookahead == ':')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(13);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_named_arg);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ':')
        ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_named_arg);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_named_arg);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(13);
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
      END_STATE();
    case 15:
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
        ADVANCE(16);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__hor_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHw_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(19);
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
        ADVANCE(21);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__hor_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ']')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(23);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__hor_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(25);
      if (lookahead == '#')
        ADVANCE(27);
      if (lookahead == ';')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(30);
      if (lookahead == '@')
        ADVANCE(5);
      if (lookahead == '[')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      if ((lookahead < '0' || lookahead > ';') &&
          lookahead != ']')
        ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == '\"')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_unnamed_arg);
      if (lookahead == '\"')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_label_sign);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
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
          lookahead != '\"' &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_SEMI_DOT_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\"' ||
          lookahead == ':' ||
          lookahead == '@' ||
          lookahead == '[' ||
          lookahead == ']')
        ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n')
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_define_sign);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\"' &&
          lookahead != ':' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_unnamed_arg);
      if (lookahead == ':')
        ADVANCE(9);
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
          lookahead != '\"' &&
          (lookahead < '@' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == '\n')
        SKIP(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_define_val);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_define_val);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '\"')
        ADVANCE(25);
      if (lookahead == ']')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '0' || lookahead > ':') &&
          (lookahead < '@' || lookahead > '['))
        ADVANCE(28);
      END_STATE();
    case 36:
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
        SKIP(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == ':')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 36},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 14},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(3),
    [sym_label_sign] = ACTIONS(1),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(1),
    [sym_define_sign] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_named_arg] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(7),
    [sym_label] = STATE(9),
    [sym_comment] = STATE(9),
    [sym_define] = STATE(9),
    [sym_command_line] = STATE(9),
    [sym_inline_command] = STATE(9),
    [sym__non_inlined_name] = STATE(8),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_label_sign] = ACTIONS(7),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(9),
    [sym_define_sign] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
  },
  [2] = {
    [sym__hor_space] = ACTIONS(17),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_label_sign] = ACTIONS(21),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(21),
    [sym_define_sign] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_AT] = ACTIONS(21),
    [sym__hor_space] = ACTIONS(23),
  },
  [4] = {
    [sym_define_name] = STATE(13),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(25),
  },
  [5] = {
    [sym_command_name] = STATE(15),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(27),
  },
  [6] = {
    [sym_command_name] = STATE(16),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(27),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(29),
  },
  [8] = {
    [aux_sym_command_line_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_label_sign] = ACTIONS(33),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(33),
    [sym_define_sign] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_AT] = ACTIONS(33),
    [sym__hor_space] = ACTIONS(35),
  },
  [9] = {
    [sym_label] = STATE(19),
    [sym_comment] = STATE(19),
    [sym_define] = STATE(19),
    [sym_command_line] = STATE(19),
    [sym_inline_command] = STATE(19),
    [sym__non_inlined_name] = STATE(8),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_label_sign] = ACTIONS(7),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(9),
    [sym_define_sign] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
  },
  [10] = {
    [sym_label_name] = STATE(21),
    [aux_sym_SLASH_BSLASHw_PLUS_SLASH] = ACTIONS(39),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_label_sign] = ACTIONS(41),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(41),
    [sym_define_sign] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_AT] = ACTIONS(41),
  },
  [12] = {
    [sym__hor_space] = ACTIONS(43),
  },
  [13] = {
    [sym__hor_space] = ACTIONS(45),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_label_sign] = ACTIONS(49),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(49),
    [sym_define_sign] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
    [sym__hor_space] = ACTIONS(47),
  },
  [15] = {
    [aux_sym_command_line_repeat1] = STATE(25),
    [anon_sym_RBRACK] = ACTIONS(51),
    [sym__hor_space] = ACTIONS(53),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_label_sign] = ACTIONS(57),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(57),
    [sym_define_sign] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(57),
    [sym__hor_space] = ACTIONS(55),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_label_sign] = ACTIONS(61),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(59),
    [sym_define_sign] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(59),
    [sym_unnamed_arg] = ACTIONS(63),
    [sym_named_arg] = ACTIONS(65),
  },
  [18] = {
    [aux_sym_command_line_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_label_sign] = ACTIONS(61),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(61),
    [sym_define_sign] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_AT] = ACTIONS(61),
    [sym__hor_space] = ACTIONS(67),
  },
  [19] = {
    [sym_label] = STATE(19),
    [sym_comment] = STATE(19),
    [sym_define] = STATE(19),
    [sym_command_line] = STATE(19),
    [sym_inline_command] = STATE(19),
    [sym__non_inlined_name] = STATE(8),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_label_sign] = ACTIONS(71),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(74),
    [sym_define_sign] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(83),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym_label_sign] = ACTIONS(88),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(88),
    [sym_define_sign] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(88),
    [sym__hor_space] = ACTIONS(86),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_label_sign] = ACTIONS(92),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(92),
    [sym_define_sign] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(92),
    [sym__hor_space] = ACTIONS(94),
  },
  [22] = {
    [sym_define_val] = ACTIONS(96),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [sym_label_sign] = ACTIONS(98),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(98),
    [sym_define_sign] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_AT] = ACTIONS(98),
  },
  [24] = {
    [anon_sym_RBRACK] = ACTIONS(100),
    [sym_unnamed_arg] = ACTIONS(102),
    [sym_named_arg] = ACTIONS(65),
  },
  [25] = {
    [aux_sym_command_line_repeat1] = STATE(35),
    [anon_sym_RBRACK] = ACTIONS(104),
    [sym__hor_space] = ACTIONS(106),
  },
  [26] = {
    [aux_sym_command_line_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_label_sign] = ACTIONS(110),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(110),
    [sym_define_sign] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_AT] = ACTIONS(110),
    [sym__hor_space] = ACTIONS(112),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_label_sign] = ACTIONS(116),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(116),
    [sym_define_sign] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(116),
    [sym__hor_space] = ACTIONS(114),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_label_sign] = ACTIONS(108),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(108),
    [sym_define_sign] = ACTIONS(108),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(108),
    [sym_named_arg] = ACTIONS(65),
  },
  [29] = {
    [aux_sym_command_line_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_label_sign] = ACTIONS(116),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(116),
    [sym_define_sign] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_AT] = ACTIONS(116),
    [sym__hor_space] = ACTIONS(118),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_label_sign] = ACTIONS(121),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(121),
    [sym_define_sign] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(121),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_label_sign] = ACTIONS(125),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(125),
    [sym_define_sign] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(125),
    [sym__hor_space] = ACTIONS(127),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_label_sign] = ACTIONS(129),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(129),
    [sym_define_sign] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(129),
  },
  [33] = {
    [aux_sym_command_line_repeat1] = STATE(42),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym__hor_space] = ACTIONS(133),
  },
  [34] = {
    [anon_sym_RBRACK] = ACTIONS(135),
    [sym_named_arg] = ACTIONS(65),
  },
  [35] = {
    [aux_sym_command_line_repeat1] = STATE(35),
    [anon_sym_RBRACK] = ACTIONS(116),
    [sym__hor_space] = ACTIONS(118),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_label_sign] = ACTIONS(137),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(137),
    [sym_define_sign] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(137),
    [sym_named_arg] = ACTIONS(65),
  },
  [37] = {
    [aux_sym_command_line_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_label_sign] = ACTIONS(139),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(139),
    [sym_define_sign] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_AT] = ACTIONS(139),
    [sym__hor_space] = ACTIONS(141),
  },
  [38] = {
    [sym_named_arg] = ACTIONS(65),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_label_sign] = ACTIONS(143),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(143),
    [sym_define_sign] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_AT] = ACTIONS(143),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_label_sign] = ACTIONS(145),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(145),
    [sym_define_sign] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(145),
  },
  [41] = {
    [anon_sym_RBRACK] = ACTIONS(147),
    [sym_named_arg] = ACTIONS(65),
  },
  [42] = {
    [aux_sym_command_line_repeat1] = STATE(35),
    [anon_sym_RBRACK] = ACTIONS(149),
    [sym__hor_space] = ACTIONS(151),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [sym_label_sign] = ACTIONS(153),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(153),
    [sym_define_sign] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(153),
    [sym_named_arg] = ACTIONS(65),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_label_sign] = ACTIONS(155),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(155),
    [sym_define_sign] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(155),
  },
  [45] = {
    [anon_sym_RBRACK] = ACTIONS(157),
    [sym_named_arg] = ACTIONS(65),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_label_sign] = ACTIONS(159),
    [aux_sym_SLASH_SEMI_DOT_STAR_SLASH] = ACTIONS(159),
    [sym_define_sign] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(159),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(10),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 1),
  [23] = {.count = 1, .reusable = true}, SHIFT(11),
  [25] = {.count = 1, .reusable = true}, SHIFT(12),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_command_line, 1),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_command_line, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(17),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [39] = {.count = 1, .reusable = true}, SHIFT(20),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_define_name, 1),
  [45] = {.count = 1, .reusable = true}, SHIFT(22),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_command_name, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_command_name, 1),
  [51] = {.count = 1, .reusable = false}, SHIFT(23),
  [53] = {.count = 1, .reusable = true}, SHIFT(24),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym__non_inlined_name, 2),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym__non_inlined_name, 2),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_command_line, 2),
  [61] = {.count = 1, .reusable = false}, REDUCE(sym_command_line, 2),
  [63] = {.count = 1, .reusable = false}, SHIFT(26),
  [65] = {.count = 1, .reusable = true}, SHIFT(27),
  [67] = {.count = 1, .reusable = true}, SHIFT(28),
  [69] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_label_name, 1),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_label_name, 1),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym_label, 3),
  [94] = {.count = 1, .reusable = true}, SHIFT(30),
  [96] = {.count = 1, .reusable = true}, SHIFT(31),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 3),
  [100] = {.count = 1, .reusable = true}, SHIFT(32),
  [102] = {.count = 1, .reusable = false}, SHIFT(33),
  [104] = {.count = 1, .reusable = false}, SHIFT(32),
  [106] = {.count = 1, .reusable = true}, SHIFT(34),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_command_line, 3),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_command_line, 3),
  [112] = {.count = 1, .reusable = true}, SHIFT(36),
  [114] = {.count = 1, .reusable = true}, REDUCE(aux_sym_command_line_repeat1, 2),
  [116] = {.count = 1, .reusable = false}, REDUCE(aux_sym_command_line_repeat1, 2),
  [118] = {.count = 2, .reusable = true}, REDUCE(aux_sym_command_line_repeat1, 2), SHIFT_REPEAT(38),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_label, 4),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_define, 4),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_define, 4),
  [127] = {.count = 1, .reusable = true}, SHIFT(39),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 4),
  [131] = {.count = 1, .reusable = false}, SHIFT(40),
  [133] = {.count = 1, .reusable = true}, SHIFT(41),
  [135] = {.count = 1, .reusable = true}, SHIFT(40),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_command_line, 4),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_command_line, 4),
  [141] = {.count = 1, .reusable = true}, SHIFT(43),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_define, 5),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 5),
  [147] = {.count = 1, .reusable = true}, SHIFT(44),
  [149] = {.count = 1, .reusable = false}, SHIFT(44),
  [151] = {.count = 1, .reusable = true}, SHIFT(45),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_command_line, 5),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 6),
  [157] = {.count = 1, .reusable = true}, SHIFT(46),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_inline_command, 7),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tree_sitter_nani_script() {
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
