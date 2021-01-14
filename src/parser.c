#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_dot = 1,
  anon_sym_defmodule = 2,
  aux_sym_module_name_token1 = 3,
  anon_sym_do = 4,
  anon_sym_end = 5,
  sym_program = 6,
  sym_expression = 7,
  sym_module_definition = 8,
  sym_module_name = 9,
  sym_block = 10,
  aux_sym_module_name_repeat1 = 11,
  aux_sym_block_repeat1 = 12,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_dot] = "dot",
  [anon_sym_defmodule] = "defmodule",
  [aux_sym_module_name_token1] = "module_name_token1",
  [anon_sym_do] = "do",
  [anon_sym_end] = "end",
  [sym_program] = "program",
  [sym_expression] = "expression",
  [sym_module_definition] = "module_definition",
  [sym_module_name] = "module_name",
  [sym_block] = "block",
  [aux_sym_module_name_repeat1] = "module_name_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_dot] = sym_dot,
  [anon_sym_defmodule] = anon_sym_defmodule,
  [aux_sym_module_name_token1] = aux_sym_module_name_token1,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_end] = anon_sym_end,
  [sym_program] = sym_program,
  [sym_expression] = sym_expression,
  [sym_module_definition] = sym_module_definition,
  [sym_module_name] = sym_module_name,
  [sym_block] = sym_block,
  [aux_sym_module_name_repeat1] = aux_sym_module_name_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_defmodule] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_module_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_dot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_defmodule);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_module_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [anon_sym_defmodule] = ACTIONS(1),
    [aux_sym_module_name_token1] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(13),
    [sym_expression] = STATE(14),
    [sym_module_definition] = STATE(6),
    [anon_sym_defmodule] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_defmodule,
    ACTIONS(5), 1,
      anon_sym_end,
    STATE(6), 1,
      sym_module_definition,
    STATE(3), 2,
      sym_expression,
      aux_sym_block_repeat1,
  [14] = 4,
    ACTIONS(3), 1,
      anon_sym_defmodule,
    ACTIONS(7), 1,
      anon_sym_end,
    STATE(6), 1,
      sym_module_definition,
    STATE(4), 2,
      sym_expression,
      aux_sym_block_repeat1,
  [28] = 4,
    ACTIONS(9), 1,
      anon_sym_defmodule,
    ACTIONS(12), 1,
      anon_sym_end,
    STATE(6), 1,
      sym_module_definition,
    STATE(4), 2,
      sym_expression,
      aux_sym_block_repeat1,
  [42] = 3,
    ACTIONS(14), 1,
      aux_sym_module_name_token1,
    STATE(7), 1,
      aux_sym_module_name_repeat1,
    STATE(12), 1,
      sym_module_name,
  [52] = 1,
    ACTIONS(16), 3,
      ts_builtin_sym_end,
      anon_sym_defmodule,
      anon_sym_end,
  [58] = 3,
    ACTIONS(18), 1,
      aux_sym_module_name_token1,
    ACTIONS(20), 1,
      anon_sym_do,
    STATE(9), 1,
      aux_sym_module_name_repeat1,
  [68] = 1,
    ACTIONS(22), 3,
      ts_builtin_sym_end,
      anon_sym_defmodule,
      anon_sym_end,
  [74] = 3,
    ACTIONS(24), 1,
      aux_sym_module_name_token1,
    ACTIONS(27), 1,
      anon_sym_do,
    STATE(9), 1,
      aux_sym_module_name_repeat1,
  [84] = 1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      anon_sym_defmodule,
      anon_sym_end,
  [90] = 1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_defmodule,
      anon_sym_end,
  [96] = 2,
    ACTIONS(33), 1,
      anon_sym_do,
    STATE(8), 1,
      sym_block,
  [103] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
  [107] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 58,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 74,
  [SMALL_STATE(10)] = 84,
  [SMALL_STATE(11)] = 90,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 103,
  [SMALL_STATE(14)] = 107,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 3),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Elixir(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
