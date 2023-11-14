#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COLON = 1,
  anon_sym_QMARK = 2,
  anon_sym_POUND = 3,
  anon_sym_SLASH_SLASH = 4,
  sym_scheme = 5,
  sym_userinfo = 6,
  sym_host = 7,
  sym_port = 8,
  sym_path = 9,
  sym_query = 10,
  sym_fragment = 11,
  sym_source_file = 12,
  sym__definition = 13,
  sym_uri = 14,
  sym_authority = 15,
  aux_sym_source_file_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK] = "\?",
  [anon_sym_POUND] = "#",
  [anon_sym_SLASH_SLASH] = "//",
  [sym_scheme] = "scheme",
  [sym_userinfo] = "userinfo",
  [sym_host] = "host",
  [sym_port] = "port",
  [sym_path] = "path",
  [sym_query] = "query",
  [sym_fragment] = "fragment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_uri] = "uri",
  [sym_authority] = "authority",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym_scheme] = sym_scheme,
  [sym_userinfo] = sym_userinfo,
  [sym_host] = sym_host,
  [sym_port] = sym_port,
  [sym_path] = sym_path,
  [sym_query] = sym_query,
  [sym_fragment] = sym_fragment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_uri] = sym_uri,
  [sym_authority] = sym_authority,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_scheme] = {
    .visible = true,
    .named = true,
  },
  [sym_userinfo] = {
    .visible = true,
    .named = true,
  },
  [sym_host] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [sym_authority] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '#') ADVANCE(5);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '?') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '@') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_userinfo);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_host);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_host);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(9);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_host);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_host);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_query);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_query);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_fragment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_fragment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 18},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_scheme] = ACTIONS(1),
    [sym_port] = ACTIONS(1),
    [sym_path] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym__definition] = STATE(2),
    [sym_uri] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_scheme] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      sym_scheme,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym__definition,
      sym_uri,
      aux_sym_source_file_repeat1,
  [12] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_scheme,
    STATE(3), 3,
      sym__definition,
      sym_uri,
      aux_sym_source_file_repeat1,
  [24] = 3,
    ACTIONS(16), 1,
      anon_sym_QMARK,
    ACTIONS(18), 1,
      anon_sym_POUND,
    ACTIONS(14), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [35] = 3,
    ACTIONS(22), 1,
      anon_sym_QMARK,
    ACTIONS(24), 1,
      anon_sym_POUND,
    ACTIONS(20), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [46] = 2,
    ACTIONS(28), 1,
      anon_sym_POUND,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [54] = 2,
    ACTIONS(32), 1,
      anon_sym_POUND,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [62] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(36), 1,
      sym_path,
    STATE(21), 1,
      sym_authority,
  [72] = 2,
    ACTIONS(38), 1,
      sym_userinfo,
    ACTIONS(40), 1,
      sym_host,
  [79] = 2,
    ACTIONS(42), 1,
      anon_sym_COLON,
    ACTIONS(44), 1,
      sym_path,
  [86] = 2,
    ACTIONS(46), 1,
      anon_sym_COLON,
    ACTIONS(48), 1,
      sym_path,
  [93] = 1,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [98] = 1,
    ACTIONS(26), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [103] = 1,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [108] = 1,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [113] = 1,
    ACTIONS(54), 1,
      sym_host,
  [117] = 1,
    ACTIONS(56), 1,
      sym_query,
  [121] = 1,
    ACTIONS(58), 1,
      sym_fragment,
  [125] = 1,
    ACTIONS(60), 1,
      anon_sym_COLON,
  [129] = 1,
    ACTIONS(62), 1,
      sym_port,
  [133] = 1,
    ACTIONS(64), 1,
      sym_path,
  [137] = 1,
    ACTIONS(66), 1,
      sym_query,
  [141] = 1,
    ACTIONS(68), 1,
      sym_fragment,
  [145] = 1,
    ACTIONS(70), 1,
      sym_port,
  [149] = 1,
    ACTIONS(72), 1,
      sym_path,
  [153] = 1,
    ACTIONS(74), 1,
      sym_fragment,
  [157] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [161] = 1,
    ACTIONS(78), 1,
      sym_path,
  [165] = 1,
    ACTIONS(80), 1,
      sym_fragment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 72,
  [SMALL_STATE(10)] = 79,
  [SMALL_STATE(11)] = 86,
  [SMALL_STATE(12)] = 93,
  [SMALL_STATE(13)] = 98,
  [SMALL_STATE(14)] = 103,
  [SMALL_STATE(15)] = 108,
  [SMALL_STATE(16)] = 113,
  [SMALL_STATE(17)] = 117,
  [SMALL_STATE(18)] = 121,
  [SMALL_STATE(19)] = 125,
  [SMALL_STATE(20)] = 129,
  [SMALL_STATE(21)] = 133,
  [SMALL_STATE(22)] = 137,
  [SMALL_STATE(23)] = 141,
  [SMALL_STATE(24)] = 145,
  [SMALL_STATE(25)] = 149,
  [SMALL_STATE(26)] = 153,
  [SMALL_STATE(27)] = 157,
  [SMALL_STATE(28)] = 161,
  [SMALL_STATE(29)] = 165,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 4),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 3),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 6),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 5),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 7),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 8),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_uri(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
