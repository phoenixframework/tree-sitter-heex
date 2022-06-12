#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
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
  sym_self_closing_slot = 55,
  sym_expression = 56,
  sym__expression_value = 57,
  sym_attribute = 58,
  sym_quoted_attribute_value = 59,
  sym_directive = 60,
  sym_comment = 61,
  sym__html_comment = 62,
  sym__bang_comment = 63,
  sym__hash_comment = 64,
  sym_expression_value = 65,
  sym_partial_expression_value = 66,
  sym_component_name = 67,
  aux_sym_fragment_repeat1 = 68,
  aux_sym_component_repeat1 = 69,
  aux_sym_start_tag_repeat1 = 70,
  aux_sym_expression_repeat1 = 71,
  aux_sym__html_comment_repeat1 = 72,
  aux_sym__hash_comment_repeat1 = 73,
  alias_sym_slot_name = 74,
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
  [sym_self_closing_slot] = "self_closing_slot",
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
  [sym_self_closing_slot] = sym_self_closing_slot,
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
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 37},
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
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 14},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 33},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 33},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 33},
  [87] = {.lex_state = 33},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 23},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 23},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
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
    [sym_fragment] = STATE(98),
    [sym__node] = STATE(10),
    [sym_doctype] = STATE(10),
    [sym_tag] = STATE(10),
    [sym_component] = STATE(10),
    [sym_start_tag] = STATE(9),
    [sym_self_closing_tag] = STATE(12),
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
    STATE(6), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(12), 1,
      sym_self_closing_tag,
    STATE(27), 1,
      sym_end_component,
    STATE(35), 1,
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
    STATE(6), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(12), 1,
      sym_self_closing_tag,
    STATE(30), 1,
      sym_end_component,
    STATE(35), 1,
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
    STATE(6), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(12), 1,
      sym_self_closing_tag,
    STATE(35), 1,
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
    STATE(11), 1,
      sym_self_closing_component,
    STATE(12), 1,
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
    STATE(11), 1,
      sym_self_closing_component,
    STATE(12), 1,
      sym_self_closing_tag,
    STATE(36), 1,
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
    STATE(7), 7,
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
    STATE(11), 1,
      sym_self_closing_component,
    STATE(12), 1,
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
    ACTIONS(90), 1,
      sym_text,
    ACTIONS(92), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(12), 1,
      sym_self_closing_tag,
    STATE(25), 1,
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
    STATE(11), 1,
      sym_self_closing_component,
    STATE(12), 1,
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
    ACTIONS(90), 1,
      sym_text,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(12), 1,
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
  [708] = 2,
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
  [727] = 2,
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
  [746] = 2,
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
  [765] = 2,
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
  [784] = 2,
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
  [803] = 2,
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
  [822] = 2,
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
  [841] = 2,
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
  [860] = 2,
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
  [879] = 2,
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
  [898] = 2,
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
  [917] = 2,
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
  [936] = 2,
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
  [955] = 2,
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
  [972] = 2,
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
  [989] = 2,
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
  [1006] = 2,
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
  [1023] = 2,
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
  [1040] = 2,
    ACTIONS(202), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(204), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1057] = 2,
    ACTIONS(206), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(208), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1074] = 2,
    ACTIONS(210), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(212), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1091] = 2,
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
  [1107] = 2,
    ACTIONS(218), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(220), 7,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1123] = 2,
    ACTIONS(222), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(224), 7,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1139] = 2,
    ACTIONS(226), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(228), 7,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1155] = 5,
    ACTIONS(230), 1,
      anon_sym_GT,
    ACTIONS(232), 1,
      anon_sym_SLASH_GT,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_attribute_name,
    STATE(47), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1173] = 5,
    ACTIONS(238), 1,
      aux_sym_partial_expression_value_token1,
    ACTIONS(242), 1,
      sym__code,
    STATE(57), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(240), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(99), 2,
      sym_expression_value,
      sym_partial_expression_value,
  [1191] = 5,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_GT,
    ACTIONS(246), 1,
      anon_sym_SLASH_GT,
    STATE(44), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1209] = 4,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      sym_attribute_name,
    ACTIONS(248), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(47), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1225] = 5,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_attribute_name,
    ACTIONS(256), 1,
      anon_sym_GT,
    ACTIONS(258), 1,
      anon_sym_SLASH_GT,
    STATE(47), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1243] = 5,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_attribute_name,
    ACTIONS(260), 1,
      anon_sym_GT,
    ACTIONS(262), 1,
      anon_sym_SLASH_GT,
    STATE(50), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1261] = 5,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_attribute_name,
    ACTIONS(264), 1,
      anon_sym_GT,
    ACTIONS(266), 1,
      anon_sym_SLASH_GT,
    STATE(47), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1279] = 5,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      sym_attribute_name,
    ACTIONS(268), 1,
      anon_sym_GT,
    ACTIONS(270), 1,
      anon_sym_SLASH_GT,
    STATE(48), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1297] = 5,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      sym_attribute_value,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    STATE(61), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [1314] = 3,
    ACTIONS(280), 1,
      sym__code,
    STATE(53), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(278), 3,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1326] = 5,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      aux_sym__expression_value_token1,
    STATE(58), 1,
      aux_sym_expression_repeat1,
    STATE(73), 1,
      sym__expression_value,
  [1342] = 5,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    ACTIONS(294), 1,
      aux_sym__expression_value_token1,
    STATE(55), 1,
      aux_sym_expression_repeat1,
    STATE(73), 1,
      sym__expression_value,
  [1358] = 3,
    ACTIONS(299), 1,
      anon_sym_DOT,
    ACTIONS(301), 1,
      sym_attribute_name,
    ACTIONS(297), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
  [1370] = 4,
    ACTIONS(303), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(307), 1,
      sym__code,
    STATE(53), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(305), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1384] = 5,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      aux_sym__expression_value_token1,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_expression_repeat1,
    STATE(73), 1,
      sym__expression_value,
  [1400] = 2,
    ACTIONS(313), 1,
      anon_sym_EQ,
    ACTIONS(311), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1410] = 1,
    ACTIONS(315), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1417] = 1,
    ACTIONS(317), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1424] = 1,
    ACTIONS(319), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1431] = 1,
    ACTIONS(321), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1438] = 1,
    ACTIONS(323), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1445] = 1,
    ACTIONS(325), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1452] = 4,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      aux_sym__expression_value_token1,
    STATE(111), 1,
      sym__expression_value,
  [1465] = 4,
    ACTIONS(333), 1,
      anon_sym_DOT,
    ACTIONS(335), 1,
      sym_module,
    ACTIONS(337), 1,
      sym_tag_name,
    STATE(49), 1,
      sym_component_name,
  [1478] = 4,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 1,
      aux_sym__expression_value_token1,
    STATE(95), 1,
      sym__expression_value,
  [1491] = 1,
    ACTIONS(343), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [1498] = 3,
    ACTIONS(345), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(347), 1,
      sym__code,
    STATE(78), 1,
      aux_sym__hash_comment_repeat1,
  [1508] = 3,
    ACTIONS(333), 1,
      anon_sym_DOT,
    ACTIONS(335), 1,
      sym_module,
    STATE(107), 1,
      sym_component_name,
  [1518] = 3,
    ACTIONS(349), 1,
      aux_sym__html_comment_token1,
    ACTIONS(351), 1,
      anon_sym_DASH_DASH_GT,
    STATE(77), 1,
      aux_sym__html_comment_repeat1,
  [1528] = 2,
    ACTIONS(355), 1,
      aux_sym__expression_value_token1,
    ACTIONS(353), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1536] = 3,
    ACTIONS(357), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(359), 1,
      sym__code,
    STATE(81), 1,
      aux_sym__hash_comment_repeat1,
  [1546] = 3,
    ACTIONS(361), 1,
      aux_sym__html_comment_token1,
    ACTIONS(364), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(75), 1,
      aux_sym__html_comment_repeat1,
  [1556] = 3,
    ACTIONS(366), 1,
      aux_sym__html_comment_token1,
    ACTIONS(368), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(75), 1,
      aux_sym__html_comment_repeat1,
  [1566] = 3,
    ACTIONS(370), 1,
      aux_sym__html_comment_token1,
    ACTIONS(372), 1,
      anon_sym_DASH_DASH_GT,
    STATE(84), 1,
      aux_sym__html_comment_repeat1,
  [1576] = 3,
    ACTIONS(278), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(374), 1,
      sym__code,
    STATE(78), 1,
      aux_sym__hash_comment_repeat1,
  [1586] = 3,
    ACTIONS(377), 1,
      aux_sym__html_comment_token1,
    ACTIONS(379), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(76), 1,
      aux_sym__html_comment_repeat1,
  [1596] = 3,
    ACTIONS(347), 1,
      sym__code,
    ACTIONS(381), 1,
      anon_sym_PERCENT_GT,
    STATE(78), 1,
      aux_sym__hash_comment_repeat1,
  [1606] = 3,
    ACTIONS(347), 1,
      sym__code,
    ACTIONS(383), 1,
      anon_sym_PERCENT_GT,
    STATE(78), 1,
      aux_sym__hash_comment_repeat1,
  [1616] = 3,
    ACTIONS(383), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(385), 1,
      sym__code,
    STATE(80), 1,
      aux_sym__hash_comment_repeat1,
  [1626] = 3,
    ACTIONS(387), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(389), 1,
      sym__code,
    STATE(88), 1,
      aux_sym__hash_comment_repeat1,
  [1636] = 3,
    ACTIONS(364), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(391), 1,
      aux_sym__html_comment_token1,
    STATE(84), 1,
      aux_sym__html_comment_repeat1,
  [1646] = 3,
    ACTIONS(394), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(396), 1,
      sym__code,
    STATE(70), 1,
      aux_sym__hash_comment_repeat1,
  [1656] = 2,
    ACTIONS(400), 1,
      aux_sym__expression_value_token1,
    ACTIONS(398), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1664] = 2,
    ACTIONS(404), 1,
      aux_sym__expression_value_token1,
    ACTIONS(402), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1672] = 3,
    ACTIONS(347), 1,
      sym__code,
    ACTIONS(357), 1,
      anon_sym_PERCENT_GT,
    STATE(78), 1,
      aux_sym__hash_comment_repeat1,
  [1682] = 2,
    ACTIONS(406), 1,
      anon_sym_SQUOTE,
    ACTIONS(408), 1,
      aux_sym_quoted_attribute_value_token1,
  [1689] = 2,
    ACTIONS(410), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(412), 1,
      anon_sym_POUND,
  [1696] = 2,
    ACTIONS(414), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(416), 1,
      anon_sym_POUND,
  [1703] = 2,
    ACTIONS(406), 1,
      anon_sym_DQUOTE,
    ACTIONS(418), 1,
      aux_sym_quoted_attribute_value_token2,
  [1710] = 1,
    ACTIONS(420), 1,
      sym_tag_name,
  [1714] = 1,
    ACTIONS(422), 1,
      sym_function,
  [1718] = 1,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
  [1722] = 1,
    ACTIONS(426), 1,
      anon_sym_GT,
  [1726] = 1,
    ACTIONS(428), 1,
      anon_sym_DOCTYPE,
  [1730] = 1,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
  [1734] = 1,
    ACTIONS(432), 1,
      anon_sym_PERCENT_GT,
  [1738] = 1,
    ACTIONS(434), 1,
      anon_sym_html,
  [1742] = 1,
    ACTIONS(436), 1,
      sym_tag_name,
  [1746] = 1,
    ACTIONS(438), 1,
      anon_sym_GT,
  [1750] = 1,
    ACTIONS(440), 1,
      anon_sym_SQUOTE,
  [1754] = 1,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
  [1758] = 1,
    ACTIONS(442), 1,
      sym_tag_name,
  [1762] = 1,
    ACTIONS(444), 1,
      sym_function,
  [1766] = 1,
    ACTIONS(446), 1,
      anon_sym_GT,
  [1770] = 1,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
  [1774] = 1,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
  [1778] = 1,
    ACTIONS(448), 1,
      anon_sym_GT,
  [1782] = 1,
    ACTIONS(450), 1,
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
  [SMALL_STATE(20)] = 727,
  [SMALL_STATE(21)] = 746,
  [SMALL_STATE(22)] = 765,
  [SMALL_STATE(23)] = 784,
  [SMALL_STATE(24)] = 803,
  [SMALL_STATE(25)] = 822,
  [SMALL_STATE(26)] = 841,
  [SMALL_STATE(27)] = 860,
  [SMALL_STATE(28)] = 879,
  [SMALL_STATE(29)] = 898,
  [SMALL_STATE(30)] = 917,
  [SMALL_STATE(31)] = 936,
  [SMALL_STATE(32)] = 955,
  [SMALL_STATE(33)] = 972,
  [SMALL_STATE(34)] = 989,
  [SMALL_STATE(35)] = 1006,
  [SMALL_STATE(36)] = 1023,
  [SMALL_STATE(37)] = 1040,
  [SMALL_STATE(38)] = 1057,
  [SMALL_STATE(39)] = 1074,
  [SMALL_STATE(40)] = 1091,
  [SMALL_STATE(41)] = 1107,
  [SMALL_STATE(42)] = 1123,
  [SMALL_STATE(43)] = 1139,
  [SMALL_STATE(44)] = 1155,
  [SMALL_STATE(45)] = 1173,
  [SMALL_STATE(46)] = 1191,
  [SMALL_STATE(47)] = 1209,
  [SMALL_STATE(48)] = 1225,
  [SMALL_STATE(49)] = 1243,
  [SMALL_STATE(50)] = 1261,
  [SMALL_STATE(51)] = 1279,
  [SMALL_STATE(52)] = 1297,
  [SMALL_STATE(53)] = 1314,
  [SMALL_STATE(54)] = 1326,
  [SMALL_STATE(55)] = 1342,
  [SMALL_STATE(56)] = 1358,
  [SMALL_STATE(57)] = 1370,
  [SMALL_STATE(58)] = 1384,
  [SMALL_STATE(59)] = 1400,
  [SMALL_STATE(60)] = 1410,
  [SMALL_STATE(61)] = 1417,
  [SMALL_STATE(62)] = 1424,
  [SMALL_STATE(63)] = 1431,
  [SMALL_STATE(64)] = 1438,
  [SMALL_STATE(65)] = 1445,
  [SMALL_STATE(66)] = 1452,
  [SMALL_STATE(67)] = 1465,
  [SMALL_STATE(68)] = 1478,
  [SMALL_STATE(69)] = 1491,
  [SMALL_STATE(70)] = 1498,
  [SMALL_STATE(71)] = 1508,
  [SMALL_STATE(72)] = 1518,
  [SMALL_STATE(73)] = 1528,
  [SMALL_STATE(74)] = 1536,
  [SMALL_STATE(75)] = 1546,
  [SMALL_STATE(76)] = 1556,
  [SMALL_STATE(77)] = 1566,
  [SMALL_STATE(78)] = 1576,
  [SMALL_STATE(79)] = 1586,
  [SMALL_STATE(80)] = 1596,
  [SMALL_STATE(81)] = 1606,
  [SMALL_STATE(82)] = 1616,
  [SMALL_STATE(83)] = 1626,
  [SMALL_STATE(84)] = 1636,
  [SMALL_STATE(85)] = 1646,
  [SMALL_STATE(86)] = 1656,
  [SMALL_STATE(87)] = 1664,
  [SMALL_STATE(88)] = 1672,
  [SMALL_STATE(89)] = 1682,
  [SMALL_STATE(90)] = 1689,
  [SMALL_STATE(91)] = 1696,
  [SMALL_STATE(92)] = 1703,
  [SMALL_STATE(93)] = 1710,
  [SMALL_STATE(94)] = 1714,
  [SMALL_STATE(95)] = 1718,
  [SMALL_STATE(96)] = 1722,
  [SMALL_STATE(97)] = 1726,
  [SMALL_STATE(98)] = 1730,
  [SMALL_STATE(99)] = 1734,
  [SMALL_STATE(100)] = 1738,
  [SMALL_STATE(101)] = 1742,
  [SMALL_STATE(102)] = 1746,
  [SMALL_STATE(103)] = 1750,
  [SMALL_STATE(104)] = 1754,
  [SMALL_STATE(105)] = 1758,
  [SMALL_STATE(106)] = 1762,
  [SMALL_STATE(107)] = 1766,
  [SMALL_STATE(108)] = 1770,
  [SMALL_STATE(109)] = 1774,
  [SMALL_STATE(110)] = 1778,
  [SMALL_STATE(111)] = 1782,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(97),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(67),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(101),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(45),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(45),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(72),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(79),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(85),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(97),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(67),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(45),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(45),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(72),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(79),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(85),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_slot, 3, .production_id = 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_slot, 3, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_slot, 3, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_slot, 3, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_slot, 4, .production_id = 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_slot, 4, .production_id = 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 3, .production_id = 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 3, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 4, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 4, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(54),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(59),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(53),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(68),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(73),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(75),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(78),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 4),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(84),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [430] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
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
