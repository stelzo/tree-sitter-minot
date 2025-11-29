#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 37
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 4
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 12

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
  anon_sym_DOT = 19,
  anon_sym_LT_DASH = 20,
  anon_sym_DASH_GT = 21,
  anon_sym_EQ = 22,
  anon_sym_EQ_EQ = 23,
  anon_sym_DOT_DOT = 24,
  anon_sym_PLUS = 25,
  anon_sym_DASH = 26,
  anon_sym_TILDE = 27,
  anon_sym_COMMA = 28,
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
  sym_variable_path = 41,
  sym_operator = 42,
  sym_array = 43,
  sym_block = 44,
  sym_paren_expr = 45,
  sym_loop = 46,
  sym_namespace_block = 47,
  sym_statement = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_string_repeat1 = 50,
  aux_sym_variable_path_repeat1 = 51,
  aux_sym_array_repeat1 = 52,
  alias_sym_namespace_segment_identifier = 53,
  alias_sym_namespace_segment_internal = 54,
  alias_sym_path_last_identifier = 55,
  alias_sym_path_last_internal = 56,
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
  [anon_sym_DOT] = ".",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_COMMA] = ",",
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
  [sym_variable_path] = "variable_path",
  [sym_operator] = "operator",
  [sym_array] = "array",
  [sym_block] = "block",
  [sym_paren_expr] = "paren_expr",
  [sym_loop] = "loop",
  [sym_namespace_block] = "namespace_block",
  [sym_statement] = "statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_variable_path_repeat1] = "variable_path_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [alias_sym_namespace_segment_identifier] = "namespace_segment_identifier",
  [alias_sym_namespace_segment_internal] = "namespace_segment_internal",
  [alias_sym_path_last_identifier] = "path_last_identifier",
  [alias_sym_path_last_internal] = "path_last_internal",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_variable_path] = sym_variable_path,
  [sym_operator] = sym_operator,
  [sym_array] = sym_array,
  [sym_block] = sym_block,
  [sym_paren_expr] = sym_paren_expr,
  [sym_loop] = sym_loop,
  [sym_namespace_block] = sym_namespace_block,
  [sym_statement] = sym_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_variable_path_repeat1] = aux_sym_variable_path_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [alias_sym_namespace_segment_identifier] = alias_sym_namespace_segment_identifier,
  [alias_sym_namespace_segment_internal] = alias_sym_namespace_segment_internal,
  [alias_sym_path_last_identifier] = alias_sym_path_last_identifier,
  [alias_sym_path_last_internal] = alias_sym_path_last_internal,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [sym_variable_path] = {
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
  [sym_namespace_block] = {
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
  [aux_sym_variable_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_namespace_segment_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_segment_internal] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_path_last_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_path_last_internal] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_namespace_segment_internal,
  },
  [2] = {
    [0] = alias_sym_namespace_segment_internal,
    [2] = alias_sym_path_last_internal,
  },
  [3] = {
    [1] = alias_sym_namespace_segment_identifier,
  },
  [4] = {
    [0] = alias_sym_namespace_segment_internal,
    [2] = alias_sym_path_last_identifier,
  },
  [5] = {
    [0] = alias_sym_namespace_segment_identifier,
    [2] = alias_sym_path_last_internal,
  },
  [6] = {
    [0] = alias_sym_namespace_segment_identifier,
    [2] = alias_sym_path_last_identifier,
  },
  [7] = {
    [0] = alias_sym_namespace_segment_internal,
    [3] = alias_sym_path_last_internal,
  },
  [8] = {
    [0] = alias_sym_namespace_segment_internal,
    [3] = alias_sym_path_last_identifier,
  },
  [9] = {
    [0] = alias_sym_namespace_segment_identifier,
    [3] = alias_sym_path_last_internal,
  },
  [10] = {
    [0] = alias_sym_namespace_segment_identifier,
    [3] = alias_sym_path_last_identifier,
  },
  [11] = {
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
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 41,
  [42] = 11,
  [43] = 43,
  [44] = 10,
  [45] = 40,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 33,
  [50] = 30,
  [51] = 31,
  [52] = 28,
  [53] = 32,
  [54] = 34,
  [55] = 35,
  [56] = 36,
  [57] = 29,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 65,
  [68] = 60,
  [69] = 64,
  [70] = 66,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '!', 31,
        '"', 18,
        '#', 17,
        '(', 77,
        ')', 78,
        '+', 69,
        ',', 72,
        '-', 70,
        '.', 63,
        '/', 22,
        '<', 4,
        '=', 66,
        'L', 40,
        '[', 73,
        '\\', 14,
        ']', 74,
        '_', 13,
        'f', 43,
        'i', 49,
        'l', 54,
        'p', 50,
        'r', 44,
        't', 56,
        '{', 75,
        '}', 76,
        '~', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead == ':' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == ']') ADVANCE(74);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == '{') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(17);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LOG);
      if (lookahead == ':') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_pf);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_reset);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_quantity);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'm' ||
          lookahead == 's') ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_quantity);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 's') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 's') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == 'G') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == 'O') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_type_identifier);
      if (lookahead == ':') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_internal_variable);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == '/') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '>') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
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
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(75),
    [sym_string] = STATE(15),
    [sym_keyword] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_function_call] = STATE(15),
    [sym_variable_path] = STATE(33),
    [sym_operator] = STATE(15),
    [sym_array] = STATE(15),
    [sym_block] = STATE(15),
    [sym_paren_expr] = STATE(15),
    [sym_loop] = STATE(15),
    [sym_namespace_block] = STATE(15),
    [sym_statement] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    [sym_internal_variable] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_LT_DASH] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
  },
  [2] = {
    [sym_string] = STATE(15),
    [sym_keyword] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_function_call] = STATE(15),
    [sym_variable_path] = STATE(33),
    [sym_operator] = STATE(15),
    [sym_array] = STATE(15),
    [sym_block] = STATE(15),
    [sym_paren_expr] = STATE(15),
    [sym_loop] = STATE(15),
    [sym_namespace_block] = STATE(15),
    [sym_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_path] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(43),
    [anon_sym_LOG] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(46),
    [anon_sym_false] = ACTIONS(46),
    [anon_sym_pf] = ACTIONS(49),
    [anon_sym_reset] = ACTIONS(49),
    [anon_sym_rule] = ACTIONS(49),
    [sym_quantity] = ACTIONS(40),
    [sym_number] = ACTIONS(52),
    [sym_type_identifier] = ACTIONS(52),
    [sym_internal_variable] = ACTIONS(55),
    [sym_identifier] = ACTIONS(58),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_LT_DASH] = ACTIONS(64),
    [anon_sym_DASH_GT] = ACTIONS(64),
    [anon_sym_EQ] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(64),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_loop] = ACTIONS(76),
  },
  [3] = {
    [sym_string] = STATE(15),
    [sym_keyword] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_function_call] = STATE(15),
    [sym_variable_path] = STATE(33),
    [sym_operator] = STATE(15),
    [sym_array] = STATE(15),
    [sym_block] = STATE(15),
    [sym_paren_expr] = STATE(15),
    [sym_loop] = STATE(15),
    [sym_namespace_block] = STATE(15),
    [sym_statement] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(79),
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
    [sym_internal_variable] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_LT_DASH] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
  },
  [4] = {
    [sym_string] = STATE(15),
    [sym_keyword] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_function_call] = STATE(15),
    [sym_variable_path] = STATE(33),
    [sym_operator] = STATE(15),
    [sym_array] = STATE(15),
    [sym_block] = STATE(15),
    [sym_paren_expr] = STATE(15),
    [sym_loop] = STATE(15),
    [sym_namespace_block] = STATE(15),
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
    [sym_internal_variable] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_LT_DASH] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_loop] = ACTIONS(33),
  },
  [5] = {
    [sym_string] = STATE(15),
    [sym_keyword] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_function_call] = STATE(15),
    [sym_variable_path] = STATE(33),
    [sym_operator] = STATE(15),
    [sym_array] = STATE(15),
    [sym_block] = STATE(15),
    [sym_paren_expr] = STATE(15),
    [sym_loop] = STATE(15),
    [sym_namespace_block] = STATE(15),
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
    [sym_internal_variable] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_LT_DASH] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
  },
  [6] = {
    [sym_string] = STATE(15),
    [sym_keyword] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_function_call] = STATE(15),
    [sym_variable_path] = STATE(33),
    [sym_operator] = STATE(15),
    [sym_array] = STATE(15),
    [sym_block] = STATE(15),
    [sym_paren_expr] = STATE(15),
    [sym_loop] = STATE(15),
    [sym_namespace_block] = STATE(15),
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
    [sym_internal_variable] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_LT_DASH] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
  },
  [7] = {
    [sym_string] = STATE(15),
    [sym_keyword] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_function_call] = STATE(15),
    [sym_variable_path] = STATE(33),
    [sym_operator] = STATE(15),
    [sym_array] = STATE(15),
    [sym_block] = STATE(15),
    [sym_paren_expr] = STATE(15),
    [sym_loop] = STATE(15),
    [sym_namespace_block] = STATE(15),
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
    [sym_internal_variable] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_LT_DASH] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_loop] = ACTIONS(33),
  },
  [8] = {
    [sym_string] = STATE(15),
    [sym_keyword] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_function_call] = STATE(15),
    [sym_variable_path] = STATE(49),
    [sym_operator] = STATE(15),
    [sym_array] = STATE(15),
    [sym_block] = STATE(15),
    [sym_paren_expr] = STATE(15),
    [sym_loop] = STATE(15),
    [sym_namespace_block] = STATE(15),
    [sym_statement] = STATE(48),
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
    [sym_internal_variable] = ACTIONS(89),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_LT_DASH] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
  },
  [9] = {
    [sym_string] = STATE(15),
    [sym_keyword] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_function_call] = STATE(15),
    [sym_variable_path] = STATE(49),
    [sym_operator] = STATE(15),
    [sym_array] = STATE(15),
    [sym_block] = STATE(15),
    [sym_paren_expr] = STATE(15),
    [sym_loop] = STATE(15),
    [sym_namespace_block] = STATE(15),
    [sym_statement] = STATE(58),
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
    [sym_internal_variable] = ACTIONS(89),
    [sym_identifier] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_LT_DASH] = ACTIONS(25),
    [anon_sym_DASH_GT] = ACTIONS(25),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_DOT_DOT] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_loop] = ACTIONS(33),
  },
  [10] = {
    [aux_sym_variable_path_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_path] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LOG] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_pf] = ACTIONS(97),
    [anon_sym_reset] = ACTIONS(97),
    [anon_sym_rule] = ACTIONS(97),
    [sym_quantity] = ACTIONS(95),
    [sym_number] = ACTIONS(97),
    [sym_type_identifier] = ACTIONS(97),
    [sym_internal_variable] = ACTIONS(95),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(99),
    [anon_sym_LT_DASH] = ACTIONS(95),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_DOT_DOT] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_loop] = ACTIONS(97),
  },
  [11] = {
    [aux_sym_variable_path_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_path] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LOG] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_pf] = ACTIONS(97),
    [anon_sym_reset] = ACTIONS(97),
    [anon_sym_rule] = ACTIONS(97),
    [sym_quantity] = ACTIONS(95),
    [sym_number] = ACTIONS(97),
    [sym_type_identifier] = ACTIONS(97),
    [sym_internal_variable] = ACTIONS(95),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(101),
    [anon_sym_LT_DASH] = ACTIONS(95),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_DOT_DOT] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_loop] = ACTIONS(97),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [sym_path] = ACTIONS(103),
    [anon_sym_if] = ACTIONS(105),
    [anon_sym_LOG] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [anon_sym_pf] = ACTIONS(105),
    [anon_sym_reset] = ACTIONS(105),
    [anon_sym_rule] = ACTIONS(105),
    [sym_quantity] = ACTIONS(103),
    [sym_number] = ACTIONS(105),
    [sym_type_identifier] = ACTIONS(105),
    [sym_internal_variable] = ACTIONS(103),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_LT_DASH] = ACTIONS(103),
    [anon_sym_DASH_GT] = ACTIONS(103),
    [anon_sym_EQ] = ACTIONS(105),
    [anon_sym_EQ_EQ] = ACTIONS(103),
    [anon_sym_DOT_DOT] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_loop] = ACTIONS(105),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [sym_path] = ACTIONS(107),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_LOG] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [anon_sym_pf] = ACTIONS(109),
    [anon_sym_reset] = ACTIONS(109),
    [anon_sym_rule] = ACTIONS(109),
    [sym_quantity] = ACTIONS(107),
    [sym_number] = ACTIONS(109),
    [sym_type_identifier] = ACTIONS(109),
    [sym_internal_variable] = ACTIONS(107),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_LT_DASH] = ACTIONS(107),
    [anon_sym_DASH_GT] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_EQ_EQ] = ACTIONS(107),
    [anon_sym_DOT_DOT] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_loop] = ACTIONS(109),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [sym_path] = ACTIONS(111),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_LOG] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [anon_sym_pf] = ACTIONS(113),
    [anon_sym_reset] = ACTIONS(113),
    [anon_sym_rule] = ACTIONS(113),
    [sym_quantity] = ACTIONS(111),
    [sym_number] = ACTIONS(113),
    [sym_type_identifier] = ACTIONS(113),
    [sym_internal_variable] = ACTIONS(111),
    [sym_identifier] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [anon_sym_LT_DASH] = ACTIONS(111),
    [anon_sym_DASH_GT] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_EQ_EQ] = ACTIONS(111),
    [anon_sym_DOT_DOT] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_loop] = ACTIONS(113),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_path] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LOG] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_pf] = ACTIONS(97),
    [anon_sym_reset] = ACTIONS(97),
    [anon_sym_rule] = ACTIONS(97),
    [sym_quantity] = ACTIONS(95),
    [sym_number] = ACTIONS(97),
    [sym_type_identifier] = ACTIONS(97),
    [sym_internal_variable] = ACTIONS(95),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
    [anon_sym_LT_DASH] = ACTIONS(95),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_DOT_DOT] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_loop] = ACTIONS(97),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [sym_path] = ACTIONS(115),
    [anon_sym_if] = ACTIONS(117),
    [anon_sym_LOG] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_false] = ACTIONS(117),
    [anon_sym_pf] = ACTIONS(117),
    [anon_sym_reset] = ACTIONS(117),
    [anon_sym_rule] = ACTIONS(117),
    [sym_quantity] = ACTIONS(115),
    [sym_number] = ACTIONS(117),
    [sym_type_identifier] = ACTIONS(117),
    [sym_internal_variable] = ACTIONS(115),
    [sym_identifier] = ACTIONS(117),
    [anon_sym_DOT] = ACTIONS(117),
    [anon_sym_LT_DASH] = ACTIONS(115),
    [anon_sym_DASH_GT] = ACTIONS(115),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(115),
    [anon_sym_DOT_DOT] = ACTIONS(115),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_loop] = ACTIONS(117),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [sym_path] = ACTIONS(119),
    [anon_sym_if] = ACTIONS(121),
    [anon_sym_LOG] = ACTIONS(121),
    [anon_sym_true] = ACTIONS(121),
    [anon_sym_false] = ACTIONS(121),
    [anon_sym_pf] = ACTIONS(121),
    [anon_sym_reset] = ACTIONS(121),
    [anon_sym_rule] = ACTIONS(121),
    [sym_quantity] = ACTIONS(119),
    [sym_number] = ACTIONS(121),
    [sym_type_identifier] = ACTIONS(121),
    [sym_internal_variable] = ACTIONS(119),
    [sym_identifier] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_LT_DASH] = ACTIONS(119),
    [anon_sym_DASH_GT] = ACTIONS(119),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_EQ_EQ] = ACTIONS(119),
    [anon_sym_DOT_DOT] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_TILDE] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_loop] = ACTIONS(121),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [sym_path] = ACTIONS(123),
    [anon_sym_if] = ACTIONS(125),
    [anon_sym_LOG] = ACTIONS(125),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(125),
    [anon_sym_pf] = ACTIONS(125),
    [anon_sym_reset] = ACTIONS(125),
    [anon_sym_rule] = ACTIONS(125),
    [sym_quantity] = ACTIONS(123),
    [sym_number] = ACTIONS(125),
    [sym_type_identifier] = ACTIONS(125),
    [sym_internal_variable] = ACTIONS(123),
    [sym_identifier] = ACTIONS(125),
    [anon_sym_DOT] = ACTIONS(125),
    [anon_sym_LT_DASH] = ACTIONS(123),
    [anon_sym_DASH_GT] = ACTIONS(123),
    [anon_sym_EQ] = ACTIONS(125),
    [anon_sym_EQ_EQ] = ACTIONS(123),
    [anon_sym_DOT_DOT] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_TILDE] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_loop] = ACTIONS(125),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym_path] = ACTIONS(127),
    [anon_sym_if] = ACTIONS(129),
    [anon_sym_LOG] = ACTIONS(129),
    [anon_sym_true] = ACTIONS(129),
    [anon_sym_false] = ACTIONS(129),
    [anon_sym_pf] = ACTIONS(129),
    [anon_sym_reset] = ACTIONS(129),
    [anon_sym_rule] = ACTIONS(129),
    [sym_quantity] = ACTIONS(127),
    [sym_number] = ACTIONS(129),
    [sym_type_identifier] = ACTIONS(129),
    [sym_internal_variable] = ACTIONS(127),
    [sym_identifier] = ACTIONS(129),
    [anon_sym_DOT] = ACTIONS(129),
    [anon_sym_LT_DASH] = ACTIONS(127),
    [anon_sym_DASH_GT] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(129),
    [anon_sym_EQ_EQ] = ACTIONS(127),
    [anon_sym_DOT_DOT] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_loop] = ACTIONS(129),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(131),
    [sym_path] = ACTIONS(131),
    [anon_sym_if] = ACTIONS(133),
    [anon_sym_LOG] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(133),
    [anon_sym_pf] = ACTIONS(133),
    [anon_sym_reset] = ACTIONS(133),
    [anon_sym_rule] = ACTIONS(133),
    [sym_quantity] = ACTIONS(131),
    [sym_number] = ACTIONS(133),
    [sym_type_identifier] = ACTIONS(133),
    [sym_internal_variable] = ACTIONS(131),
    [sym_identifier] = ACTIONS(133),
    [anon_sym_DOT] = ACTIONS(133),
    [anon_sym_LT_DASH] = ACTIONS(131),
    [anon_sym_DASH_GT] = ACTIONS(131),
    [anon_sym_EQ] = ACTIONS(133),
    [anon_sym_EQ_EQ] = ACTIONS(131),
    [anon_sym_DOT_DOT] = ACTIONS(131),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_loop] = ACTIONS(133),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [sym_path] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_LOG] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(137),
    [anon_sym_false] = ACTIONS(137),
    [anon_sym_pf] = ACTIONS(137),
    [anon_sym_reset] = ACTIONS(137),
    [anon_sym_rule] = ACTIONS(137),
    [sym_quantity] = ACTIONS(135),
    [sym_number] = ACTIONS(137),
    [sym_type_identifier] = ACTIONS(137),
    [sym_internal_variable] = ACTIONS(135),
    [sym_identifier] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(137),
    [anon_sym_LT_DASH] = ACTIONS(135),
    [anon_sym_DASH_GT] = ACTIONS(135),
    [anon_sym_EQ] = ACTIONS(137),
    [anon_sym_EQ_EQ] = ACTIONS(135),
    [anon_sym_DOT_DOT] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_TILDE] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(135),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_loop] = ACTIONS(137),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [sym_path] = ACTIONS(139),
    [anon_sym_if] = ACTIONS(141),
    [anon_sym_LOG] = ACTIONS(141),
    [anon_sym_true] = ACTIONS(141),
    [anon_sym_false] = ACTIONS(141),
    [anon_sym_pf] = ACTIONS(141),
    [anon_sym_reset] = ACTIONS(141),
    [anon_sym_rule] = ACTIONS(141),
    [sym_quantity] = ACTIONS(139),
    [sym_number] = ACTIONS(141),
    [sym_type_identifier] = ACTIONS(141),
    [sym_internal_variable] = ACTIONS(139),
    [sym_identifier] = ACTIONS(141),
    [anon_sym_DOT] = ACTIONS(141),
    [anon_sym_LT_DASH] = ACTIONS(139),
    [anon_sym_DASH_GT] = ACTIONS(139),
    [anon_sym_EQ] = ACTIONS(141),
    [anon_sym_EQ_EQ] = ACTIONS(139),
    [anon_sym_DOT_DOT] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_loop] = ACTIONS(141),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(143),
    [sym_path] = ACTIONS(143),
    [anon_sym_if] = ACTIONS(145),
    [anon_sym_LOG] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(145),
    [anon_sym_false] = ACTIONS(145),
    [anon_sym_pf] = ACTIONS(145),
    [anon_sym_reset] = ACTIONS(145),
    [anon_sym_rule] = ACTIONS(145),
    [sym_quantity] = ACTIONS(143),
    [sym_number] = ACTIONS(145),
    [sym_type_identifier] = ACTIONS(145),
    [sym_internal_variable] = ACTIONS(143),
    [sym_identifier] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(145),
    [anon_sym_LT_DASH] = ACTIONS(143),
    [anon_sym_DASH_GT] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(143),
    [anon_sym_DOT_DOT] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(143),
    [anon_sym_RBRACK] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(143),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_loop] = ACTIONS(145),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(147),
    [sym_path] = ACTIONS(147),
    [anon_sym_if] = ACTIONS(149),
    [anon_sym_LOG] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(149),
    [anon_sym_false] = ACTIONS(149),
    [anon_sym_pf] = ACTIONS(149),
    [anon_sym_reset] = ACTIONS(149),
    [anon_sym_rule] = ACTIONS(149),
    [sym_quantity] = ACTIONS(147),
    [sym_number] = ACTIONS(149),
    [sym_type_identifier] = ACTIONS(149),
    [sym_internal_variable] = ACTIONS(147),
    [sym_identifier] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_LT_DASH] = ACTIONS(147),
    [anon_sym_DASH_GT] = ACTIONS(147),
    [anon_sym_EQ] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(147),
    [anon_sym_DOT_DOT] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_COMMA] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(147),
    [anon_sym_RBRACE] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(147),
    [anon_sym_loop] = ACTIONS(149),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(151),
    [sym_path] = ACTIONS(151),
    [anon_sym_if] = ACTIONS(153),
    [anon_sym_LOG] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(153),
    [anon_sym_pf] = ACTIONS(153),
    [anon_sym_reset] = ACTIONS(153),
    [anon_sym_rule] = ACTIONS(153),
    [sym_quantity] = ACTIONS(151),
    [sym_number] = ACTIONS(153),
    [sym_type_identifier] = ACTIONS(153),
    [sym_internal_variable] = ACTIONS(151),
    [sym_identifier] = ACTIONS(153),
    [anon_sym_DOT] = ACTIONS(153),
    [anon_sym_LT_DASH] = ACTIONS(151),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_EQ] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(151),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [anon_sym_TILDE] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_loop] = ACTIONS(153),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [sym_path] = ACTIONS(155),
    [anon_sym_if] = ACTIONS(157),
    [anon_sym_LOG] = ACTIONS(157),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(157),
    [anon_sym_pf] = ACTIONS(157),
    [anon_sym_reset] = ACTIONS(157),
    [anon_sym_rule] = ACTIONS(157),
    [sym_quantity] = ACTIONS(155),
    [sym_number] = ACTIONS(157),
    [sym_type_identifier] = ACTIONS(157),
    [sym_internal_variable] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(157),
    [anon_sym_LT_DASH] = ACTIONS(155),
    [anon_sym_DASH_GT] = ACTIONS(155),
    [anon_sym_EQ] = ACTIONS(157),
    [anon_sym_EQ_EQ] = ACTIONS(155),
    [anon_sym_DOT_DOT] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_TILDE] = ACTIONS(155),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_loop] = ACTIONS(157),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym_path] = ACTIONS(159),
    [anon_sym_if] = ACTIONS(161),
    [anon_sym_LOG] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(161),
    [anon_sym_pf] = ACTIONS(161),
    [anon_sym_reset] = ACTIONS(161),
    [anon_sym_rule] = ACTIONS(161),
    [sym_quantity] = ACTIONS(159),
    [sym_number] = ACTIONS(161),
    [sym_type_identifier] = ACTIONS(161),
    [sym_internal_variable] = ACTIONS(159),
    [sym_identifier] = ACTIONS(161),
    [anon_sym_DOT] = ACTIONS(161),
    [anon_sym_LT_DASH] = ACTIONS(159),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_EQ] = ACTIONS(161),
    [anon_sym_EQ_EQ] = ACTIONS(159),
    [anon_sym_DOT_DOT] = ACTIONS(159),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [anon_sym_TILDE] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_LPAREN] = ACTIONS(159),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_loop] = ACTIONS(161),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_path] = ACTIONS(163),
    [anon_sym_if] = ACTIONS(165),
    [anon_sym_LOG] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_false] = ACTIONS(165),
    [anon_sym_pf] = ACTIONS(165),
    [anon_sym_reset] = ACTIONS(165),
    [anon_sym_rule] = ACTIONS(165),
    [sym_quantity] = ACTIONS(163),
    [sym_number] = ACTIONS(165),
    [sym_type_identifier] = ACTIONS(165),
    [sym_internal_variable] = ACTIONS(163),
    [sym_identifier] = ACTIONS(165),
    [anon_sym_DOT] = ACTIONS(167),
    [anon_sym_LT_DASH] = ACTIONS(163),
    [anon_sym_DASH_GT] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_EQ_EQ] = ACTIONS(163),
    [anon_sym_DOT_DOT] = ACTIONS(163),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LBRACE] = ACTIONS(163),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_loop] = ACTIONS(165),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [sym_path] = ACTIONS(170),
    [anon_sym_if] = ACTIONS(172),
    [anon_sym_LOG] = ACTIONS(172),
    [anon_sym_true] = ACTIONS(172),
    [anon_sym_false] = ACTIONS(172),
    [anon_sym_pf] = ACTIONS(172),
    [anon_sym_reset] = ACTIONS(172),
    [anon_sym_rule] = ACTIONS(172),
    [sym_quantity] = ACTIONS(170),
    [sym_number] = ACTIONS(172),
    [sym_type_identifier] = ACTIONS(172),
    [sym_internal_variable] = ACTIONS(170),
    [sym_identifier] = ACTIONS(172),
    [anon_sym_DOT] = ACTIONS(174),
    [anon_sym_LT_DASH] = ACTIONS(170),
    [anon_sym_DASH_GT] = ACTIONS(170),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_EQ_EQ] = ACTIONS(170),
    [anon_sym_DOT_DOT] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_TILDE] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_LBRACE] = ACTIONS(170),
    [anon_sym_RBRACE] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_loop] = ACTIONS(172),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [sym_path] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(179),
    [anon_sym_LOG] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(179),
    [anon_sym_pf] = ACTIONS(179),
    [anon_sym_reset] = ACTIONS(179),
    [anon_sym_rule] = ACTIONS(179),
    [sym_quantity] = ACTIONS(177),
    [sym_number] = ACTIONS(179),
    [sym_type_identifier] = ACTIONS(179),
    [sym_internal_variable] = ACTIONS(177),
    [sym_identifier] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_LT_DASH] = ACTIONS(177),
    [anon_sym_DASH_GT] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_DOT_DOT] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_RBRACE] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_loop] = ACTIONS(179),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(184),
    [sym_path] = ACTIONS(184),
    [anon_sym_if] = ACTIONS(186),
    [anon_sym_LOG] = ACTIONS(186),
    [anon_sym_true] = ACTIONS(186),
    [anon_sym_false] = ACTIONS(186),
    [anon_sym_pf] = ACTIONS(186),
    [anon_sym_reset] = ACTIONS(186),
    [anon_sym_rule] = ACTIONS(186),
    [sym_quantity] = ACTIONS(184),
    [sym_number] = ACTIONS(186),
    [sym_type_identifier] = ACTIONS(186),
    [sym_internal_variable] = ACTIONS(184),
    [sym_identifier] = ACTIONS(186),
    [anon_sym_DOT] = ACTIONS(188),
    [anon_sym_LT_DASH] = ACTIONS(184),
    [anon_sym_DASH_GT] = ACTIONS(184),
    [anon_sym_EQ] = ACTIONS(186),
    [anon_sym_EQ_EQ] = ACTIONS(184),
    [anon_sym_DOT_DOT] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_TILDE] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_loop] = ACTIONS(186),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(191),
    [sym_path] = ACTIONS(191),
    [anon_sym_if] = ACTIONS(193),
    [anon_sym_LOG] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(193),
    [anon_sym_false] = ACTIONS(193),
    [anon_sym_pf] = ACTIONS(193),
    [anon_sym_reset] = ACTIONS(193),
    [anon_sym_rule] = ACTIONS(193),
    [sym_quantity] = ACTIONS(191),
    [sym_number] = ACTIONS(193),
    [sym_type_identifier] = ACTIONS(193),
    [sym_internal_variable] = ACTIONS(191),
    [sym_identifier] = ACTIONS(193),
    [anon_sym_DOT] = ACTIONS(195),
    [anon_sym_LT_DASH] = ACTIONS(191),
    [anon_sym_DASH_GT] = ACTIONS(191),
    [anon_sym_EQ] = ACTIONS(193),
    [anon_sym_EQ_EQ] = ACTIONS(191),
    [anon_sym_DOT_DOT] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(193),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_RBRACE] = ACTIONS(191),
    [anon_sym_LPAREN] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_loop] = ACTIONS(193),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [sym_path] = ACTIONS(95),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_LOG] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_pf] = ACTIONS(97),
    [anon_sym_reset] = ACTIONS(97),
    [anon_sym_rule] = ACTIONS(97),
    [sym_quantity] = ACTIONS(95),
    [sym_number] = ACTIONS(97),
    [sym_type_identifier] = ACTIONS(97),
    [sym_internal_variable] = ACTIONS(95),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(198),
    [anon_sym_LT_DASH] = ACTIONS(95),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(95),
    [anon_sym_DOT_DOT] = ACTIONS(95),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_TILDE] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_loop] = ACTIONS(97),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(200),
    [sym_path] = ACTIONS(200),
    [anon_sym_if] = ACTIONS(202),
    [anon_sym_LOG] = ACTIONS(202),
    [anon_sym_true] = ACTIONS(202),
    [anon_sym_false] = ACTIONS(202),
    [anon_sym_pf] = ACTIONS(202),
    [anon_sym_reset] = ACTIONS(202),
    [anon_sym_rule] = ACTIONS(202),
    [sym_quantity] = ACTIONS(200),
    [sym_number] = ACTIONS(202),
    [sym_type_identifier] = ACTIONS(202),
    [sym_internal_variable] = ACTIONS(200),
    [sym_identifier] = ACTIONS(202),
    [anon_sym_DOT] = ACTIONS(204),
    [anon_sym_LT_DASH] = ACTIONS(200),
    [anon_sym_DASH_GT] = ACTIONS(200),
    [anon_sym_EQ] = ACTIONS(202),
    [anon_sym_EQ_EQ] = ACTIONS(200),
    [anon_sym_DOT_DOT] = ACTIONS(200),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_DASH] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(200),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_RBRACE] = ACTIONS(200),
    [anon_sym_LPAREN] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(200),
    [anon_sym_loop] = ACTIONS(202),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(207),
    [sym_path] = ACTIONS(207),
    [anon_sym_if] = ACTIONS(209),
    [anon_sym_LOG] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(209),
    [anon_sym_false] = ACTIONS(209),
    [anon_sym_pf] = ACTIONS(209),
    [anon_sym_reset] = ACTIONS(209),
    [anon_sym_rule] = ACTIONS(209),
    [sym_quantity] = ACTIONS(207),
    [sym_number] = ACTIONS(209),
    [sym_type_identifier] = ACTIONS(209),
    [sym_internal_variable] = ACTIONS(207),
    [sym_identifier] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(211),
    [anon_sym_LT_DASH] = ACTIONS(207),
    [anon_sym_DASH_GT] = ACTIONS(207),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_EQ_EQ] = ACTIONS(207),
    [anon_sym_DOT_DOT] = ACTIONS(207),
    [anon_sym_PLUS] = ACTIONS(209),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_LBRACE] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_loop] = ACTIONS(209),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(214),
    [sym_path] = ACTIONS(214),
    [anon_sym_if] = ACTIONS(216),
    [anon_sym_LOG] = ACTIONS(216),
    [anon_sym_true] = ACTIONS(216),
    [anon_sym_false] = ACTIONS(216),
    [anon_sym_pf] = ACTIONS(216),
    [anon_sym_reset] = ACTIONS(216),
    [anon_sym_rule] = ACTIONS(216),
    [sym_quantity] = ACTIONS(214),
    [sym_number] = ACTIONS(216),
    [sym_type_identifier] = ACTIONS(216),
    [sym_internal_variable] = ACTIONS(214),
    [sym_identifier] = ACTIONS(216),
    [anon_sym_DOT] = ACTIONS(218),
    [anon_sym_LT_DASH] = ACTIONS(214),
    [anon_sym_DASH_GT] = ACTIONS(214),
    [anon_sym_EQ] = ACTIONS(216),
    [anon_sym_EQ_EQ] = ACTIONS(214),
    [anon_sym_DOT_DOT] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(214),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(214),
    [anon_sym_LBRACE] = ACTIONS(214),
    [anon_sym_RBRACE] = ACTIONS(214),
    [anon_sym_LPAREN] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_loop] = ACTIONS(216),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(221), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(225), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [14] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(227), 1,
      sym_internal_variable,
    ACTIONS(229), 1,
      sym_identifier,
    STATE(22), 1,
      sym_block,
  [30] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      sym_internal_variable,
    ACTIONS(233), 1,
      sym_identifier,
    STATE(22), 1,
      sym_block,
  [46] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      sym_internal_variable,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(22), 1,
      sym_block,
  [62] = 4,
    ACTIONS(221), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(37), 1,
      aux_sym_string_repeat1,
    ACTIONS(241), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [76] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_variable_path_repeat1,
    ACTIONS(95), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [90] = 4,
    ACTIONS(221), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(247), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_DOT,
    STATE(70), 1,
      aux_sym_variable_path_repeat1,
    ACTIONS(95), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      sym_internal_variable,
    ACTIONS(254), 1,
      sym_identifier,
    STATE(22), 1,
      sym_block,
  [134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_array_repeat1,
  [147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_array_repeat1,
  [160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_array_repeat1,
  [173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_DOT,
    ACTIONS(95), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_DOT,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_DOT,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(200), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_DOT,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_DOT,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DOT,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_variable_path_repeat1,
  [290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_internal_variable,
    ACTIONS(300), 1,
      sym_identifier,
  [300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
  [310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_block,
  [320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_internal_variable,
    ACTIONS(304), 1,
      sym_identifier,
  [330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_variable_path_repeat1,
  [340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_internal_variable,
    ACTIONS(310), 1,
      sym_identifier,
  [350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_variable_path_repeat1,
  [360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym_internal_variable,
    ACTIONS(316), 1,
      sym_identifier,
  [370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_internal_variable,
    ACTIONS(320), 1,
      sym_identifier,
  [380] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_variable_path_repeat1,
  [390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_variable_path_repeat1,
  [400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_BANG,
  [407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_number,
  [414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_DOT,
  [421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_DOT,
  [428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(37)] = 0,
  [SMALL_STATE(38)] = 14,
  [SMALL_STATE(39)] = 30,
  [SMALL_STATE(40)] = 46,
  [SMALL_STATE(41)] = 62,
  [SMALL_STATE(42)] = 76,
  [SMALL_STATE(43)] = 90,
  [SMALL_STATE(44)] = 104,
  [SMALL_STATE(45)] = 118,
  [SMALL_STATE(46)] = 134,
  [SMALL_STATE(47)] = 147,
  [SMALL_STATE(48)] = 160,
  [SMALL_STATE(49)] = 173,
  [SMALL_STATE(50)] = 184,
  [SMALL_STATE(51)] = 195,
  [SMALL_STATE(52)] = 206,
  [SMALL_STATE(53)] = 217,
  [SMALL_STATE(54)] = 228,
  [SMALL_STATE(55)] = 239,
  [SMALL_STATE(56)] = 250,
  [SMALL_STATE(57)] = 261,
  [SMALL_STATE(58)] = 272,
  [SMALL_STATE(59)] = 280,
  [SMALL_STATE(60)] = 290,
  [SMALL_STATE(61)] = 300,
  [SMALL_STATE(62)] = 310,
  [SMALL_STATE(63)] = 320,
  [SMALL_STATE(64)] = 330,
  [SMALL_STATE(65)] = 340,
  [SMALL_STATE(66)] = 350,
  [SMALL_STATE(67)] = 360,
  [SMALL_STATE(68)] = 370,
  [SMALL_STATE(69)] = 380,
  [SMALL_STATE(70)] = 390,
  [SMALL_STATE(71)] = 400,
  [SMALL_STATE(72)] = 407,
  [SMALL_STATE(73)] = 414,
  [SMALL_STATE(74)] = 421,
  [SMALL_STATE(75)] = 428,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_block, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace_block, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 3, 2, 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_path, 3, 2, 5),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 1), REDUCE(sym_variable_path, 3, 2, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 4, 2, 10),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_path, 4, 2, 10),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 3), REDUCE(sym_variable_path, 4, 2, 10),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 3, 2, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_path, 3, 2, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 1), REDUCE(sym_variable_path, 3, 2, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 3, 2, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_path, 3, 2, 4),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 3), REDUCE(sym_variable_path, 3, 2, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 3, 2, 6),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_path, 3, 2, 6),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 3), REDUCE(sym_variable_path, 3, 2, 6),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 4, 2, 7),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_path, 4, 2, 7),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 1), REDUCE(sym_variable_path, 4, 2, 7),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 4, 2, 8),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_path, 4, 2, 8),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 3), REDUCE(sym_variable_path, 4, 2, 8),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_path, 4, 2, 9),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_path, 4, 2, 9),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 1), REDUCE(sym_variable_path, 4, 2, 9),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 1), REDUCE(sym_variable_path, 3, 2, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 3), REDUCE(sym_variable_path, 3, 2, 4),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 1), REDUCE(sym_variable_path, 3, 2, 5),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 3), REDUCE(sym_variable_path, 3, 2, 6),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 1), REDUCE(sym_variable_path, 4, 2, 7),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 3), REDUCE(sym_variable_path, 4, 2, 8),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 1), REDUCE(sym_variable_path, 4, 2, 9),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 3), REDUCE(sym_variable_path, 4, 2, 10),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 11),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_path_repeat1, 2, 0, 3),
  [334] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
