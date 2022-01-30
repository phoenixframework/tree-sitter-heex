#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 1
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LT_BANG = 1,
  anon_sym_DOCTYPE = 2,
  anon_sym_html = 3,
  anon_sym_GT = 4,
  anon_sym_LT = 5,
  anon_sym_LT_SLASH = 6,
  anon_sym_SLASH_GT = 7,
  anon_sym_LT_COLON = 8,
  anon_sym_LT_SLASH_COLON = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  aux_sym__expression_value_token1 = 12,
  anon_sym_EQ = 13,
  sym_attribute_value = 14,
  anon_sym_SQUOTE = 15,
  aux_sym_quoted_attribute_value_token1 = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_quoted_attribute_value_token2 = 18,
  anon_sym_LT_PERCENT = 19,
  anon_sym_LT_PERCENT_EQ = 20,
  anon_sym_LT_PERCENT_PERCENT = 21,
  anon_sym_LT_PERCENT_PERCENT_EQ = 22,
  anon_sym_PERCENT_GT = 23,
  anon_sym_LT_BANG_DASH_DASH = 24,
  aux_sym__html_comment_token1 = 25,
  anon_sym_DASH_DASH_GT = 26,
  anon_sym_LT_PERCENT_BANG_DASH_DASH = 27,
  anon_sym_DASH_DASH_PERCENT_GT = 28,
  anon_sym_LT_PERCENT_POUND = 29,
  aux_sym_partial_expression_value_token1 = 30,
  anon_sym_do = 31,
  anon_sym_DASH_GT = 32,
  anon_sym_POUND = 33,
  anon_sym_DOT = 34,
  sym_module = 35,
  sym_function = 36,
  sym__code = 37,
  sym_tag_name = 38,
  sym_attribute_name = 39,
  sym_text = 40,
  sym_fragment = 41,
  sym__node = 42,
  sym_doctype = 43,
  sym_tag = 44,
  sym_component = 45,
  sym_slot = 46,
  sym_start_tag = 47,
  sym_end_tag = 48,
  sym_self_closing_tag = 49,
  sym_start_component = 50,
  sym_end_component = 51,
  sym_self_closing_component = 52,
  sym_start_slot = 53,
  sym_end_slot = 54,
  sym_expression = 55,
  sym__expression_value = 56,
  sym_attribute = 57,
  sym_quoted_attribute_value = 58,
  sym_directive = 59,
  sym_comment = 60,
  sym__html_comment = 61,
  sym__bang_comment = 62,
  sym__hash_comment = 63,
  sym_expression_value = 64,
  sym_partial_expression_value = 65,
  sym_component_name = 66,
  aux_sym_fragment_repeat1 = 67,
  aux_sym_component_repeat1 = 68,
  aux_sym_start_tag_repeat1 = 69,
  aux_sym_expression_repeat1 = 70,
  aux_sym__html_comment_repeat1 = 71,
  aux_sym__hash_comment_repeat1 = 72,
  alias_sym_slot_name = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [anon_sym_DOCTYPE] = "DOCTYPE",
  [anon_sym_html] = "html",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_LT_SLASH_COLON] = "</:",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__expression_value_token1] = "_expression_value_token1",
  [anon_sym_EQ] = "=",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [anon_sym_LT_PERCENT_PERCENT] = "<%%",
  [anon_sym_LT_PERCENT_PERCENT_EQ] = "<%%=",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [aux_sym__html_comment_token1] = "_html_comment_token1",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LT_PERCENT_BANG_DASH_DASH] = "<%!--",
  [anon_sym_DASH_DASH_PERCENT_GT] = "--%>",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
  [aux_sym_partial_expression_value_token1] = "partial_expression_value_token1",
  [anon_sym_do] = "do",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_POUND] = "#",
  [anon_sym_DOT] = ".",
  [sym_module] = "module",
  [sym_function] = "function",
  [sym__code] = "_code",
  [sym_tag_name] = "tag_name",
  [sym_attribute_name] = "attribute_name",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_doctype] = "doctype",
  [sym_tag] = "tag",
  [sym_component] = "component",
  [sym_slot] = "slot",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_start_component] = "start_component",
  [sym_end_component] = "end_component",
  [sym_self_closing_component] = "self_closing_component",
  [sym_start_slot] = "start_slot",
  [sym_end_slot] = "end_slot",
  [sym_expression] = "expression",
  [sym__expression_value] = "_expression_value",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_directive] = "directive",
  [sym_comment] = "comment",
  [sym__html_comment] = "_html_comment",
  [sym__bang_comment] = "_bang_comment",
  [sym__hash_comment] = "_hash_comment",
  [sym_expression_value] = "expression_value",
  [sym_partial_expression_value] = "partial_expression_value",
  [sym_component_name] = "component_name",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_component_repeat1] = "component_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym__html_comment_repeat1] = "_html_comment_repeat1",
  [aux_sym__hash_comment_repeat1] = "_hash_comment_repeat1",
  [alias_sym_slot_name] = "slot_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG] = anon_sym_LT_BANG,
  [anon_sym_DOCTYPE] = anon_sym_DOCTYPE,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_LT_SLASH_COLON] = anon_sym_LT_SLASH_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__expression_value_token1] = aux_sym__expression_value_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [anon_sym_LT_PERCENT_PERCENT] = anon_sym_LT_PERCENT_PERCENT,
  [anon_sym_LT_PERCENT_PERCENT_EQ] = anon_sym_LT_PERCENT_PERCENT_EQ,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [aux_sym__html_comment_token1] = aux_sym__html_comment_token1,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_LT_PERCENT_BANG_DASH_DASH] = anon_sym_LT_PERCENT_BANG_DASH_DASH,
  [anon_sym_DASH_DASH_PERCENT_GT] = anon_sym_DASH_DASH_PERCENT_GT,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
  [aux_sym_partial_expression_value_token1] = aux_sym_partial_expression_value_token1,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_module] = sym_module,
  [sym_function] = sym_function,
  [sym__code] = sym__code,
  [sym_tag_name] = sym_tag_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_text] = sym_text,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_doctype] = sym_doctype,
  [sym_tag] = sym_tag,
  [sym_component] = sym_component,
  [sym_slot] = sym_slot,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_start_component] = sym_start_component,
  [sym_end_component] = sym_end_component,
  [sym_self_closing_component] = sym_self_closing_component,
  [sym_start_slot] = sym_start_slot,
  [sym_end_slot] = sym_end_slot,
  [sym_expression] = sym_expression,
  [sym__expression_value] = sym__expression_value,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_directive] = sym_directive,
  [sym_comment] = sym_comment,
  [sym__html_comment] = sym__html_comment,
  [sym__bang_comment] = sym__bang_comment,
  [sym__hash_comment] = sym__hash_comment,
  [sym_expression_value] = sym_expression_value,
  [sym_partial_expression_value] = sym_partial_expression_value,
  [sym_component_name] = sym_component_name,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_component_repeat1] = aux_sym_component_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym__html_comment_repeat1] = aux_sym__html_comment_repeat1,
  [aux_sym__hash_comment_repeat1] = aux_sym__hash_comment_repeat1,
  [alias_sym_slot_name] = alias_sym_slot_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOCTYPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_html] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expression_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__html_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_partial_expression_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym__code] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_doctype] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_start_component] = {
    .visible = true,
    .named = true,
  },
  [sym_end_component] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_component] = {
    .visible = true,
    .named = true,
  },
  [sym_start_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_end_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_value] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__html_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__bang_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__hash_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_value] = {
    .visible = true,
    .named = true,
  },
  [sym_partial_expression_value] = {
    .visible = true,
    .named = true,
  },
  [sym_component_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__html_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hash_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_slot_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_slot_name,
  },
  [2] = {
    [1] = sym_expression_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_expression_repeat1, 2,
    aux_sym_expression_repeat1,
    sym_expression_value,
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 58,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 68,
  [76] = 76,
  [77] = 50,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 84,
  [106] = 85,
  [107] = 107,
  [108] = 94,
};

static inline bool sym_attribute_value_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '{'
      ? (c < '<'
        ? c == '\''
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_module_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c >= ' ' && c <= '"')))
    : (c <= '\'' || (c < '{'
      ? (c < '<'
        ? (c >= '-' && c <= '/')
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_tag_name_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '\''
        ? (c >= ' ' && c <= '"')
        : c <= '\'')))
    : (c <= '-' || (c < '{'
      ? (c < '<'
        ? c == '/'
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_attribute_name_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '\'' || (c < '{'
      ? (c < '<'
        ? c == '/'
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'h') ADVANCE(111);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(85);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(112);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(112);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(113);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'P') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'Y') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '{') ADVANCE(51);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(113);
      END_STATE();
    case 35:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(86);
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(113);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '<') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(113);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == ':') ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '%') ADVANCE(65);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_BANG_DASH_DASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_PERCENT_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(97);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(97);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_module);
      if (lookahead == '.') ADVANCE(35);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_function);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__code);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(67);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'C') ADVANCE(104);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'E') ADVANCE(40);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'O') ADVANCE(100);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'P') ADVANCE(101);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'T') ADVANCE(105);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'Y') ADVANCE(103);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(78);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(41);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(107);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(106);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(81);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(108);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(113);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 37},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 36},
  [22] = {.lex_state = 36},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 36},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 36},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 33},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 33},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 33},
  [85] = {.lex_state = 33},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 23},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 23},
  [108] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG] = ACTIONS(1),
    [anon_sym_DOCTYPE] = ACTIONS(1),
    [anon_sym_html] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_LT_SLASH_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_PERCENT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [aux_sym_partial_expression_value_token1] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(92),
    [sym__node] = STATE(10),
    [sym_doctype] = STATE(10),
    [sym_tag] = STATE(10),
    [sym_component] = STATE(10),
    [sym_start_tag] = STATE(9),
    [sym_self_closing_tag] = STATE(30),
    [sym_start_component] = STATE(2),
    [sym_self_closing_component] = STATE(11),
    [sym_directive] = STATE(10),
    [sym_comment] = STATE(10),
    [sym__html_comment] = STATE(14),
    [sym__bang_comment] = STATE(14),
    [sym__hash_comment] = STATE(14),
    [aux_sym_fragment_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_BANG] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(11),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(11),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(13),
    [anon_sym_LT_PERCENT_BANG_DASH_DASH] = ACTIONS(15),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      anon_sym_LT_COLON,
    ACTIONS(25), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(27), 1,
      sym_end_component,
    STATE(30), 1,
      sym_self_closing_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(3), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_slot,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [66] = 18,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(23), 1,
      anon_sym_LT_COLON,
    ACTIONS(27), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(29), 1,
      sym_end_component,
    STATE(30), 1,
      sym_self_closing_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(4), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_slot,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [132] = 17,
    ACTIONS(29), 1,
      anon_sym_LT_BANG,
    ACTIONS(32), 1,
      anon_sym_LT,
    ACTIONS(35), 1,
      anon_sym_LT_SLASH,
    ACTIONS(37), 1,
      anon_sym_LT_COLON,
    ACTIONS(46), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(49), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(52), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(55), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(30), 1,
      sym_self_closing_tag,
    ACTIONS(40), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(43), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(4), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_slot,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [195] = 16,
    ACTIONS(60), 1,
      anon_sym_LT_BANG,
    ACTIONS(63), 1,
      anon_sym_LT,
    ACTIONS(66), 1,
      anon_sym_LT_SLASH,
    ACTIONS(74), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(77), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(80), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(83), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(30), 1,
      sym_self_closing_tag,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH_COLON,
    ACTIONS(68), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(71), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [255] = 16,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(86), 1,
      anon_sym_LT_SLASH_COLON,
    ACTIONS(88), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(30), 1,
      sym_self_closing_tag,
    STATE(32), 1,
      sym_end_slot,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(8), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [314] = 16,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(90), 1,
      anon_sym_LT_SLASH,
    ACTIONS(92), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(23), 1,
      sym_end_tag,
    STATE(30), 1,
      sym_self_closing_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [373] = 16,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(86), 1,
      anon_sym_LT_SLASH_COLON,
    ACTIONS(92), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(30), 1,
      sym_self_closing_tag,
    STATE(34), 1,
      sym_end_slot,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [432] = 16,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(90), 1,
      anon_sym_LT_SLASH,
    ACTIONS(94), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(30), 1,
      sym_self_closing_tag,
    STATE(31), 1,
      sym_end_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(7), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [491] = 15,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(15), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(92), 1,
      sym_text,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(30), 1,
      sym_self_closing_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(14), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [547] = 2,
    ACTIONS(100), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(98), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [566] = 2,
    ACTIONS(104), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(102), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [585] = 2,
    ACTIONS(108), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(106), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [604] = 2,
    ACTIONS(112), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(110), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [623] = 2,
    ACTIONS(116), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [642] = 2,
    ACTIONS(120), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(118), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [661] = 2,
    ACTIONS(124), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(122), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [680] = 2,
    ACTIONS(128), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(126), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [699] = 2,
    ACTIONS(132), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(130), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [718] = 2,
    ACTIONS(136), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(134), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [737] = 2,
    ACTIONS(140), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [756] = 2,
    ACTIONS(144), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(142), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [775] = 2,
    ACTIONS(148), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(146), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [794] = 2,
    ACTIONS(152), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(150), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [813] = 2,
    ACTIONS(156), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(154), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [832] = 2,
    ACTIONS(160), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(158), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [851] = 2,
    ACTIONS(164), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(162), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [870] = 2,
    ACTIONS(168), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(166), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [889] = 2,
    ACTIONS(172), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(170), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [908] = 2,
    ACTIONS(176), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(174), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [927] = 2,
    ACTIONS(180), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(178), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [946] = 2,
    ACTIONS(182), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(184), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [963] = 2,
    ACTIONS(186), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(188), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [980] = 2,
    ACTIONS(190), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(192), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [997] = 2,
    ACTIONS(194), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(196), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1014] = 2,
    ACTIONS(198), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(200), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1031] = 2,
    ACTIONS(202), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(204), 7,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1047] = 2,
    ACTIONS(206), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(208), 7,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1063] = 2,
    ACTIONS(210), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(212), 7,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1079] = 2,
    ACTIONS(214), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(216), 7,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1095] = 5,
    ACTIONS(218), 1,
      aux_sym_partial_expression_value_token1,
    ACTIONS(222), 1,
      sym__code,
    STATE(53), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(220), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(95), 2,
      sym_expression_value,
      sym_partial_expression_value,
  [1113] = 4,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      sym_attribute_name,
    ACTIONS(224), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(42), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1129] = 5,
    ACTIONS(232), 1,
      anon_sym_GT,
    ACTIONS(234), 1,
      anon_sym_SLASH_GT,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_attribute_name,
    STATE(46), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1147] = 5,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_attribute_name,
    ACTIONS(240), 1,
      anon_sym_GT,
    ACTIONS(242), 1,
      anon_sym_SLASH_GT,
    STATE(45), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1165] = 5,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_GT,
    ACTIONS(246), 1,
      anon_sym_SLASH_GT,
    STATE(42), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1183] = 5,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_attribute_name,
    ACTIONS(248), 1,
      anon_sym_GT,
    ACTIONS(250), 1,
      anon_sym_SLASH_GT,
    STATE(42), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1201] = 4,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_attribute_name,
    ACTIONS(252), 1,
      anon_sym_GT,
    STATE(48), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1216] = 4,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      sym_attribute_name,
    ACTIONS(254), 1,
      anon_sym_GT,
    STATE(42), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1231] = 5,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      sym_attribute_value,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(64), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [1248] = 3,
    ACTIONS(264), 1,
      sym__code,
    STATE(50), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(262), 3,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1260] = 5,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 1,
      aux_sym__expression_value_token1,
    STATE(54), 1,
      aux_sym_expression_repeat1,
    STATE(72), 1,
      sym__expression_value,
  [1276] = 3,
    ACTIONS(275), 1,
      anon_sym_DOT,
    ACTIONS(277), 1,
      sym_attribute_name,
    ACTIONS(273), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
  [1288] = 4,
    ACTIONS(279), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(283), 1,
      sym__code,
    STATE(50), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(281), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1302] = 5,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      aux_sym__expression_value_token1,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_expression_repeat1,
    STATE(72), 1,
      sym__expression_value,
  [1318] = 2,
    ACTIONS(289), 1,
      anon_sym_EQ,
    ACTIONS(287), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1328] = 5,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      aux_sym__expression_value_token1,
    STATE(56), 1,
      aux_sym_expression_repeat1,
    STATE(72), 1,
      sym__expression_value,
  [1344] = 1,
    ACTIONS(299), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1351] = 4,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    ACTIONS(305), 1,
      aux_sym__expression_value_token1,
    STATE(94), 1,
      sym__expression_value,
  [1364] = 1,
    ACTIONS(307), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1371] = 1,
    ACTIONS(309), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1378] = 1,
    ACTIONS(311), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1385] = 4,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    ACTIONS(315), 1,
      aux_sym__expression_value_token1,
    STATE(108), 1,
      sym__expression_value,
  [1398] = 4,
    ACTIONS(317), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      sym_module,
    ACTIONS(321), 1,
      sym_tag_name,
    STATE(43), 1,
      sym_component_name,
  [1411] = 1,
    ACTIONS(323), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1418] = 1,
    ACTIONS(325), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1425] = 1,
    ACTIONS(327), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1432] = 3,
    ACTIONS(317), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      sym_module,
    STATE(102), 1,
      sym_component_name,
  [1442] = 3,
    ACTIONS(329), 1,
      aux_sym__html_comment_token1,
    ACTIONS(332), 1,
      anon_sym_DASH_DASH_GT,
    STATE(68), 1,
      aux_sym__html_comment_repeat1,
  [1452] = 3,
    ACTIONS(334), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(336), 1,
      sym__code,
    STATE(77), 1,
      aux_sym__hash_comment_repeat1,
  [1462] = 3,
    ACTIONS(336), 1,
      sym__code,
    ACTIONS(338), 1,
      anon_sym_PERCENT_GT,
    STATE(77), 1,
      aux_sym__hash_comment_repeat1,
  [1472] = 3,
    ACTIONS(340), 1,
      aux_sym__html_comment_token1,
    ACTIONS(342), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(75), 1,
      aux_sym__html_comment_repeat1,
  [1482] = 2,
    ACTIONS(346), 1,
      aux_sym__expression_value_token1,
    ACTIONS(344), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1490] = 3,
    ACTIONS(336), 1,
      sym__code,
    ACTIONS(348), 1,
      anon_sym_PERCENT_GT,
    STATE(77), 1,
      aux_sym__hash_comment_repeat1,
  [1500] = 3,
    ACTIONS(350), 1,
      aux_sym__html_comment_token1,
    ACTIONS(352), 1,
      anon_sym_DASH_DASH_GT,
    STATE(68), 1,
      aux_sym__html_comment_repeat1,
  [1510] = 3,
    ACTIONS(332), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    ACTIONS(354), 1,
      aux_sym__html_comment_token1,
    STATE(75), 1,
      aux_sym__html_comment_repeat1,
  [1520] = 3,
    ACTIONS(348), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(357), 1,
      sym__code,
    STATE(80), 1,
      aux_sym__hash_comment_repeat1,
  [1530] = 3,
    ACTIONS(262), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(359), 1,
      sym__code,
    STATE(77), 1,
      aux_sym__hash_comment_repeat1,
  [1540] = 3,
    ACTIONS(362), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(364), 1,
      sym__code,
    STATE(73), 1,
      aux_sym__hash_comment_repeat1,
  [1550] = 3,
    ACTIONS(366), 1,
      aux_sym__html_comment_token1,
    ACTIONS(368), 1,
      anon_sym_DASH_DASH_GT,
    STATE(74), 1,
      aux_sym__html_comment_repeat1,
  [1560] = 3,
    ACTIONS(336), 1,
      sym__code,
    ACTIONS(370), 1,
      anon_sym_PERCENT_GT,
    STATE(77), 1,
      aux_sym__hash_comment_repeat1,
  [1570] = 3,
    ACTIONS(370), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(372), 1,
      sym__code,
    STATE(69), 1,
      aux_sym__hash_comment_repeat1,
  [1580] = 3,
    ACTIONS(374), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(376), 1,
      sym__code,
    STATE(70), 1,
      aux_sym__hash_comment_repeat1,
  [1590] = 3,
    ACTIONS(378), 1,
      aux_sym__html_comment_token1,
    ACTIONS(380), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(71), 1,
      aux_sym__html_comment_repeat1,
  [1600] = 2,
    ACTIONS(384), 1,
      aux_sym__expression_value_token1,
    ACTIONS(382), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1608] = 2,
    ACTIONS(388), 1,
      aux_sym__expression_value_token1,
    ACTIONS(386), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1616] = 2,
    ACTIONS(390), 1,
      anon_sym_SQUOTE,
    ACTIONS(392), 1,
      aux_sym_quoted_attribute_value_token1,
  [1623] = 2,
    ACTIONS(394), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(396), 1,
      anon_sym_POUND,
  [1630] = 2,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      aux_sym_quoted_attribute_value_token2,
  [1637] = 2,
    ACTIONS(400), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(402), 1,
      anon_sym_POUND,
  [1644] = 1,
    ACTIONS(404), 1,
      sym_tag_name,
  [1648] = 1,
    ACTIONS(406), 1,
      anon_sym_GT,
  [1652] = 1,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
  [1656] = 1,
    ACTIONS(410), 1,
      sym_function,
  [1660] = 1,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
  [1664] = 1,
    ACTIONS(414), 1,
      anon_sym_PERCENT_GT,
  [1668] = 1,
    ACTIONS(416), 1,
      sym_tag_name,
  [1672] = 1,
    ACTIONS(418), 1,
      anon_sym_html,
  [1676] = 1,
    ACTIONS(420), 1,
      sym_tag_name,
  [1680] = 1,
    ACTIONS(422), 1,
      anon_sym_GT,
  [1684] = 1,
    ACTIONS(424), 1,
      anon_sym_SQUOTE,
  [1688] = 1,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
  [1692] = 1,
    ACTIONS(426), 1,
      anon_sym_GT,
  [1696] = 1,
    ACTIONS(428), 1,
      anon_sym_GT,
  [1700] = 1,
    ACTIONS(430), 1,
      sym_function,
  [1704] = 1,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
  [1708] = 1,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
  [1712] = 1,
    ACTIONS(432), 1,
      anon_sym_DOCTYPE,
  [1716] = 1,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 195,
  [SMALL_STATE(6)] = 255,
  [SMALL_STATE(7)] = 314,
  [SMALL_STATE(8)] = 373,
  [SMALL_STATE(9)] = 432,
  [SMALL_STATE(10)] = 491,
  [SMALL_STATE(11)] = 547,
  [SMALL_STATE(12)] = 566,
  [SMALL_STATE(13)] = 585,
  [SMALL_STATE(14)] = 604,
  [SMALL_STATE(15)] = 623,
  [SMALL_STATE(16)] = 642,
  [SMALL_STATE(17)] = 661,
  [SMALL_STATE(18)] = 680,
  [SMALL_STATE(19)] = 699,
  [SMALL_STATE(20)] = 718,
  [SMALL_STATE(21)] = 737,
  [SMALL_STATE(22)] = 756,
  [SMALL_STATE(23)] = 775,
  [SMALL_STATE(24)] = 794,
  [SMALL_STATE(25)] = 813,
  [SMALL_STATE(26)] = 832,
  [SMALL_STATE(27)] = 851,
  [SMALL_STATE(28)] = 870,
  [SMALL_STATE(29)] = 889,
  [SMALL_STATE(30)] = 908,
  [SMALL_STATE(31)] = 927,
  [SMALL_STATE(32)] = 946,
  [SMALL_STATE(33)] = 963,
  [SMALL_STATE(34)] = 980,
  [SMALL_STATE(35)] = 997,
  [SMALL_STATE(36)] = 1014,
  [SMALL_STATE(37)] = 1031,
  [SMALL_STATE(38)] = 1047,
  [SMALL_STATE(39)] = 1063,
  [SMALL_STATE(40)] = 1079,
  [SMALL_STATE(41)] = 1095,
  [SMALL_STATE(42)] = 1113,
  [SMALL_STATE(43)] = 1129,
  [SMALL_STATE(44)] = 1147,
  [SMALL_STATE(45)] = 1165,
  [SMALL_STATE(46)] = 1183,
  [SMALL_STATE(47)] = 1201,
  [SMALL_STATE(48)] = 1216,
  [SMALL_STATE(49)] = 1231,
  [SMALL_STATE(50)] = 1248,
  [SMALL_STATE(51)] = 1260,
  [SMALL_STATE(52)] = 1276,
  [SMALL_STATE(53)] = 1288,
  [SMALL_STATE(54)] = 1302,
  [SMALL_STATE(55)] = 1318,
  [SMALL_STATE(56)] = 1328,
  [SMALL_STATE(57)] = 1344,
  [SMALL_STATE(58)] = 1351,
  [SMALL_STATE(59)] = 1364,
  [SMALL_STATE(60)] = 1371,
  [SMALL_STATE(61)] = 1378,
  [SMALL_STATE(62)] = 1385,
  [SMALL_STATE(63)] = 1398,
  [SMALL_STATE(64)] = 1411,
  [SMALL_STATE(65)] = 1418,
  [SMALL_STATE(66)] = 1425,
  [SMALL_STATE(67)] = 1432,
  [SMALL_STATE(68)] = 1442,
  [SMALL_STATE(69)] = 1452,
  [SMALL_STATE(70)] = 1462,
  [SMALL_STATE(71)] = 1472,
  [SMALL_STATE(72)] = 1482,
  [SMALL_STATE(73)] = 1490,
  [SMALL_STATE(74)] = 1500,
  [SMALL_STATE(75)] = 1510,
  [SMALL_STATE(76)] = 1520,
  [SMALL_STATE(77)] = 1530,
  [SMALL_STATE(78)] = 1540,
  [SMALL_STATE(79)] = 1550,
  [SMALL_STATE(80)] = 1560,
  [SMALL_STATE(81)] = 1570,
  [SMALL_STATE(82)] = 1580,
  [SMALL_STATE(83)] = 1590,
  [SMALL_STATE(84)] = 1600,
  [SMALL_STATE(85)] = 1608,
  [SMALL_STATE(86)] = 1616,
  [SMALL_STATE(87)] = 1623,
  [SMALL_STATE(88)] = 1630,
  [SMALL_STATE(89)] = 1637,
  [SMALL_STATE(90)] = 1644,
  [SMALL_STATE(91)] = 1648,
  [SMALL_STATE(92)] = 1652,
  [SMALL_STATE(93)] = 1656,
  [SMALL_STATE(94)] = 1660,
  [SMALL_STATE(95)] = 1664,
  [SMALL_STATE(96)] = 1668,
  [SMALL_STATE(97)] = 1672,
  [SMALL_STATE(98)] = 1676,
  [SMALL_STATE(99)] = 1680,
  [SMALL_STATE(100)] = 1684,
  [SMALL_STATE(101)] = 1688,
  [SMALL_STATE(102)] = 1692,
  [SMALL_STATE(103)] = 1696,
  [SMALL_STATE(104)] = 1700,
  [SMALL_STATE(105)] = 1704,
  [SMALL_STATE(106)] = 1708,
  [SMALL_STATE(107)] = 1712,
  [SMALL_STATE(108)] = 1716,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(107),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(63),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(90),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(41),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(41),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(79),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(83),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(82),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(107),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(63),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(41),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(41),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(79),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(83),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(82),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_slot, 3, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_slot, 3, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 3, .production_id = 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 3, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 4, .production_id = 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 4, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(51),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(55),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(50),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(58),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(72),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 3),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(68),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 4),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(75),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(77),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 1),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [408] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_heex(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
