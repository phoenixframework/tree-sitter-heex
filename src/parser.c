#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 120
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 1
#define TOKEN_COUNT 45
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
  anon_sym_COLONlet = 14,
  anon_sym_COLONfor = 15,
  anon_sym_COLONstream = 16,
  anon_sym_COLONif = 17,
  sym_attribute_value = 18,
  anon_sym_SQUOTE = 19,
  aux_sym_quoted_attribute_value_token1 = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_quoted_attribute_value_token2 = 22,
  anon_sym_LT_PERCENT = 23,
  anon_sym_LT_PERCENT_EQ = 24,
  anon_sym_LT_PERCENT_PERCENT = 25,
  anon_sym_LT_PERCENT_PERCENT_EQ = 26,
  anon_sym_PERCENT_GT = 27,
  anon_sym_LT_BANG_DASH_DASH = 28,
  aux_sym__html_comment_token1 = 29,
  anon_sym_DASH_DASH_GT = 30,
  anon_sym_LT_PERCENT_BANG_DASH_DASH = 31,
  anon_sym_DASH_DASH_PERCENT_GT = 32,
  anon_sym_LT_PERCENT_POUND = 33,
  aux_sym_partial_expression_value_token1 = 34,
  anon_sym_do = 35,
  anon_sym_DASH_GT = 36,
  anon_sym_POUND = 37,
  anon_sym_DOT = 38,
  sym_module = 39,
  sym_function = 40,
  sym__code = 41,
  sym_tag_name = 42,
  sym_attribute_name = 43,
  sym_text = 44,
  sym_fragment = 45,
  sym__node = 46,
  sym_doctype = 47,
  sym_tag = 48,
  sym_component = 49,
  sym_slot = 50,
  sym_start_tag = 51,
  sym_end_tag = 52,
  sym_self_closing_tag = 53,
  sym_start_component = 54,
  sym_end_component = 55,
  sym_self_closing_component = 56,
  sym_start_slot = 57,
  sym_end_slot = 58,
  sym_self_closing_slot = 59,
  sym_expression = 60,
  sym__expression_value = 61,
  sym_special_attribute = 62,
  sym_special_attribute_name = 63,
  sym_attribute = 64,
  sym_quoted_attribute_value = 65,
  sym_directive = 66,
  sym_comment = 67,
  sym__html_comment = 68,
  sym__bang_comment = 69,
  sym__hash_comment = 70,
  sym_expression_value = 71,
  sym_partial_expression_value = 72,
  sym_component_name = 73,
  aux_sym_fragment_repeat1 = 74,
  aux_sym_component_repeat1 = 75,
  aux_sym_start_tag_repeat1 = 76,
  aux_sym_self_closing_component_repeat1 = 77,
  aux_sym_expression_repeat1 = 78,
  aux_sym__html_comment_repeat1 = 79,
  aux_sym__hash_comment_repeat1 = 80,
  alias_sym_slot_name = 81,
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
  [anon_sym_COLONlet] = ":let",
  [anon_sym_COLONfor] = ":for",
  [anon_sym_COLONstream] = ":stream",
  [anon_sym_COLONif] = ":if",
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
  [sym_self_closing_slot] = "self_closing_slot",
  [sym_expression] = "expression",
  [sym__expression_value] = "_expression_value",
  [sym_special_attribute] = "special_attribute",
  [sym_special_attribute_name] = "special_attribute_name",
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
  [aux_sym_self_closing_component_repeat1] = "self_closing_component_repeat1",
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
  [anon_sym_COLONlet] = anon_sym_COLONlet,
  [anon_sym_COLONfor] = anon_sym_COLONfor,
  [anon_sym_COLONstream] = anon_sym_COLONstream,
  [anon_sym_COLONif] = anon_sym_COLONif,
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
  [sym_self_closing_slot] = sym_self_closing_slot,
  [sym_expression] = sym_expression,
  [sym__expression_value] = sym__expression_value,
  [sym_special_attribute] = sym_special_attribute,
  [sym_special_attribute_name] = sym_special_attribute_name,
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
  [aux_sym_self_closing_component_repeat1] = aux_sym_self_closing_component_repeat1,
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
  [anon_sym_COLONlet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONstream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONif] = {
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
  [sym_self_closing_slot] = {
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
  [sym_special_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_special_attribute_name] = {
    .visible = true,
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
  [aux_sym_self_closing_component_repeat1] = {
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
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c >= ' ' && c <= '"')))
    : (c <= '\'' || (c < '{'
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
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == 'D') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'h') ADVANCE(126);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(127);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(127);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(89);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(91);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(51);
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
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 46:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(101);
      END_STATE();
    case 47:
      if (eof) ADVANCE(49);
      if (lookahead == '<') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLONlet);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLONfor);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLONstream);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLONif);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_BANG_DASH_DASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_PERCENT_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == '}') ADVANCE(94);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_partial_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(112);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(112);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(112);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_module);
      if (lookahead == '.') ADVANCE(46);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_function);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__code);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(112);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'C') ADVANCE(119);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'E') ADVANCE(51);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'O') ADVANCE(115);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'P') ADVANCE(116);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'T') ADVANCE(120);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'Y') ADVANCE(118);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(93);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(52);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(122);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(121);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(96);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(123);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 47},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 47},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 47},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 47},
  [21] = {.lex_state = 47},
  [22] = {.lex_state = 47},
  [23] = {.lex_state = 47},
  [24] = {.lex_state = 47},
  [25] = {.lex_state = 47},
  [26] = {.lex_state = 47},
  [27] = {.lex_state = 47},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 47},
  [30] = {.lex_state = 47},
  [31] = {.lex_state = 47},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 48},
  [38] = {.lex_state = 48},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 48},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 48},
  [44] = {.lex_state = 48},
  [45] = {.lex_state = 48},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 44},
  [70] = {.lex_state = 44},
  [71] = {.lex_state = 44},
  [72] = {.lex_state = 44},
  [73] = {.lex_state = 44},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 44},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 44},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 44},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 34},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 23},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 23},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 0},
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
    [anon_sym_COLONlet] = ACTIONS(1),
    [anon_sym_COLONfor] = ACTIONS(1),
    [anon_sym_COLONstream] = ACTIONS(1),
    [anon_sym_COLONif] = ACTIONS(1),
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
    [sym_fragment] = STATE(106),
    [sym__node] = STATE(10),
    [sym_doctype] = STATE(10),
    [sym_tag] = STATE(10),
    [sym_component] = STATE(10),
    [sym_start_tag] = STATE(9),
    [sym_self_closing_tag] = STATE(30),
    [sym_start_component] = STATE(2),
    [sym_self_closing_component] = STATE(13),
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
  [0] = 19,
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
    STATE(7), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_end_component,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(30), 1,
      sym_self_closing_tag,
    STATE(38), 1,
      sym_self_closing_slot,
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
  [69] = 19,
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
    STATE(7), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(12), 1,
      sym_end_component,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(30), 1,
      sym_self_closing_tag,
    STATE(38), 1,
      sym_self_closing_slot,
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
  [138] = 18,
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
    STATE(7), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(30), 1,
      sym_self_closing_tag,
    STATE(38), 1,
      sym_self_closing_slot,
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
  [204] = 16,
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
    STATE(13), 1,
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
  [264] = 16,
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
    STATE(13), 1,
      sym_self_closing_component,
    STATE(30), 1,
      sym_self_closing_tag,
    STATE(45), 1,
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
  [323] = 16,
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
    ACTIONS(90), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(30), 1,
      sym_self_closing_tag,
    STATE(43), 1,
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
    STATE(6), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [382] = 16,
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
    ACTIONS(88), 1,
      sym_text,
    ACTIONS(92), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(15), 1,
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
  [441] = 16,
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
      anon_sym_LT_SLASH,
    ACTIONS(94), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
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
    STATE(8), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [500] = 15,
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
    ACTIONS(88), 1,
      sym_text,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
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
  [556] = 2,
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
  [575] = 2,
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
  [594] = 2,
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
  [613] = 2,
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
  [632] = 2,
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
  [651] = 2,
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
  [670] = 2,
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
  [689] = 2,
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
  [708] = 9,
    ACTIONS(130), 1,
      anon_sym_GT,
    ACTIONS(132), 1,
      anon_sym_SLASH_GT,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_attribute_name,
    STATE(64), 1,
      aux_sym_self_closing_component_repeat1,
    STATE(113), 1,
      sym_special_attribute_name,
    STATE(46), 2,
      sym_special_attribute,
      aux_sym_start_tag_repeat1,
    STATE(53), 2,
      sym_expression,
      sym_attribute,
    ACTIONS(136), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
  [741] = 2,
    ACTIONS(142), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(140), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [760] = 2,
    ACTIONS(146), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(144), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [779] = 2,
    ACTIONS(150), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [798] = 2,
    ACTIONS(154), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [817] = 2,
    ACTIONS(158), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(156), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [836] = 2,
    ACTIONS(162), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(160), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [855] = 2,
    ACTIONS(166), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(164), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [874] = 2,
    ACTIONS(170), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(168), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [893] = 2,
    ACTIONS(174), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(172), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [912] = 2,
    ACTIONS(178), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(176), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [931] = 2,
    ACTIONS(182), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(180), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [950] = 2,
    ACTIONS(186), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(184), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [969] = 9,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_attribute_name,
    ACTIONS(188), 1,
      anon_sym_GT,
    ACTIONS(190), 1,
      anon_sym_SLASH_GT,
    STATE(66), 1,
      aux_sym_self_closing_component_repeat1,
    STATE(113), 1,
      sym_special_attribute_name,
    STATE(42), 2,
      sym_special_attribute,
      aux_sym_start_tag_repeat1,
    STATE(53), 2,
      sym_expression,
      sym_attribute,
    ACTIONS(136), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
  [1002] = 2,
    ACTIONS(194), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(192), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1021] = 6,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(204), 1,
      sym_attribute_name,
    STATE(113), 1,
      sym_special_attribute_name,
    ACTIONS(196), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    ACTIONS(201), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(34), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1047] = 7,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_attribute_name,
    ACTIONS(207), 1,
      anon_sym_GT,
    ACTIONS(209), 1,
      anon_sym_SLASH_GT,
    STATE(113), 1,
      sym_special_attribute_name,
    ACTIONS(136), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(34), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1075] = 7,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_attribute_name,
    ACTIONS(211), 1,
      anon_sym_GT,
    ACTIONS(213), 1,
      anon_sym_SLASH_GT,
    STATE(113), 1,
      sym_special_attribute_name,
    ACTIONS(136), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(35), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1103] = 2,
    ACTIONS(215), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(217), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1120] = 2,
    ACTIONS(219), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(221), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1137] = 2,
    ACTIONS(223), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(225), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1154] = 2,
    ACTIONS(227), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(229), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1171] = 2,
    ACTIONS(231), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(233), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1188] = 6,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_attribute_name,
    ACTIONS(235), 1,
      anon_sym_GT,
    STATE(113), 1,
      sym_special_attribute_name,
    ACTIONS(136), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(34), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1213] = 2,
    ACTIONS(237), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(239), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1230] = 2,
    ACTIONS(241), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(243), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1247] = 2,
    ACTIONS(245), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(247), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1264] = 6,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_attribute_name,
    ACTIONS(249), 1,
      anon_sym_GT,
    STATE(113), 1,
      sym_special_attribute_name,
    ACTIONS(136), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(34), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1289] = 2,
    ACTIONS(251), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(253), 7,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1305] = 2,
    ACTIONS(255), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(257), 7,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1321] = 2,
    ACTIONS(259), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(261), 7,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1337] = 2,
    ACTIONS(263), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(265), 7,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1353] = 2,
    ACTIONS(269), 1,
      anon_sym_EQ,
    ACTIONS(267), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1367] = 3,
    ACTIONS(273), 1,
      anon_sym_DOT,
    ACTIONS(275), 1,
      sym_attribute_name,
    ACTIONS(271), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
  [1383] = 3,
    ACTIONS(279), 1,
      anon_sym_SLASH_GT,
    ACTIONS(281), 2,
      anon_sym_LBRACE,
      sym_attribute_name,
    ACTIONS(277), 5,
      anon_sym_GT,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
  [1398] = 1,
    ACTIONS(284), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1409] = 1,
    ACTIONS(286), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1420] = 1,
    ACTIONS(288), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1431] = 1,
    ACTIONS(290), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1442] = 1,
    ACTIONS(292), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1453] = 1,
    ACTIONS(294), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1464] = 1,
    ACTIONS(296), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1475] = 1,
    ACTIONS(298), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1486] = 5,
    ACTIONS(300), 1,
      aux_sym_partial_expression_value_token1,
    ACTIONS(304), 1,
      sym__code,
    STATE(68), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(302), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(118), 2,
      sym_expression_value,
      sym_partial_expression_value,
  [1504] = 5,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      sym_attribute_value,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    STATE(59), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [1521] = 4,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_attribute_name,
    ACTIONS(312), 1,
      anon_sym_SLASH_GT,
    STATE(65), 3,
      sym_expression,
      sym_attribute,
      aux_sym_self_closing_component_repeat1,
  [1536] = 4,
    ACTIONS(314), 1,
      anon_sym_SLASH_GT,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
    ACTIONS(319), 1,
      sym_attribute_name,
    STATE(65), 3,
      sym_expression,
      sym_attribute,
      aux_sym_self_closing_component_repeat1,
  [1551] = 4,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_attribute_name,
    ACTIONS(322), 1,
      anon_sym_SLASH_GT,
    STATE(65), 3,
      sym_expression,
      sym_attribute,
      aux_sym_self_closing_component_repeat1,
  [1566] = 3,
    ACTIONS(326), 1,
      sym__code,
    STATE(67), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(324), 3,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1578] = 4,
    ACTIONS(329), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(333), 1,
      sym__code,
    STATE(67), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(331), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1592] = 5,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    ACTIONS(340), 1,
      aux_sym__expression_value_token1,
    STATE(69), 1,
      aux_sym_expression_repeat1,
    STATE(78), 1,
      sym__expression_value,
  [1608] = 5,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      aux_sym__expression_value_token1,
    STATE(71), 1,
      aux_sym_expression_repeat1,
    STATE(78), 1,
      sym__expression_value,
  [1624] = 5,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    ACTIONS(347), 1,
      aux_sym__expression_value_token1,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_expression_repeat1,
    STATE(78), 1,
      sym__expression_value,
  [1640] = 4,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    ACTIONS(355), 1,
      aux_sym__expression_value_token1,
    STATE(100), 1,
      sym__expression_value,
  [1653] = 4,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    ACTIONS(359), 1,
      aux_sym__expression_value_token1,
    STATE(119), 1,
      sym__expression_value,
  [1666] = 4,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(363), 1,
      sym_module,
    ACTIONS(365), 1,
      sym_tag_name,
    STATE(19), 1,
      sym_component_name,
  [1679] = 2,
    ACTIONS(369), 1,
      aux_sym__expression_value_token1,
    ACTIONS(367), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1687] = 3,
    ACTIONS(371), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(373), 1,
      sym__code,
    STATE(87), 1,
      aux_sym__hash_comment_repeat1,
  [1697] = 3,
    ACTIONS(371), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(375), 1,
      sym__code,
    STATE(93), 1,
      aux_sym__hash_comment_repeat1,
  [1707] = 2,
    ACTIONS(379), 1,
      aux_sym__expression_value_token1,
    ACTIONS(377), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1715] = 3,
    ACTIONS(381), 1,
      aux_sym__html_comment_token1,
    ACTIONS(383), 1,
      anon_sym_DASH_DASH_GT,
    STATE(92), 1,
      aux_sym__html_comment_repeat1,
  [1725] = 2,
    ACTIONS(387), 1,
      aux_sym__expression_value_token1,
    ACTIONS(385), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1733] = 3,
    ACTIONS(389), 1,
      aux_sym__html_comment_token1,
    ACTIONS(391), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(91), 1,
      aux_sym__html_comment_repeat1,
  [1743] = 3,
    ACTIONS(393), 1,
      aux_sym__html_comment_token1,
    ACTIONS(396), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(82), 1,
      aux_sym__html_comment_repeat1,
  [1753] = 3,
    ACTIONS(398), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(400), 1,
      sym__code,
    STATE(90), 1,
      aux_sym__hash_comment_repeat1,
  [1763] = 3,
    ACTIONS(375), 1,
      sym__code,
    ACTIONS(402), 1,
      anon_sym_PERCENT_GT,
    STATE(93), 1,
      aux_sym__hash_comment_repeat1,
  [1773] = 3,
    ACTIONS(396), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(404), 1,
      aux_sym__html_comment_token1,
    STATE(85), 1,
      aux_sym__html_comment_repeat1,
  [1783] = 3,
    ACTIONS(361), 1,
      anon_sym_DOT,
    ACTIONS(363), 1,
      sym_module,
    STATE(115), 1,
      sym_component_name,
  [1793] = 3,
    ACTIONS(375), 1,
      sym__code,
    ACTIONS(407), 1,
      anon_sym_PERCENT_GT,
    STATE(93), 1,
      aux_sym__hash_comment_repeat1,
  [1803] = 3,
    ACTIONS(407), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(409), 1,
      sym__code,
    STATE(84), 1,
      aux_sym__hash_comment_repeat1,
  [1813] = 3,
    ACTIONS(411), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(413), 1,
      sym__code,
    STATE(77), 1,
      aux_sym__hash_comment_repeat1,
  [1823] = 3,
    ACTIONS(375), 1,
      sym__code,
    ACTIONS(415), 1,
      anon_sym_PERCENT_GT,
    STATE(93), 1,
      aux_sym__hash_comment_repeat1,
  [1833] = 3,
    ACTIONS(417), 1,
      aux_sym__html_comment_token1,
    ACTIONS(419), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(82), 1,
      aux_sym__html_comment_repeat1,
  [1843] = 3,
    ACTIONS(421), 1,
      aux_sym__html_comment_token1,
    ACTIONS(423), 1,
      anon_sym_DASH_DASH_GT,
    STATE(85), 1,
      aux_sym__html_comment_repeat1,
  [1853] = 3,
    ACTIONS(324), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(425), 1,
      sym__code,
    STATE(93), 1,
      aux_sym__hash_comment_repeat1,
  [1863] = 2,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_expression,
  [1870] = 2,
    ACTIONS(428), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      aux_sym_quoted_attribute_value_token2,
  [1877] = 2,
    ACTIONS(432), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(434), 1,
      anon_sym_POUND,
  [1884] = 2,
    ACTIONS(436), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(438), 1,
      anon_sym_POUND,
  [1891] = 2,
    ACTIONS(428), 1,
      anon_sym_SQUOTE,
    ACTIONS(440), 1,
      aux_sym_quoted_attribute_value_token1,
  [1898] = 1,
    ACTIONS(442), 1,
      anon_sym_GT,
  [1902] = 1,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
  [1906] = 1,
    ACTIONS(446), 1,
      anon_sym_GT,
  [1910] = 1,
    ACTIONS(448), 1,
      sym_tag_name,
  [1914] = 1,
    ACTIONS(450), 1,
      sym_function,
  [1918] = 1,
    ACTIONS(452), 1,
      anon_sym_html,
  [1922] = 1,
    ACTIONS(454), 1,
      sym_tag_name,
  [1926] = 1,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
  [1930] = 1,
    ACTIONS(458), 1,
      anon_sym_GT,
  [1934] = 1,
    ACTIONS(460), 1,
      sym_function,
  [1938] = 1,
    ACTIONS(462), 1,
      anon_sym_EQ,
  [1942] = 1,
    ACTIONS(464), 1,
      sym_tag_name,
  [1946] = 1,
    ACTIONS(466), 1,
      anon_sym_SQUOTE,
  [1950] = 1,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
  [1954] = 1,
    ACTIONS(468), 1,
      anon_sym_EQ,
  [1958] = 1,
    ACTIONS(470), 1,
      anon_sym_DOCTYPE,
  [1962] = 1,
    ACTIONS(472), 1,
      anon_sym_GT,
  [1966] = 1,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
  [1970] = 1,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
  [1974] = 1,
    ACTIONS(474), 1,
      anon_sym_PERCENT_GT,
  [1978] = 1,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 138,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 264,
  [SMALL_STATE(7)] = 323,
  [SMALL_STATE(8)] = 382,
  [SMALL_STATE(9)] = 441,
  [SMALL_STATE(10)] = 500,
  [SMALL_STATE(11)] = 556,
  [SMALL_STATE(12)] = 575,
  [SMALL_STATE(13)] = 594,
  [SMALL_STATE(14)] = 613,
  [SMALL_STATE(15)] = 632,
  [SMALL_STATE(16)] = 651,
  [SMALL_STATE(17)] = 670,
  [SMALL_STATE(18)] = 689,
  [SMALL_STATE(19)] = 708,
  [SMALL_STATE(20)] = 741,
  [SMALL_STATE(21)] = 760,
  [SMALL_STATE(22)] = 779,
  [SMALL_STATE(23)] = 798,
  [SMALL_STATE(24)] = 817,
  [SMALL_STATE(25)] = 836,
  [SMALL_STATE(26)] = 855,
  [SMALL_STATE(27)] = 874,
  [SMALL_STATE(28)] = 893,
  [SMALL_STATE(29)] = 912,
  [SMALL_STATE(30)] = 931,
  [SMALL_STATE(31)] = 950,
  [SMALL_STATE(32)] = 969,
  [SMALL_STATE(33)] = 1002,
  [SMALL_STATE(34)] = 1021,
  [SMALL_STATE(35)] = 1047,
  [SMALL_STATE(36)] = 1075,
  [SMALL_STATE(37)] = 1103,
  [SMALL_STATE(38)] = 1120,
  [SMALL_STATE(39)] = 1137,
  [SMALL_STATE(40)] = 1154,
  [SMALL_STATE(41)] = 1171,
  [SMALL_STATE(42)] = 1188,
  [SMALL_STATE(43)] = 1213,
  [SMALL_STATE(44)] = 1230,
  [SMALL_STATE(45)] = 1247,
  [SMALL_STATE(46)] = 1264,
  [SMALL_STATE(47)] = 1289,
  [SMALL_STATE(48)] = 1305,
  [SMALL_STATE(49)] = 1321,
  [SMALL_STATE(50)] = 1337,
  [SMALL_STATE(51)] = 1353,
  [SMALL_STATE(52)] = 1367,
  [SMALL_STATE(53)] = 1383,
  [SMALL_STATE(54)] = 1398,
  [SMALL_STATE(55)] = 1409,
  [SMALL_STATE(56)] = 1420,
  [SMALL_STATE(57)] = 1431,
  [SMALL_STATE(58)] = 1442,
  [SMALL_STATE(59)] = 1453,
  [SMALL_STATE(60)] = 1464,
  [SMALL_STATE(61)] = 1475,
  [SMALL_STATE(62)] = 1486,
  [SMALL_STATE(63)] = 1504,
  [SMALL_STATE(64)] = 1521,
  [SMALL_STATE(65)] = 1536,
  [SMALL_STATE(66)] = 1551,
  [SMALL_STATE(67)] = 1566,
  [SMALL_STATE(68)] = 1578,
  [SMALL_STATE(69)] = 1592,
  [SMALL_STATE(70)] = 1608,
  [SMALL_STATE(71)] = 1624,
  [SMALL_STATE(72)] = 1640,
  [SMALL_STATE(73)] = 1653,
  [SMALL_STATE(74)] = 1666,
  [SMALL_STATE(75)] = 1679,
  [SMALL_STATE(76)] = 1687,
  [SMALL_STATE(77)] = 1697,
  [SMALL_STATE(78)] = 1707,
  [SMALL_STATE(79)] = 1715,
  [SMALL_STATE(80)] = 1725,
  [SMALL_STATE(81)] = 1733,
  [SMALL_STATE(82)] = 1743,
  [SMALL_STATE(83)] = 1753,
  [SMALL_STATE(84)] = 1763,
  [SMALL_STATE(85)] = 1773,
  [SMALL_STATE(86)] = 1783,
  [SMALL_STATE(87)] = 1793,
  [SMALL_STATE(88)] = 1803,
  [SMALL_STATE(89)] = 1813,
  [SMALL_STATE(90)] = 1823,
  [SMALL_STATE(91)] = 1833,
  [SMALL_STATE(92)] = 1843,
  [SMALL_STATE(93)] = 1853,
  [SMALL_STATE(94)] = 1863,
  [SMALL_STATE(95)] = 1870,
  [SMALL_STATE(96)] = 1877,
  [SMALL_STATE(97)] = 1884,
  [SMALL_STATE(98)] = 1891,
  [SMALL_STATE(99)] = 1898,
  [SMALL_STATE(100)] = 1902,
  [SMALL_STATE(101)] = 1906,
  [SMALL_STATE(102)] = 1910,
  [SMALL_STATE(103)] = 1914,
  [SMALL_STATE(104)] = 1918,
  [SMALL_STATE(105)] = 1922,
  [SMALL_STATE(106)] = 1926,
  [SMALL_STATE(107)] = 1930,
  [SMALL_STATE(108)] = 1934,
  [SMALL_STATE(109)] = 1938,
  [SMALL_STATE(110)] = 1942,
  [SMALL_STATE(111)] = 1946,
  [SMALL_STATE(112)] = 1950,
  [SMALL_STATE(113)] = 1954,
  [SMALL_STATE(114)] = 1958,
  [SMALL_STATE(115)] = 1962,
  [SMALL_STATE(116)] = 1966,
  [SMALL_STATE(117)] = 1970,
  [SMALL_STATE(118)] = 1974,
  [SMALL_STATE(119)] = 1978,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(114),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(74),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(105),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(62),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(62),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(79),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(81),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(83),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(114),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(74),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(62),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(62),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(79),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(81),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(83),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(70),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(109),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(51),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_slot, 4, .production_id = 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_slot, 4, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_slot, 3, .production_id = 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_slot, 3, .production_id = 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_slot, 3, .production_id = 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_slot, 3, .production_id = 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 3, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 3, .production_id = 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 4, .production_id = 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 4, .production_id = 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_self_closing_component_repeat1, 1),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 1), REDUCE(aux_sym_self_closing_component_repeat1, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_attribute, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_self_closing_component_repeat1, 2),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_self_closing_component_repeat1, 2), SHIFT_REPEAT(70),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_self_closing_component_repeat1, 2), SHIFT_REPEAT(51),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(67),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(72),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(78),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(82),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 4),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(85),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(93),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [456] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_attribute_name, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
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
