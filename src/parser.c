#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_DQUOTE = 2,
  aux_sym_string_token1 = 3,
  aux_sym_string_token2 = 4,
  sym_path = 5,
  anon_sym_if = 6,
  anon_sym_LOG = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_pf = 10,
  anon_sym_reset = 11,
  anon_sym_rule = 12,
  anon_sym_BANG = 13,
  sym_quantity = 14,
  sym_number = 15,
  sym_type_identifier = 16,
  sym_internal_variable = 17,
  sym_identifier = 18,
  anon_sym_LT_DASH = 19,
  anon_sym_DASH_GT = 20,
  anon_sym_EQ = 21,
  anon_sym_EQ_EQ = 22,
  anon_sym_DOT_DOT = 23,
  anon_sym_PLUS = 24,
  anon_sym_DASH = 25,
  anon_sym_TILDE = 26,
  anon_sym_COMMA = 27,
  anon_sym_DOT = 28,
  anon_sym_LBRACK = 29,
  anon_sym_RBRACK = 30,
  anon_sym_LBRACE = 31,
  anon_sym_RBRACE = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
  anon_sym_loop = 35,
  sym_source_file = 36,
  sym_string = 37,
  sym_keyword = 38,
  sym_boolean = 39,
  sym_function_call = 40,
  sym_operator = 41,
  sym_array = 42,
  sym_block = 43,
  sym_paren_expr = 44,
  sym_loop = 45,
  sym_statement = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_string_repeat1 = 48,
  aux_sym_array_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_path] = "path",
  [anon_sym_if] = "if",
  [anon_sym_LOG] = "LOG",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_pf] = "pf",
  [anon_sym_reset] = "reset",
  [anon_sym_rule] = "rule",
  [anon_sym_BANG] = "!",
  [sym_quantity] = "quantity",
  [sym_number] = "number",
  [sym_type_identifier] = "type_identifier",
  [sym_internal_variable] = "internal_variable",
  [sym_identifier] = "identifier",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "punctuation",
  [anon_sym_RBRACK] = "punctuation",
  [anon_sym_LBRACE] = "punctuation",
  [anon_sym_RBRACE] = "punctuation",
  [anon_sym_LPAREN] = "punctuation",
  [anon_sym_RPAREN] = "punctuation",
  [anon_sym_loop] = "keyword",
  [sym_source_file] = "source_file",
  [sym_string] = "string",
  [sym_keyword] = "keyword",
  [sym_boolean] = "boolean",
  [sym_function_call] = "function_call",
  [sym_operator] = "operator",
  [sym_array] = "array",
  [sym_block] = "block",
  [sym_paren_expr] = "paren_expr",
  [sym_loop] = "loop",
  [sym_statement] = "statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_path] = sym_path,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_LOG] = anon_sym_LOG,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_pf] = anon_sym_pf,
  [anon_sym_reset] = anon_sym_reset,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_quantity] = sym_quantity,
  [sym_number] = sym_number,
  [sym_type_identifier] = sym_type_identifier,
  [sym_internal_variable] = sym_internal_variable,
  [sym_identifier] = sym_identifier,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACK,
  [anon_sym_RBRACE] = anon_sym_LBRACK,
  [anon_sym_LPAREN] = anon_sym_LBRACK,
  [anon_sym_RPAREN] = anon_sym_LBRACK,
  [anon_sym_loop] = sym_keyword,
  [sym_source_file] = sym_source_file,
  [sym_string] = sym_string,
  [sym_keyword] = sym_keyword,
  [sym_boolean] = sym_boolean,
  [sym_function_call] = sym_function_call,
  [sym_operator] = sym_operator,
  [sym_array] = sym_array,
  [sym_block] = sym_block,
  [sym_paren_expr] = sym_paren_expr,
  [sym_loop] = sym_loop,
  [sym_statement] = sym_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_internal_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_operator,
  },
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
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '!', 30,
        '"', 17,
        '#', 16,
        '(', 75,
        ')', 76,
        '+', 66,
        ',', 69,
        '-', 67,
        '.', 70,
        '/', 21,
        '<', 3,
        '=', 63,
        'L', 39,
        '[', 71,
        '\\', 13,
        ']', 72,
        '_', 12,
        'f', 42,
        'i', 48,
        'l', 53,
        'p', 49,
        'r', 43,
        't', 55,
        '{', 73,
        '}', 74,
        '~', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (lookahead == ':' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LOG);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_pf);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_reset);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_quantity);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'm' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 's') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'h') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 's') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'G') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'O') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == ':') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_internal_variable);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '>') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == '/') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
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
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_path] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_LOG] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_pf] = ACTIONS(1),
    [anon_sym_reset] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_quantity] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_type_identifier] = ACTIONS(1),
    [sym_internal_variable] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_string] = STATE(18),
    [sym_keyword] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym_function_call] = STATE(18),
    [sym_operator] = STATE(18),
    [sym_array] = STATE(18),
    [sym_block] = STATE(18),
    [sym_paren_expr] = STATE(18),
    [sym_loop] = STATE(18),
    [sym_statement] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_path] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_LOG] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_pf] = ACTIONS(15),
    [anon_sym_reset] = ACTIONS(15),
    [anon_sym_rule] = ACTIONS(15),
    [sym_quantity] = ACTIONS(9),
    [sym_number] = ACTIONS(17),
    [sym_type_identifier] = ACTIONS(17),
    [sym_internal_variable] = ACTIONS(9),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LT_DASH] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_loop] = ACTIONS(29),
  },
  [2] = {
    [sym_string] = STATE(18),
    [sym_keyword] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym_function_call] = STATE(18),
    [sym_operator] = STATE(18),
    [sym_array] = STATE(18),
    [sym_block] = STATE(18),
    [sym_paren_expr] = STATE(18),
    [sym_loop] = STATE(18),
    [sym_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [sym_path] = ACTIONS(36),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_LOG] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(42),
    [anon_sym_false] = ACTIONS(42),
    [anon_sym_pf] = ACTIONS(45),
    [anon_sym_reset] = ACTIONS(45),
    [anon_sym_rule] = ACTIONS(45),
    [sym_quantity] = ACTIONS(36),
    [sym_number] = ACTIONS(48),
    [sym_type_identifier] = ACTIONS(48),
    [sym_internal_variable] = ACTIONS(36),
    [sym_identifier] = ACTIONS(48),
    [anon_sym_LT_DASH] = ACTIONS(51),
    [anon_sym_DASH_GT] = ACTIONS(51),
    [anon_sym_EQ] = ACTIONS(54),
    [anon_sym_EQ_EQ] = ACTIONS(51),
    [anon_sym_DOT_DOT] = ACTIONS(51),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_TILDE] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_RPAREN] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(66),
  },
  [3] = {
    [sym_string] = STATE(18),
    [sym_keyword] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym_function_call] = STATE(18),
    [sym_operator] = STATE(18),
    [sym_array] = STATE(18),
    [sym_block] = STATE(18),
    [sym_paren_expr] = STATE(18),
    [sym_loop] = STATE(18),
    [sym_statement] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_path] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_LOG] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_pf] = ACTIONS(15),
    [anon_sym_reset] = ACTIONS(15),
    [anon_sym_rule] = ACTIONS(15),
    [sym_quantity] = ACTIONS(9),
    [sym_number] = ACTIONS(17),
    [sym_type_identifier] = ACTIONS(17),
    [sym_internal_variable] = ACTIONS(9),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LT_DASH] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_loop] = ACTIONS(29),
  },
  [4] = {
    [sym_string] = STATE(18),
    [sym_keyword] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym_function_call] = STATE(18),
    [sym_operator] = STATE(18),
    [sym_array] = STATE(18),
    [sym_block] = STATE(18),
    [sym_paren_expr] = STATE(18),
    [sym_loop] = STATE(18),
    [sym_statement] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_path] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_LOG] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_pf] = ACTIONS(15),
    [anon_sym_reset] = ACTIONS(15),
    [anon_sym_rule] = ACTIONS(15),
    [sym_quantity] = ACTIONS(9),
    [sym_number] = ACTIONS(17),
    [sym_type_identifier] = ACTIONS(17),
    [sym_internal_variable] = ACTIONS(9),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LT_DASH] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_loop] = ACTIONS(29),
  },
  [5] = {
    [sym_string] = STATE(18),
    [sym_keyword] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym_function_call] = STATE(18),
    [sym_operator] = STATE(18),
    [sym_array] = STATE(18),
    [sym_block] = STATE(18),
    [sym_paren_expr] = STATE(18),
    [sym_loop] = STATE(18),
    [sym_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_path] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_LOG] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_pf] = ACTIONS(15),
    [anon_sym_reset] = ACTIONS(15),
    [anon_sym_rule] = ACTIONS(15),
    [sym_quantity] = ACTIONS(9),
    [sym_number] = ACTIONS(17),
    [sym_type_identifier] = ACTIONS(17),
    [sym_internal_variable] = ACTIONS(9),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LT_DASH] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_loop] = ACTIONS(29),
  },
  [6] = {
    [sym_string] = STATE(18),
    [sym_keyword] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym_function_call] = STATE(18),
    [sym_operator] = STATE(18),
    [sym_array] = STATE(18),
    [sym_block] = STATE(18),
    [sym_paren_expr] = STATE(18),
    [sym_loop] = STATE(18),
    [sym_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_path] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_LOG] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_pf] = ACTIONS(15),
    [anon_sym_reset] = ACTIONS(15),
    [anon_sym_rule] = ACTIONS(15),
    [sym_quantity] = ACTIONS(9),
    [sym_number] = ACTIONS(17),
    [sym_type_identifier] = ACTIONS(17),
    [sym_internal_variable] = ACTIONS(9),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LT_DASH] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_loop] = ACTIONS(29),
  },
  [7] = {
    [sym_string] = STATE(18),
    [sym_keyword] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym_function_call] = STATE(18),
    [sym_operator] = STATE(18),
    [sym_array] = STATE(18),
    [sym_block] = STATE(18),
    [sym_paren_expr] = STATE(18),
    [sym_loop] = STATE(18),
    [sym_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_path] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_LOG] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_pf] = ACTIONS(15),
    [anon_sym_reset] = ACTIONS(15),
    [anon_sym_rule] = ACTIONS(15),
    [sym_quantity] = ACTIONS(9),
    [sym_number] = ACTIONS(17),
    [sym_type_identifier] = ACTIONS(17),
    [sym_internal_variable] = ACTIONS(9),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LT_DASH] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_loop] = ACTIONS(29),
  },
  [8] = {
    [sym_string] = STATE(18),
    [sym_keyword] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym_function_call] = STATE(18),
    [sym_operator] = STATE(18),
    [sym_array] = STATE(18),
    [sym_block] = STATE(18),
    [sym_paren_expr] = STATE(18),
    [sym_loop] = STATE(18),
    [sym_statement] = STATE(28),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_path] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_LOG] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_pf] = ACTIONS(15),
    [anon_sym_reset] = ACTIONS(15),
    [anon_sym_rule] = ACTIONS(15),
    [sym_quantity] = ACTIONS(9),
    [sym_number] = ACTIONS(17),
    [sym_type_identifier] = ACTIONS(17),
    [sym_internal_variable] = ACTIONS(9),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LT_DASH] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_loop] = ACTIONS(29),
  },
  [9] = {
    [sym_string] = STATE(18),
    [sym_keyword] = STATE(18),
    [sym_boolean] = STATE(18),
    [sym_function_call] = STATE(18),
    [sym_operator] = STATE(18),
    [sym_array] = STATE(18),
    [sym_block] = STATE(18),
    [sym_paren_expr] = STATE(18),
    [sym_loop] = STATE(18),
    [sym_statement] = STATE(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_path] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_LOG] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_pf] = ACTIONS(15),
    [anon_sym_reset] = ACTIONS(15),
    [anon_sym_rule] = ACTIONS(15),
    [sym_quantity] = ACTIONS(9),
    [sym_number] = ACTIONS(17),
    [sym_type_identifier] = ACTIONS(17),
    [sym_internal_variable] = ACTIONS(9),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_LT_DASH] = ACTIONS(19),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_TILDE] = ACTIONS(19),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_DOT] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_loop] = ACTIONS(29),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym_path] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(83),
    [anon_sym_LOG] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(83),
    [anon_sym_false] = ACTIONS(83),
    [anon_sym_pf] = ACTIONS(83),
    [anon_sym_reset] = ACTIONS(83),
    [anon_sym_rule] = ACTIONS(83),
    [sym_quantity] = ACTIONS(81),
    [sym_number] = ACTIONS(83),
    [sym_type_identifier] = ACTIONS(83),
    [sym_internal_variable] = ACTIONS(81),
    [sym_identifier] = ACTIONS(83),
    [anon_sym_LT_DASH] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_EQ_EQ] = ACTIONS(81),
    [anon_sym_DOT_DOT] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_TILDE] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(83),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_path] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_LOG] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_false] = ACTIONS(87),
    [anon_sym_pf] = ACTIONS(87),
    [anon_sym_reset] = ACTIONS(87),
    [anon_sym_rule] = ACTIONS(87),
    [sym_quantity] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [sym_type_identifier] = ACTIONS(87),
    [sym_internal_variable] = ACTIONS(85),
    [sym_identifier] = ACTIONS(87),
    [anon_sym_LT_DASH] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_EQ_EQ] = ACTIONS(85),
    [anon_sym_DOT_DOT] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_loop] = ACTIONS(87),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [sym_path] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(91),
    [anon_sym_LOG] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [anon_sym_pf] = ACTIONS(91),
    [anon_sym_reset] = ACTIONS(91),
    [anon_sym_rule] = ACTIONS(91),
    [sym_quantity] = ACTIONS(89),
    [sym_number] = ACTIONS(91),
    [sym_type_identifier] = ACTIONS(91),
    [sym_internal_variable] = ACTIONS(89),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_LT_DASH] = ACTIONS(89),
    [anon_sym_DASH_GT] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_EQ_EQ] = ACTIONS(89),
    [anon_sym_DOT_DOT] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_loop] = ACTIONS(91),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_path] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(95),
    [anon_sym_LOG] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_pf] = ACTIONS(95),
    [anon_sym_reset] = ACTIONS(95),
    [anon_sym_rule] = ACTIONS(95),
    [sym_quantity] = ACTIONS(93),
    [sym_number] = ACTIONS(95),
    [sym_type_identifier] = ACTIONS(95),
    [sym_internal_variable] = ACTIONS(93),
    [sym_identifier] = ACTIONS(95),
    [anon_sym_LT_DASH] = ACTIONS(93),
    [anon_sym_DASH_GT] = ACTIONS(93),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_EQ_EQ] = ACTIONS(93),
    [anon_sym_DOT_DOT] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_loop] = ACTIONS(95),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [sym_path] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(99),
    [anon_sym_LOG] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(99),
    [anon_sym_pf] = ACTIONS(99),
    [anon_sym_reset] = ACTIONS(99),
    [anon_sym_rule] = ACTIONS(99),
    [sym_quantity] = ACTIONS(97),
    [sym_number] = ACTIONS(99),
    [sym_type_identifier] = ACTIONS(99),
    [sym_internal_variable] = ACTIONS(97),
    [sym_identifier] = ACTIONS(99),
    [anon_sym_LT_DASH] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_EQ_EQ] = ACTIONS(97),
    [anon_sym_DOT_DOT] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_loop] = ACTIONS(99),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_path] = ACTIONS(101),
    [anon_sym_if] = ACTIONS(103),
    [anon_sym_LOG] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(103),
    [anon_sym_pf] = ACTIONS(103),
    [anon_sym_reset] = ACTIONS(103),
    [anon_sym_rule] = ACTIONS(103),
    [sym_quantity] = ACTIONS(101),
    [sym_number] = ACTIONS(103),
    [sym_type_identifier] = ACTIONS(103),
    [sym_internal_variable] = ACTIONS(101),
    [sym_identifier] = ACTIONS(103),
    [anon_sym_LT_DASH] = ACTIONS(101),
    [anon_sym_DASH_GT] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_EQ_EQ] = ACTIONS(101),
    [anon_sym_DOT_DOT] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_loop] = ACTIONS(103),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [sym_path] = ACTIONS(105),
    [anon_sym_if] = ACTIONS(107),
    [anon_sym_LOG] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_false] = ACTIONS(107),
    [anon_sym_pf] = ACTIONS(107),
    [anon_sym_reset] = ACTIONS(107),
    [anon_sym_rule] = ACTIONS(107),
    [sym_quantity] = ACTIONS(105),
    [sym_number] = ACTIONS(107),
    [sym_type_identifier] = ACTIONS(107),
    [sym_internal_variable] = ACTIONS(105),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_LT_DASH] = ACTIONS(105),
    [anon_sym_DASH_GT] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(105),
    [anon_sym_DOT_DOT] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_loop] = ACTIONS(107),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [sym_path] = ACTIONS(109),
    [anon_sym_if] = ACTIONS(111),
    [anon_sym_LOG] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(111),
    [anon_sym_pf] = ACTIONS(111),
    [anon_sym_reset] = ACTIONS(111),
    [anon_sym_rule] = ACTIONS(111),
    [sym_quantity] = ACTIONS(109),
    [sym_number] = ACTIONS(111),
    [sym_type_identifier] = ACTIONS(111),
    [sym_internal_variable] = ACTIONS(109),
    [sym_identifier] = ACTIONS(111),
    [anon_sym_LT_DASH] = ACTIONS(109),
    [anon_sym_DASH_GT] = ACTIONS(109),
    [anon_sym_EQ] = ACTIONS(111),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_DOT_DOT] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_loop] = ACTIONS(111),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [sym_path] = ACTIONS(113),
    [anon_sym_if] = ACTIONS(115),
    [anon_sym_LOG] = ACTIONS(115),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [anon_sym_pf] = ACTIONS(115),
    [anon_sym_reset] = ACTIONS(115),
    [anon_sym_rule] = ACTIONS(115),
    [sym_quantity] = ACTIONS(113),
    [sym_number] = ACTIONS(115),
    [sym_type_identifier] = ACTIONS(115),
    [sym_internal_variable] = ACTIONS(113),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_LT_DASH] = ACTIONS(113),
    [anon_sym_DASH_GT] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_EQ_EQ] = ACTIONS(113),
    [anon_sym_DOT_DOT] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(113),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_loop] = ACTIONS(115),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [sym_path] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_LOG] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(119),
    [anon_sym_pf] = ACTIONS(119),
    [anon_sym_reset] = ACTIONS(119),
    [anon_sym_rule] = ACTIONS(119),
    [sym_quantity] = ACTIONS(117),
    [sym_number] = ACTIONS(119),
    [sym_type_identifier] = ACTIONS(119),
    [sym_internal_variable] = ACTIONS(117),
    [sym_identifier] = ACTIONS(119),
    [anon_sym_LT_DASH] = ACTIONS(117),
    [anon_sym_DASH_GT] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(119),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_DOT_DOT] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_loop] = ACTIONS(119),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(121),
    [sym_path] = ACTIONS(121),
    [anon_sym_if] = ACTIONS(123),
    [anon_sym_LOG] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(123),
    [anon_sym_false] = ACTIONS(123),
    [anon_sym_pf] = ACTIONS(123),
    [anon_sym_reset] = ACTIONS(123),
    [anon_sym_rule] = ACTIONS(123),
    [sym_quantity] = ACTIONS(121),
    [sym_number] = ACTIONS(123),
    [sym_type_identifier] = ACTIONS(123),
    [sym_internal_variable] = ACTIONS(121),
    [sym_identifier] = ACTIONS(123),
    [anon_sym_LT_DASH] = ACTIONS(121),
    [anon_sym_DASH_GT] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(123),
    [anon_sym_EQ_EQ] = ACTIONS(121),
    [anon_sym_DOT_DOT] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_loop] = ACTIONS(123),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym_path] = ACTIONS(125),
    [anon_sym_if] = ACTIONS(127),
    [anon_sym_LOG] = ACTIONS(127),
    [anon_sym_true] = ACTIONS(127),
    [anon_sym_false] = ACTIONS(127),
    [anon_sym_pf] = ACTIONS(127),
    [anon_sym_reset] = ACTIONS(127),
    [anon_sym_rule] = ACTIONS(127),
    [sym_quantity] = ACTIONS(125),
    [sym_number] = ACTIONS(127),
    [sym_type_identifier] = ACTIONS(127),
    [sym_internal_variable] = ACTIONS(125),
    [sym_identifier] = ACTIONS(127),
    [anon_sym_LT_DASH] = ACTIONS(125),
    [anon_sym_DASH_GT] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_EQ_EQ] = ACTIONS(125),
    [anon_sym_DOT_DOT] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_TILDE] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_DOT] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(125),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_loop] = ACTIONS(127),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [sym_path] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(131),
    [anon_sym_LOG] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(131),
    [anon_sym_false] = ACTIONS(131),
    [anon_sym_pf] = ACTIONS(131),
    [anon_sym_reset] = ACTIONS(131),
    [anon_sym_rule] = ACTIONS(131),
    [sym_quantity] = ACTIONS(129),
    [sym_number] = ACTIONS(131),
    [sym_type_identifier] = ACTIONS(131),
    [sym_internal_variable] = ACTIONS(129),
    [sym_identifier] = ACTIONS(131),
    [anon_sym_LT_DASH] = ACTIONS(129),
    [anon_sym_DASH_GT] = ACTIONS(129),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_EQ_EQ] = ACTIONS(129),
    [anon_sym_DOT_DOT] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_TILDE] = ACTIONS(129),
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_DOT] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_LBRACE] = ACTIONS(129),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_loop] = ACTIONS(131),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [sym_path] = ACTIONS(133),
    [anon_sym_if] = ACTIONS(135),
    [anon_sym_LOG] = ACTIONS(135),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(135),
    [anon_sym_pf] = ACTIONS(135),
    [anon_sym_reset] = ACTIONS(135),
    [anon_sym_rule] = ACTIONS(135),
    [sym_quantity] = ACTIONS(133),
    [sym_number] = ACTIONS(135),
    [sym_type_identifier] = ACTIONS(135),
    [sym_internal_variable] = ACTIONS(133),
    [sym_identifier] = ACTIONS(135),
    [anon_sym_LT_DASH] = ACTIONS(133),
    [anon_sym_DASH_GT] = ACTIONS(133),
    [anon_sym_EQ] = ACTIONS(135),
    [anon_sym_EQ_EQ] = ACTIONS(133),
    [anon_sym_DOT_DOT] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_loop] = ACTIONS(135),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(137),
    [sym_path] = ACTIONS(137),
    [anon_sym_if] = ACTIONS(139),
    [anon_sym_LOG] = ACTIONS(139),
    [anon_sym_true] = ACTIONS(139),
    [anon_sym_false] = ACTIONS(139),
    [anon_sym_pf] = ACTIONS(139),
    [anon_sym_reset] = ACTIONS(139),
    [anon_sym_rule] = ACTIONS(139),
    [sym_quantity] = ACTIONS(137),
    [sym_number] = ACTIONS(139),
    [sym_type_identifier] = ACTIONS(139),
    [sym_internal_variable] = ACTIONS(137),
    [sym_identifier] = ACTIONS(139),
    [anon_sym_LT_DASH] = ACTIONS(137),
    [anon_sym_DASH_GT] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(139),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_loop] = ACTIONS(139),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(141), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_string_repeat1,
    ACTIONS(145), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [14] = 4,
    ACTIONS(141), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym_string_repeat1,
    ACTIONS(149), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [28] = 4,
    ACTIONS(141), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      aux_sym_string_repeat1,
    ACTIONS(154), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [42] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym_array_repeat1,
  [55] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_array_repeat1,
  [68] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_array_repeat1,
  [81] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [89] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
  [99] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_number,
  [113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_BANG,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 14,
  [SMALL_STATE(27)] = 28,
  [SMALL_STATE(28)] = 42,
  [SMALL_STATE(29)] = 55,
  [SMALL_STATE(30)] = 68,
  [SMALL_STATE(31)] = 81,
  [SMALL_STATE(32)] = 89,
  [SMALL_STATE(33)] = 99,
  [SMALL_STATE(34)] = 106,
  [SMALL_STATE(35)] = 113,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 1),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_minot(void) {
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
