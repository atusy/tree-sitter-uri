#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  sym__ignore = 2,
  anon_sym_COLON = 3,
  anon_sym_QMARK = 4,
  anon_sym_POUND = 5,
  anon_sym_SLASH_SLASH = 6,
  sym_scheme = 7,
  sym_userinfo = 8,
  aux_sym_host_token1 = 9,
  aux_sym_host_token2 = 10,
  aux_sym_host_token3 = 11,
  aux_sym_host_token4 = 12,
  aux_sym_host_token5 = 13,
  sym_port = 14,
  aux_sym_path_token1 = 15,
  aux_sym_path_token2 = 16,
  sym_query = 17,
  sym_fragment = 18,
  sym_source_file = 19,
  sym__definition = 20,
  sym_uri = 21,
  sym_authority = 22,
  sym_host = 23,
  sym_path = 24,
  aux_sym_source_file_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym__ignore] = "_ignore",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK] = "\?",
  [anon_sym_POUND] = "#",
  [anon_sym_SLASH_SLASH] = "//",
  [sym_scheme] = "scheme",
  [sym_userinfo] = "userinfo",
  [aux_sym_host_token1] = "host_token1",
  [aux_sym_host_token2] = "host_token2",
  [aux_sym_host_token3] = "host_token3",
  [aux_sym_host_token4] = "host_token4",
  [aux_sym_host_token5] = "host_token5",
  [sym_port] = "port",
  [aux_sym_path_token1] = "path_token1",
  [aux_sym_path_token2] = "path_token2",
  [sym_query] = "query",
  [sym_fragment] = "fragment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_uri] = "uri",
  [sym_authority] = "authority",
  [sym_host] = "host",
  [sym_path] = "path",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym__ignore] = sym__ignore,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [sym_scheme] = sym_scheme,
  [sym_userinfo] = sym_userinfo,
  [aux_sym_host_token1] = aux_sym_host_token1,
  [aux_sym_host_token2] = aux_sym_host_token2,
  [aux_sym_host_token3] = aux_sym_host_token3,
  [aux_sym_host_token4] = aux_sym_host_token4,
  [aux_sym_host_token5] = aux_sym_host_token5,
  [sym_port] = sym_port,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [aux_sym_path_token2] = aux_sym_path_token2,
  [sym_query] = sym_query,
  [sym_fragment] = sym_fragment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_uri] = sym_uri,
  [sym_authority] = sym_authority,
  [sym_host] = sym_host,
  [sym_path] = sym_path,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym__ignore] = {
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
  [aux_sym_host_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_host_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_host_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_host_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_host_token5] = {
    .visible = false,
    .named = false,
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
  [sym_host] = {
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
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '/' || ':' < lookahead) &&
          lookahead != '@') ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '@') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == '/' ||
          lookahead == '@') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '@') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '@') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '/' || ':' < lookahead) &&
          lookahead != '@') ADVANCE(40);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__ignore);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '@') ADVANCE(33);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '@') ADVANCE(33);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_userinfo);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_host_token1);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '?') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_host_token1);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '?') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_host_token1);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_host_token1);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '@') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_host_token2);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_host_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '@') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_host_token3);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '@') ADVANCE(10);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_host_token4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '/' || ':' < lookahead) &&
          lookahead != '@') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_host_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '/' || ':' < lookahead) &&
          lookahead != '@') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_host_token4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_host_token5);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_path_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '?') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '@') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_path_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_query);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_query);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_fragment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_fragment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 50},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 52},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ignore] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [sym_scheme] = ACTIONS(1),
    [sym_port] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(34),
    [sym__definition] = STATE(32),
    [sym_uri] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__ignore] = ACTIONS(5),
    [sym_scheme] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      sym_userinfo,
    ACTIONS(13), 1,
      aux_sym_host_token1,
    ACTIONS(15), 1,
      aux_sym_host_token2,
    STATE(9), 1,
      sym_host,
    ACTIONS(9), 4,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [19] = 4,
    ACTIONS(13), 1,
      aux_sym_host_token1,
    ACTIONS(15), 1,
      aux_sym_host_token2,
    STATE(10), 1,
      sym_host,
    ACTIONS(17), 4,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [35] = 5,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym__ignore,
    ACTIONS(24), 1,
      sym_scheme,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 2,
      sym__definition,
      sym_uri,
  [52] = 5,
    ACTIONS(5), 1,
      sym__ignore,
    ACTIONS(7), 1,
      sym_scheme,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(32), 2,
      sym__definition,
      sym_uri,
  [69] = 1,
    ACTIONS(29), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [77] = 5,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      anon_sym_QMARK,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_path_token1,
    STATE(17), 1,
      sym_path,
  [93] = 1,
    ACTIONS(39), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [101] = 2,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(17), 4,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [111] = 2,
    ACTIONS(45), 1,
      anon_sym_COLON,
    ACTIONS(43), 4,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [121] = 1,
    ACTIONS(47), 4,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [128] = 4,
    ACTIONS(37), 1,
      aux_sym_path_token1,
    ACTIONS(49), 1,
      anon_sym_SLASH_SLASH,
    STATE(7), 1,
      sym_authority,
    STATE(15), 1,
      sym_path,
  [141] = 1,
    ACTIONS(51), 4,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [148] = 1,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      sym__ignore,
      sym_scheme,
  [154] = 3,
    ACTIONS(33), 1,
      anon_sym_QMARK,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      anon_sym_LF,
  [164] = 2,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(57), 2,
      anon_sym_QMARK,
      anon_sym_POUND,
  [172] = 3,
    ACTIONS(59), 1,
      anon_sym_LF,
    ACTIONS(61), 1,
      anon_sym_QMARK,
    ACTIONS(63), 1,
      anon_sym_POUND,
  [182] = 2,
    ACTIONS(65), 1,
      aux_sym_host_token4,
    ACTIONS(67), 1,
      aux_sym_host_token5,
  [189] = 2,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(71), 1,
      anon_sym_POUND,
  [196] = 2,
    ACTIONS(73), 1,
      anon_sym_LF,
    ACTIONS(75), 1,
      anon_sym_POUND,
  [203] = 1,
    ACTIONS(77), 1,
      sym_query,
  [207] = 1,
    ACTIONS(79), 1,
      sym_fragment,
  [211] = 1,
    ACTIONS(81), 1,
      sym_port,
  [215] = 1,
    ACTIONS(83), 1,
      anon_sym_COLON,
  [219] = 1,
    ACTIONS(69), 1,
      anon_sym_LF,
  [223] = 1,
    ACTIONS(85), 1,
      sym_query,
  [227] = 1,
    ACTIONS(87), 1,
      sym_fragment,
  [231] = 1,
    ACTIONS(89), 1,
      sym_port,
  [235] = 1,
    ACTIONS(91), 1,
      aux_sym_host_token3,
  [239] = 1,
    ACTIONS(93), 1,
      aux_sym_path_token2,
  [243] = 1,
    ACTIONS(95), 1,
      sym_fragment,
  [247] = 1,
    ACTIONS(97), 1,
      anon_sym_LF,
  [251] = 1,
    ACTIONS(73), 1,
      anon_sym_LF,
  [255] = 1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
  [259] = 1,
    ACTIONS(101), 1,
      anon_sym_LF,
  [263] = 1,
    ACTIONS(103), 1,
      sym_fragment,
  [267] = 1,
    ACTIONS(105), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 35,
  [SMALL_STATE(5)] = 52,
  [SMALL_STATE(6)] = 69,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 93,
  [SMALL_STATE(9)] = 101,
  [SMALL_STATE(10)] = 111,
  [SMALL_STATE(11)] = 121,
  [SMALL_STATE(12)] = 128,
  [SMALL_STATE(13)] = 141,
  [SMALL_STATE(14)] = 148,
  [SMALL_STATE(15)] = 154,
  [SMALL_STATE(16)] = 164,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 182,
  [SMALL_STATE(19)] = 189,
  [SMALL_STATE(20)] = 196,
  [SMALL_STATE(21)] = 203,
  [SMALL_STATE(22)] = 207,
  [SMALL_STATE(23)] = 211,
  [SMALL_STATE(24)] = 215,
  [SMALL_STATE(25)] = 219,
  [SMALL_STATE(26)] = 223,
  [SMALL_STATE(27)] = 227,
  [SMALL_STATE(28)] = 231,
  [SMALL_STATE(29)] = 235,
  [SMALL_STATE(30)] = 239,
  [SMALL_STATE(31)] = 243,
  [SMALL_STATE(32)] = 247,
  [SMALL_STATE(33)] = 251,
  [SMALL_STATE(34)] = 255,
  [SMALL_STATE(35)] = 259,
  [SMALL_STATE(36)] = 263,
  [SMALL_STATE(37)] = 267,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authority, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authority, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uri, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authority, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authority, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authority, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 5),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 6),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [99] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 7),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 8),
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
