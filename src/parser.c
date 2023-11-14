#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_COLON = 2,
  anon_sym_QMARK = 3,
  anon_sym_POUND = 4,
  anon_sym_SLASH_SLASH = 5,
  sym_scheme = 6,
  sym_userinfo = 7,
  aux_sym_host_token1 = 8,
  aux_sym_host_token2 = 9,
  aux_sym_host_token3 = 10,
  aux_sym_host_token4 = 11,
  sym_port = 12,
  aux_sym_path_token1 = 13,
  sym_query = 14,
  sym_fragment = 15,
  sym_source_file = 16,
  sym__definition = 17,
  sym_uri = 18,
  sym_authority = 19,
  sym_host = 20,
  sym_path = 21,
  aux_sym_source_file_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
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
  [sym_port] = "port",
  [aux_sym_path_token1] = "path_token1",
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
  [sym_port] = sym_port,
  [aux_sym_path_token1] = aux_sym_path_token1,
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
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_path_token1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '?') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '/' || ':' < lookahead) &&
          lookahead != '@') ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '@') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '@') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '/' || ':' < lookahead) &&
          lookahead != '@') ADVANCE(39);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(4);
      if (lookahead == '/' ||
          lookahead == '@') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(50);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(33);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(33);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(50);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_userinfo);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_userinfo);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(50);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_host_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_host_token1);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '#') ADVANCE(22);
      if (lookahead == '?') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_host_token1);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(31);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_host_token1);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_host_token1);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(33);
      if (lookahead == '/' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_host_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_host_token2);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(4);
      if (lookahead == '/' ||
          lookahead == '@') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_host_token2);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != '@') ADVANCE(4);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_host_token3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '/' || ':' < lookahead) &&
          lookahead != '@') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_host_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '/' || ':' < lookahead) &&
          lookahead != '@') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_host_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/' &&
          lookahead != ':' &&
          lookahead != '@') ADVANCE(38);
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
      ACCEPT_TOKEN(sym_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(30);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '/' ||
          lookahead == '@') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '/' ||
          lookahead == ':' ||
          lookahead == '@') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(32);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(4);
      if (lookahead == '/' ||
          lookahead == '@') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '#' ||
          lookahead == '?') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '?') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_query);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_query);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_fragment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_fragment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 45},
  [4] = {.lex_state = 42},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 44},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 44},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 44},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 51},
  [22] = {.lex_state = 53},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 51},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 53},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 53},
  [35] = {.lex_state = 1},
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
    [sym_source_file] = STATE(23),
    [sym__definition] = STATE(30),
    [sym_uri] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_scheme] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      sym_userinfo,
    ACTIONS(11), 1,
      aux_sym_host_token1,
    STATE(10), 1,
      sym_host,
    ACTIONS(7), 4,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [16] = 3,
    ACTIONS(11), 1,
      aux_sym_host_token1,
    STATE(6), 1,
      sym_host,
    ACTIONS(13), 4,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [29] = 2,
    ACTIONS(17), 1,
      aux_sym_host_token2,
    ACTIONS(15), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [40] = 1,
    ACTIONS(19), 5,
      anon_sym_LF,
      anon_sym_COLON,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [48] = 2,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(21), 4,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [58] = 4,
    ACTIONS(5), 1,
      sym_scheme,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 2,
      sym__definition,
      sym_uri,
  [72] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_scheme,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 2,
      sym__definition,
      sym_uri,
  [86] = 5,
    ACTIONS(32), 1,
      anon_sym_LF,
    ACTIONS(34), 1,
      anon_sym_QMARK,
    ACTIONS(36), 1,
      anon_sym_POUND,
    ACTIONS(38), 1,
      aux_sym_path_token1,
    STATE(16), 1,
      sym_path,
  [102] = 2,
    ACTIONS(40), 1,
      anon_sym_COLON,
    ACTIONS(13), 4,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [112] = 1,
    ACTIONS(42), 4,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [119] = 4,
    ACTIONS(38), 1,
      aux_sym_path_token1,
    ACTIONS(44), 1,
      anon_sym_SLASH_SLASH,
    STATE(9), 1,
      sym_authority,
    STATE(15), 1,
      sym_path,
  [132] = 1,
    ACTIONS(46), 4,
      anon_sym_LF,
      anon_sym_QMARK,
      anon_sym_POUND,
      aux_sym_path_token1,
  [139] = 2,
    ACTIONS(48), 1,
      anon_sym_LF,
    ACTIONS(50), 2,
      anon_sym_QMARK,
      anon_sym_POUND,
  [147] = 3,
    ACTIONS(34), 1,
      anon_sym_QMARK,
    ACTIONS(36), 1,
      anon_sym_POUND,
    ACTIONS(52), 1,
      anon_sym_LF,
  [157] = 3,
    ACTIONS(54), 1,
      anon_sym_LF,
    ACTIONS(56), 1,
      anon_sym_QMARK,
    ACTIONS(58), 1,
      anon_sym_POUND,
  [167] = 2,
    ACTIONS(60), 1,
      aux_sym_host_token3,
    ACTIONS(62), 1,
      aux_sym_host_token4,
  [174] = 2,
    ACTIONS(64), 1,
      anon_sym_LF,
    ACTIONS(66), 1,
      anon_sym_POUND,
  [181] = 2,
    ACTIONS(68), 1,
      anon_sym_LF,
    ACTIONS(70), 1,
      anon_sym_POUND,
  [188] = 1,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym_scheme,
  [193] = 1,
    ACTIONS(72), 1,
      sym_query,
  [197] = 1,
    ACTIONS(74), 1,
      sym_fragment,
  [201] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [205] = 1,
    ACTIONS(78), 1,
      sym_port,
  [209] = 1,
    ACTIONS(64), 1,
      anon_sym_LF,
  [213] = 1,
    ACTIONS(80), 1,
      sym_query,
  [217] = 1,
    ACTIONS(82), 1,
      sym_fragment,
  [221] = 1,
    ACTIONS(84), 1,
      sym_port,
  [225] = 1,
    ACTIONS(86), 1,
      anon_sym_COLON,
  [229] = 1,
    ACTIONS(88), 1,
      anon_sym_LF,
  [233] = 1,
    ACTIONS(90), 1,
      sym_fragment,
  [237] = 1,
    ACTIONS(68), 1,
      anon_sym_LF,
  [241] = 1,
    ACTIONS(92), 1,
      anon_sym_LF,
  [245] = 1,
    ACTIONS(94), 1,
      sym_fragment,
  [249] = 1,
    ACTIONS(96), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 29,
  [SMALL_STATE(5)] = 40,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 58,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 119,
  [SMALL_STATE(13)] = 132,
  [SMALL_STATE(14)] = 139,
  [SMALL_STATE(15)] = 147,
  [SMALL_STATE(16)] = 157,
  [SMALL_STATE(17)] = 167,
  [SMALL_STATE(18)] = 174,
  [SMALL_STATE(19)] = 181,
  [SMALL_STATE(20)] = 188,
  [SMALL_STATE(21)] = 193,
  [SMALL_STATE(22)] = 197,
  [SMALL_STATE(23)] = 201,
  [SMALL_STATE(24)] = 205,
  [SMALL_STATE(25)] = 209,
  [SMALL_STATE(26)] = 213,
  [SMALL_STATE(27)] = 217,
  [SMALL_STATE(28)] = 221,
  [SMALL_STATE(29)] = 225,
  [SMALL_STATE(30)] = 229,
  [SMALL_STATE(31)] = 233,
  [SMALL_STATE(32)] = 237,
  [SMALL_STATE(33)] = 241,
  [SMALL_STATE(34)] = 245,
  [SMALL_STATE(35)] = 249,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authority, 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authority, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_host, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authority, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uri, 3),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authority, 5),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authority, 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 4),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 5),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 6),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 7),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uri, 8),
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
