#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LT_BANG = 1,
  anon_sym_DOCTYPE = 2,
  anon_sym_html = 3,
  anon_sym_GT = 4,
  anon_sym_LT = 5,
  anon_sym_LT_SLASH = 6,
  anon_sym_SLASH_GT = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  aux_sym__expression_value_token1 = 10,
  anon_sym_EQ = 11,
  sym_attribute_value = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_quoted_attribute_value_token1 = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_quoted_attribute_value_token2 = 16,
  anon_sym_LT_PERCENT = 17,
  anon_sym_LT_PERCENT_EQ = 18,
  anon_sym_LT_PERCENT_PERCENT = 19,
  anon_sym_LT_PERCENT_PERCENT_EQ = 20,
  anon_sym_PERCENT_GT = 21,
  anon_sym_LT_BANG_DASH_DASH = 22,
  aux_sym__html_comment_token1 = 23,
  anon_sym_DASH_DASH_GT = 24,
  anon_sym_LT_PERCENT_BANG_DASH_DASH = 25,
  anon_sym_DASH_DASH_PERCENT_GT = 26,
  anon_sym_LT_PERCENT_POUND = 27,
  aux_sym_partial_expression_value_token1 = 28,
  anon_sym_do = 29,
  anon_sym_DASH_GT = 30,
  anon_sym_POUND = 31,
  anon_sym_DOT = 32,
  sym_module = 33,
  sym_function = 34,
  sym__code = 35,
  sym_tag_name = 36,
  sym_attribute_name = 37,
  sym_text = 38,
  sym_fragment = 39,
  sym__node = 40,
  sym_doctype = 41,
  sym_tag = 42,
  sym_component = 43,
  sym_start_tag = 44,
  sym_end_tag = 45,
  sym_self_closing_tag = 46,
  sym_start_component = 47,
  sym_end_component = 48,
  sym_self_closing_component = 49,
  sym_expression = 50,
  sym__expression_value = 51,
  sym_attribute = 52,
  sym_quoted_attribute_value = 53,
  sym_directive = 54,
  sym_comment = 55,
  sym__html_comment = 56,
  sym__bang_comment = 57,
  sym__hash_comment = 58,
  sym_expression_value = 59,
  sym_partial_expression_value = 60,
  sym_component_name = 61,
  aux_sym_fragment_repeat1 = 62,
  aux_sym_start_tag_repeat1 = 63,
  aux_sym_expression_repeat1 = 64,
  aux_sym__html_comment_repeat1 = 65,
  aux_sym__hash_comment_repeat1 = 66,
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
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_start_component] = "start_component",
  [sym_end_component] = "end_component",
  [sym_self_closing_component] = "self_closing_component",
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
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym__html_comment_repeat1] = "_html_comment_repeat1",
  [aux_sym__hash_comment_repeat1] = "_hash_comment_repeat1",
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
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_start_component] = sym_start_component,
  [sym_end_component] = sym_end_component,
  [sym_self_closing_component] = sym_self_closing_component,
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
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym__html_comment_repeat1] = aux_sym__html_comment_repeat1,
  [aux_sym__hash_comment_repeat1] = aux_sym__hash_comment_repeat1,
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
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
  [48] = 45,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 56,
  [58] = 42,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
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
  [75] = 75,
  [76] = 76,
  [77] = 77,
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
  [89] = 63,
  [90] = 55,
  [91] = 91,
  [92] = 77,
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
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'h') ADVANCE(108);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(90);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(109);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(70);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(72);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(39);
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
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(48);
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
          lookahead != '}') ADVANCE(110);
      END_STATE();
    case 35:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(82);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(110);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_BANG_DASH_DASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_PERCENT_GT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(94);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(94);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_module);
      if (lookahead == '.') ADVANCE(35);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_function);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__code);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(90);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'C') ADVANCE(101);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'E') ADVANCE(39);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'O') ADVANCE(97);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'P') ADVANCE(98);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'T') ADVANCE(102);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'Y') ADVANCE(100);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(74);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(40);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(104);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(103);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(77);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(105);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(110);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
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
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 33},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
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
    [sym_fragment] = STATE(80),
    [sym__node] = STATE(7),
    [sym_doctype] = STATE(7),
    [sym_tag] = STATE(7),
    [sym_component] = STATE(7),
    [sym_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(11),
    [sym_start_component] = STATE(2),
    [sym_self_closing_component] = STATE(12),
    [sym_directive] = STATE(7),
    [sym_comment] = STATE(7),
    [sym__html_comment] = STATE(13),
    [sym__bang_comment] = STATE(13),
    [sym__hash_comment] = STATE(13),
    [aux_sym_fragment_repeat1] = STATE(7),
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
  [0] = 16,
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
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
    STATE(19), 1,
      sym_end_component,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(13), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(4), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [59] = 16,
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
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    ACTIONS(27), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
    STATE(24), 1,
      sym_end_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(13), 3,
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
  [118] = 16,
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
    ACTIONS(27), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
    STATE(14), 1,
      sym_end_component,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(13), 3,
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
  [177] = 15,
    ACTIONS(31), 1,
      anon_sym_LT_BANG,
    ACTIONS(34), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(46), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(49), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(52), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(37), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(40), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(13), 3,
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
  [234] = 16,
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
    ACTIONS(25), 1,
      anon_sym_LT_SLASH,
    ACTIONS(55), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
    STATE(23), 1,
      sym_end_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(13), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(3), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [293] = 15,
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
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
      sym_self_closing_component,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(13), 3,
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
  [349] = 2,
    ACTIONS(61), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [366] = 2,
    ACTIONS(65), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [383] = 2,
    ACTIONS(69), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(67), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [400] = 2,
    ACTIONS(73), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [417] = 2,
    ACTIONS(77), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(75), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [434] = 2,
    ACTIONS(81), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(79), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [451] = 2,
    ACTIONS(85), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [468] = 2,
    ACTIONS(89), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(87), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [485] = 2,
    ACTIONS(93), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(91), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [502] = 2,
    ACTIONS(97), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(95), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [519] = 2,
    ACTIONS(101), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(99), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [536] = 2,
    ACTIONS(105), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(103), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [553] = 2,
    ACTIONS(109), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [570] = 2,
    ACTIONS(113), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(111), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [587] = 2,
    ACTIONS(117), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(115), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [604] = 2,
    ACTIONS(121), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(119), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [621] = 2,
    ACTIONS(125), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(123), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [638] = 2,
    ACTIONS(129), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(127), 8,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [655] = 2,
    ACTIONS(131), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(133), 7,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [671] = 2,
    ACTIONS(135), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(137), 7,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [687] = 2,
    ACTIONS(139), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(141), 7,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [703] = 2,
    ACTIONS(143), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(145), 7,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [719] = 5,
    ACTIONS(147), 1,
      aux_sym_partial_expression_value_token1,
    ACTIONS(151), 1,
      sym__code,
    STATE(43), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(149), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(83), 2,
      sym_expression_value,
      sym_partial_expression_value,
  [737] = 5,
    ACTIONS(153), 1,
      anon_sym_GT,
    ACTIONS(155), 1,
      anon_sym_SLASH_GT,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      sym_attribute_name,
    STATE(35), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [755] = 5,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      sym_attribute_name,
    ACTIONS(161), 1,
      anon_sym_GT,
    ACTIONS(163), 1,
      anon_sym_SLASH_GT,
    STATE(31), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [773] = 5,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      sym_attribute_name,
    ACTIONS(165), 1,
      anon_sym_GT,
    ACTIONS(167), 1,
      anon_sym_SLASH_GT,
    STATE(34), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [791] = 5,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      sym_attribute_name,
    ACTIONS(169), 1,
      anon_sym_GT,
    ACTIONS(171), 1,
      anon_sym_SLASH_GT,
    STATE(35), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [809] = 4,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      sym_attribute_name,
    ACTIONS(173), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(35), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [825] = 5,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      sym_attribute_value,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    STATE(50), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [842] = 5,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(191), 1,
      aux_sym__expression_value_token1,
    STATE(40), 1,
      aux_sym_expression_repeat1,
    STATE(62), 1,
      sym__expression_value,
  [858] = 3,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      sym_attribute_name,
    ACTIONS(193), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
  [870] = 2,
    ACTIONS(201), 1,
      anon_sym_EQ,
    ACTIONS(199), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [880] = 5,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      aux_sym__expression_value_token1,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      aux_sym_expression_repeat1,
    STATE(62), 1,
      sym__expression_value,
  [896] = 5,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 1,
      aux_sym__expression_value_token1,
    STATE(41), 1,
      aux_sym_expression_repeat1,
    STATE(62), 1,
      sym__expression_value,
  [912] = 3,
    ACTIONS(215), 1,
      sym__code,
    STATE(42), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(213), 3,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [924] = 4,
    ACTIONS(218), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(222), 1,
      sym__code,
    STATE(42), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(220), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [938] = 1,
    ACTIONS(224), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [945] = 4,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      aux_sym__expression_value_token1,
    STATE(92), 1,
      sym__expression_value,
  [958] = 1,
    ACTIONS(232), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [965] = 1,
    ACTIONS(234), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [972] = 4,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    ACTIONS(238), 1,
      aux_sym__expression_value_token1,
    STATE(77), 1,
      sym__expression_value,
  [985] = 1,
    ACTIONS(240), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [992] = 1,
    ACTIONS(242), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [999] = 1,
    ACTIONS(244), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1006] = 1,
    ACTIONS(246), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1013] = 4,
    ACTIONS(248), 1,
      anon_sym_DOT,
    ACTIONS(250), 1,
      sym_module,
    ACTIONS(252), 1,
      sym_tag_name,
    STATE(32), 1,
      sym_component_name,
  [1026] = 3,
    ACTIONS(254), 1,
      aux_sym__html_comment_token1,
    ACTIONS(256), 1,
      anon_sym_DASH_DASH_GT,
    STATE(57), 1,
      aux_sym__html_comment_repeat1,
  [1036] = 2,
    ACTIONS(260), 1,
      aux_sym__expression_value_token1,
    ACTIONS(258), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1044] = 3,
    ACTIONS(262), 1,
      aux_sym__html_comment_token1,
    ACTIONS(265), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(56), 1,
      aux_sym__html_comment_repeat1,
  [1054] = 3,
    ACTIONS(265), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(267), 1,
      aux_sym__html_comment_token1,
    STATE(57), 1,
      aux_sym__html_comment_repeat1,
  [1064] = 3,
    ACTIONS(213), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(270), 1,
      sym__code,
    STATE(58), 1,
      aux_sym__hash_comment_repeat1,
  [1074] = 3,
    ACTIONS(273), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(275), 1,
      sym__code,
    STATE(58), 1,
      aux_sym__hash_comment_repeat1,
  [1084] = 3,
    ACTIONS(277), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(279), 1,
      sym__code,
    STATE(69), 1,
      aux_sym__hash_comment_repeat1,
  [1094] = 3,
    ACTIONS(275), 1,
      sym__code,
    ACTIONS(277), 1,
      anon_sym_PERCENT_GT,
    STATE(58), 1,
      aux_sym__hash_comment_repeat1,
  [1104] = 2,
    ACTIONS(283), 1,
      aux_sym__expression_value_token1,
    ACTIONS(281), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1112] = 2,
    ACTIONS(287), 1,
      aux_sym__expression_value_token1,
    ACTIONS(285), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1120] = 3,
    ACTIONS(289), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(291), 1,
      sym__code,
    STATE(61), 1,
      aux_sym__hash_comment_repeat1,
  [1130] = 3,
    ACTIONS(248), 1,
      anon_sym_DOT,
    ACTIONS(250), 1,
      sym_module,
    STATE(88), 1,
      sym_component_name,
  [1140] = 3,
    ACTIONS(293), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(295), 1,
      sym__code,
    STATE(59), 1,
      aux_sym__hash_comment_repeat1,
  [1150] = 3,
    ACTIONS(275), 1,
      sym__code,
    ACTIONS(297), 1,
      anon_sym_PERCENT_GT,
    STATE(58), 1,
      aux_sym__hash_comment_repeat1,
  [1160] = 3,
    ACTIONS(299), 1,
      aux_sym__html_comment_token1,
    ACTIONS(301), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(56), 1,
      aux_sym__html_comment_repeat1,
  [1170] = 3,
    ACTIONS(275), 1,
      sym__code,
    ACTIONS(293), 1,
      anon_sym_PERCENT_GT,
    STATE(58), 1,
      aux_sym__hash_comment_repeat1,
  [1180] = 2,
    ACTIONS(303), 1,
      anon_sym_SQUOTE,
    ACTIONS(305), 1,
      aux_sym_quoted_attribute_value_token1,
  [1187] = 2,
    ACTIONS(307), 1,
      aux_sym__html_comment_token1,
    STATE(54), 1,
      aux_sym__html_comment_repeat1,
  [1194] = 2,
    ACTIONS(309), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(311), 1,
      anon_sym_POUND,
  [1201] = 2,
    ACTIONS(313), 1,
      aux_sym__html_comment_token1,
    STATE(68), 1,
      aux_sym__html_comment_repeat1,
  [1208] = 2,
    ACTIONS(315), 1,
      sym__code,
    STATE(67), 1,
      aux_sym__hash_comment_repeat1,
  [1215] = 2,
    ACTIONS(317), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(319), 1,
      anon_sym_POUND,
  [1222] = 2,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      aux_sym_quoted_attribute_value_token2,
  [1229] = 1,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
  [1233] = 1,
    ACTIONS(325), 1,
      sym_function,
  [1237] = 1,
    ACTIONS(327), 1,
      anon_sym_html,
  [1241] = 1,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
  [1245] = 1,
    ACTIONS(331), 1,
      anon_sym_DOCTYPE,
  [1249] = 1,
    ACTIONS(333), 1,
      sym_tag_name,
  [1253] = 1,
    ACTIONS(335), 1,
      anon_sym_PERCENT_GT,
  [1257] = 1,
    ACTIONS(337), 1,
      anon_sym_SQUOTE,
  [1261] = 1,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
  [1265] = 1,
    ACTIONS(339), 1,
      sym_function,
  [1269] = 1,
    ACTIONS(341), 1,
      anon_sym_GT,
  [1273] = 1,
    ACTIONS(343), 1,
      anon_sym_GT,
  [1277] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [1281] = 1,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
  [1285] = 1,
    ACTIONS(345), 1,
      anon_sym_GT,
  [1289] = 1,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 234,
  [SMALL_STATE(7)] = 293,
  [SMALL_STATE(8)] = 349,
  [SMALL_STATE(9)] = 366,
  [SMALL_STATE(10)] = 383,
  [SMALL_STATE(11)] = 400,
  [SMALL_STATE(12)] = 417,
  [SMALL_STATE(13)] = 434,
  [SMALL_STATE(14)] = 451,
  [SMALL_STATE(15)] = 468,
  [SMALL_STATE(16)] = 485,
  [SMALL_STATE(17)] = 502,
  [SMALL_STATE(18)] = 519,
  [SMALL_STATE(19)] = 536,
  [SMALL_STATE(20)] = 553,
  [SMALL_STATE(21)] = 570,
  [SMALL_STATE(22)] = 587,
  [SMALL_STATE(23)] = 604,
  [SMALL_STATE(24)] = 621,
  [SMALL_STATE(25)] = 638,
  [SMALL_STATE(26)] = 655,
  [SMALL_STATE(27)] = 671,
  [SMALL_STATE(28)] = 687,
  [SMALL_STATE(29)] = 703,
  [SMALL_STATE(30)] = 719,
  [SMALL_STATE(31)] = 737,
  [SMALL_STATE(32)] = 755,
  [SMALL_STATE(33)] = 773,
  [SMALL_STATE(34)] = 791,
  [SMALL_STATE(35)] = 809,
  [SMALL_STATE(36)] = 825,
  [SMALL_STATE(37)] = 842,
  [SMALL_STATE(38)] = 858,
  [SMALL_STATE(39)] = 870,
  [SMALL_STATE(40)] = 880,
  [SMALL_STATE(41)] = 896,
  [SMALL_STATE(42)] = 912,
  [SMALL_STATE(43)] = 924,
  [SMALL_STATE(44)] = 938,
  [SMALL_STATE(45)] = 945,
  [SMALL_STATE(46)] = 958,
  [SMALL_STATE(47)] = 965,
  [SMALL_STATE(48)] = 972,
  [SMALL_STATE(49)] = 985,
  [SMALL_STATE(50)] = 992,
  [SMALL_STATE(51)] = 999,
  [SMALL_STATE(52)] = 1006,
  [SMALL_STATE(53)] = 1013,
  [SMALL_STATE(54)] = 1026,
  [SMALL_STATE(55)] = 1036,
  [SMALL_STATE(56)] = 1044,
  [SMALL_STATE(57)] = 1054,
  [SMALL_STATE(58)] = 1064,
  [SMALL_STATE(59)] = 1074,
  [SMALL_STATE(60)] = 1084,
  [SMALL_STATE(61)] = 1094,
  [SMALL_STATE(62)] = 1104,
  [SMALL_STATE(63)] = 1112,
  [SMALL_STATE(64)] = 1120,
  [SMALL_STATE(65)] = 1130,
  [SMALL_STATE(66)] = 1140,
  [SMALL_STATE(67)] = 1150,
  [SMALL_STATE(68)] = 1160,
  [SMALL_STATE(69)] = 1170,
  [SMALL_STATE(70)] = 1180,
  [SMALL_STATE(71)] = 1187,
  [SMALL_STATE(72)] = 1194,
  [SMALL_STATE(73)] = 1201,
  [SMALL_STATE(74)] = 1208,
  [SMALL_STATE(75)] = 1215,
  [SMALL_STATE(76)] = 1222,
  [SMALL_STATE(77)] = 1229,
  [SMALL_STATE(78)] = 1233,
  [SMALL_STATE(79)] = 1237,
  [SMALL_STATE(80)] = 1241,
  [SMALL_STATE(81)] = 1245,
  [SMALL_STATE(82)] = 1249,
  [SMALL_STATE(83)] = 1253,
  [SMALL_STATE(84)] = 1257,
  [SMALL_STATE(85)] = 1261,
  [SMALL_STATE(86)] = 1265,
  [SMALL_STATE(87)] = 1269,
  [SMALL_STATE(88)] = 1273,
  [SMALL_STATE(89)] = 1277,
  [SMALL_STATE(90)] = 1281,
  [SMALL_STATE(91)] = 1285,
  [SMALL_STATE(92)] = 1289,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(81),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(53),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(30),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(30),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(71),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(73),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(74),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(37),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(39),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(48),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(62),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(42),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(56),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(57),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(58),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [329] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
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
