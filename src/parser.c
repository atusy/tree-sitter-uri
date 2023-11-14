#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
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
  aux_sym_path_token1 = 9,
  aux_sym_path_token2 = 10,
  sym_query = 11,
  sym_fragment = 12,
  sym_source_file = 13,
  sym_uri = 14,
  sym_authority = 15,
  sym_path = 16,
  aux_sym_source_file_repeat1 = 17,
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
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [sym_query] = "query",
  [sym_fragment] = "fragment",
  [sym_source_file] = "source_file",
  [sym_uri] = "uri",
  [sym_authority] = "authority",
  [sym_path] = "path",
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
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [sym_query] = sym_query,
  [sym_fragment] = sym_fragment,
  [sym_source_file] = sym_source_file,
  [sym_uri] = sym_uri,
  [sym_authority] = sym_authority,
  [sym_path] = sym_path,
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
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_token2] = {
    .visible = false,
    .named = false,
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
  [sym_uri] = {
    .visible = true,
    .named = true,
  },
  [sym_authority] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
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
  [30] = 30,
  [31] = 31,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '?') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '@') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '?') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_userinfo);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_host);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_host);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_host);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_host);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '?') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ':') ADVANCE(17);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_query);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_query);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_fragment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_fragment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 25},
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
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym_uri] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_scheme] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      anon_sym_QMARK,
    ACTIONS(11), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_scheme,
    ACTIONS(15), 1,
      aux_sym_path_token1,
    STATE(7), 1,
      sym_path,
  [19] = 3,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_COLON,
    ACTIONS(21), 4,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_scheme,
      aux_sym_path_token1,
  [32] = 3,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 4,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_scheme,
      aux_sym_path_token1,
  [45] = 2,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 4,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_scheme,
      aux_sym_path_token1,
  [55] = 2,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 4,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_scheme,
      aux_sym_path_token1,
  [65] = 3,
    ACTIONS(39), 1,
      anon_sym_QMARK,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [76] = 4,
    ACTIONS(15), 1,
      aux_sym_path_token1,
    ACTIONS(43), 1,
      anon_sym_SLASH_SLASH,
    STATE(2), 1,
      sym_authority,
    STATE(10), 1,
      sym_path,
  [89] = 3,
    ACTIONS(5), 1,
      sym_scheme,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(11), 2,
      sym_uri,
      aux_sym_source_file_repeat1,
  [100] = 3,
    ACTIONS(47), 1,
      anon_sym_QMARK,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [111] = 3,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_scheme,
    STATE(11), 2,
      sym_uri,
      aux_sym_source_file_repeat1,
  [122] = 1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_POUND,
      sym_scheme,
  [129] = 2,
    ACTIONS(60), 1,
      anon_sym_POUND,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [137] = 2,
    ACTIONS(64), 1,
      anon_sym_POUND,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [145] = 1,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [150] = 2,
    ACTIONS(66), 1,
      sym_userinfo,
    ACTIONS(68), 1,
      sym_host,
  [157] = 1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [162] = 1,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [167] = 1,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [172] = 1,
    ACTIONS(74), 1,
      sym_fragment,
  [176] = 1,
    ACTIONS(76), 1,
      anon_sym_COLON,
  [180] = 1,
    ACTIONS(78), 1,
      sym_port,
  [184] = 1,
    ACTIONS(80), 1,
      sym_query,
  [188] = 1,
    ACTIONS(82), 1,
      sym_query,
  [192] = 1,
    ACTIONS(84), 1,
      sym_fragment,
  [196] = 1,
    ACTIONS(86), 1,
      sym_port,
  [200] = 1,
    ACTIONS(88), 1,
      sym_host,
  [204] = 1,
    ACTIONS(90), 1,
      sym_fragment,
  [208] = 1,
    ACTIONS(92), 1,
      aux_sym_path_token2,
  [212] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [216] = 1,
    ACTIONS(96), 1,
      sym_fragment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 65,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 89,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 111,
  [SMALL_STATE(12)] = 122,
  [SMALL_STATE(13)] = 129,
  [SMALL_STATE(14)] = 137,
  [SMALL_STATE(15)] = 145,
  [SMALL_STATE(16)] = 150,
  [SMALL_STATE(17)] = 157,
  [SMALL_STATE(18)] = 162,
  [SMALL_STATE(19)] = 167,
  [SMALL_STATE(20)] = 172,
  [SMALL_STATE(21)] = 176,
  [SMALL_STATE(22)] = 180,
  [SMALL_STATE(23)] = 184,
  [SMALL_STATE(24)] = 188,
  [SMALL_STATE(25)] = 192,
  [SMALL_STATE(26)] = 196,
  [SMALL_STATE(27)] = 200,
  [SMALL_STATE(28)] = 204,
  [SMALL_STATE(29)] = 208,
  [SMALL_STATE(30)] = 212,
  [SMALL_STATE(31)] = 216,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uri, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authority, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authority, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 5),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authority, 5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authority, 4),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authority, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 6),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 7),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 8),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [94] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
