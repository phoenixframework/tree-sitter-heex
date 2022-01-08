#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  sym__code = 32,
  sym_tag_name = 33,
  sym_component_name = 34,
  sym_attribute_name = 35,
  sym_text = 36,
  sym_fragment = 37,
  sym__node = 38,
  sym_doctype = 39,
  sym_tag = 40,
  sym_component = 41,
  sym_start_tag = 42,
  sym_end_tag = 43,
  sym_self_closing_tag = 44,
  sym_start_component = 45,
  sym_end_component = 46,
  sym_self_closing_component = 47,
  sym_expression = 48,
  sym__expression_value = 49,
  sym_attribute = 50,
  sym_quoted_attribute_value = 51,
  sym_directive = 52,
  sym_comment = 53,
  sym__html_comment = 54,
  sym__bang_comment = 55,
  sym__hash_comment = 56,
  sym_expression_value = 57,
  sym_partial_expression_value = 58,
  aux_sym_fragment_repeat1 = 59,
  aux_sym_start_tag_repeat1 = 60,
  aux_sym_expression_repeat1 = 61,
  aux_sym__html_comment_repeat1 = 62,
  aux_sym__hash_comment_repeat1 = 63,
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
  [sym__code] = "_code",
  [sym_tag_name] = "tag_name",
  [sym_component_name] = "component_name",
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
  [sym__code] = sym__code,
  [sym_tag_name] = sym_tag_name,
  [sym_component_name] = sym_component_name,
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
  [sym__code] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_component_name] = {
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

static inline bool sym_component_name_character_set_1(int32_t c) {
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
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '%') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'h') ADVANCE(33);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(97);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(73);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'P') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'Y') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(98);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '<') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(98);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(11);
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
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_BANG_DASH_DASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_PERCENT_GT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
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
          lookahead != '%') ADVANCE(92);
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
          lookahead != '%') ADVANCE(92);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(92);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__code);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(92);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_component_name);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(95);
      if (!sym_component_name_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_component_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(98);
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
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 37},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 37},
  [16] = {.lex_state = 37},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 37},
  [19] = {.lex_state = 37},
  [20] = {.lex_state = 37},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 37},
  [24] = {.lex_state = 37},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 34},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 34},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 34},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 34},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 34},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 34},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 34},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 36},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 36},
  [87] = {.lex_state = 0},
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
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_PERCENT_GT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [aux_sym_partial_expression_value_token1] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(75),
    [sym__node] = STATE(7),
    [sym_doctype] = STATE(7),
    [sym_tag] = STATE(7),
    [sym_component] = STATE(7),
    [sym_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(11),
    [sym_start_component] = STATE(2),
    [sym_self_closing_component] = STATE(8),
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
    STATE(8), 1,
      sym_self_closing_component,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(21), 1,
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
    STATE(8), 1,
      sym_self_closing_component,
    STATE(11), 1,
      sym_self_closing_tag,
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
    STATE(8), 1,
      sym_self_closing_component,
    STATE(11), 1,
      sym_self_closing_tag,
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
    STATE(8), 1,
      sym_self_closing_component,
    STATE(11), 1,
      sym_self_closing_tag,
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
    STATE(8), 1,
      sym_self_closing_component,
    STATE(11), 1,
      sym_self_closing_tag,
    STATE(12), 1,
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
    STATE(8), 1,
      sym_self_closing_component,
    STATE(11), 1,
      sym_self_closing_tag,
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
      anon_sym_GT,
    ACTIONS(149), 1,
      anon_sym_SLASH_GT,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_attribute_name,
    STATE(31), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [737] = 4,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      sym_attribute_name,
    ACTIONS(155), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(31), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [753] = 5,
    ACTIONS(163), 1,
      aux_sym_partial_expression_value_token1,
    ACTIONS(167), 1,
      sym__code,
    STATE(39), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(165), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(74), 2,
      sym_expression_value,
      sym_partial_expression_value,
  [771] = 5,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_attribute_name,
    ACTIONS(169), 1,
      anon_sym_GT,
    ACTIONS(171), 1,
      anon_sym_SLASH_GT,
    STATE(31), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [789] = 5,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_attribute_name,
    ACTIONS(173), 1,
      anon_sym_GT,
    ACTIONS(175), 1,
      anon_sym_SLASH_GT,
    STATE(33), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [807] = 5,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_attribute_name,
    ACTIONS(177), 1,
      anon_sym_GT,
    ACTIONS(179), 1,
      anon_sym_SLASH_GT,
    STATE(30), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [825] = 5,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      sym_attribute_value,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    STATE(46), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [842] = 5,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(191), 1,
      aux_sym__expression_value_token1,
    STATE(42), 1,
      aux_sym_expression_repeat1,
    STATE(57), 1,
      sym__expression_value,
  [858] = 2,
    ACTIONS(195), 1,
      anon_sym_EQ,
    ACTIONS(193), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [868] = 4,
    ACTIONS(197), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(201), 1,
      sym__code,
    STATE(41), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(199), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [882] = 5,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      aux_sym__expression_value_token1,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      aux_sym_expression_repeat1,
    STATE(57), 1,
      sym__expression_value,
  [898] = 3,
    ACTIONS(207), 1,
      sym__code,
    STATE(41), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(205), 3,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [910] = 5,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      aux_sym__expression_value_token1,
    STATE(42), 1,
      aux_sym_expression_repeat1,
    STATE(57), 1,
      sym__expression_value,
  [926] = 1,
    ACTIONS(218), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [933] = 4,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(224), 1,
      aux_sym__expression_value_token1,
    STATE(81), 1,
      sym__expression_value,
  [946] = 1,
    ACTIONS(226), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [953] = 1,
    ACTIONS(228), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [960] = 1,
    ACTIONS(230), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [967] = 4,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    ACTIONS(234), 1,
      aux_sym__expression_value_token1,
    STATE(87), 1,
      sym__expression_value,
  [980] = 1,
    ACTIONS(236), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [987] = 3,
    ACTIONS(238), 1,
      aux_sym__html_comment_token1,
    ACTIONS(240), 1,
      anon_sym_DASH_DASH_GT,
    STATE(53), 1,
      aux_sym__html_comment_repeat1,
  [997] = 3,
    ACTIONS(242), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(244), 1,
      sym__code,
    STATE(54), 1,
      aux_sym__hash_comment_repeat1,
  [1007] = 3,
    ACTIONS(246), 1,
      aux_sym__html_comment_token1,
    ACTIONS(249), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(52), 1,
      aux_sym__html_comment_repeat1,
  [1017] = 3,
    ACTIONS(249), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(251), 1,
      aux_sym__html_comment_token1,
    STATE(53), 1,
      aux_sym__html_comment_repeat1,
  [1027] = 3,
    ACTIONS(205), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(254), 1,
      sym__code,
    STATE(54), 1,
      aux_sym__hash_comment_repeat1,
  [1037] = 2,
    ACTIONS(259), 1,
      aux_sym__expression_value_token1,
    ACTIONS(257), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1045] = 3,
    ACTIONS(261), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(263), 1,
      sym__code,
    STATE(51), 1,
      aux_sym__hash_comment_repeat1,
  [1055] = 2,
    ACTIONS(267), 1,
      aux_sym__expression_value_token1,
    ACTIONS(265), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1063] = 3,
    ACTIONS(244), 1,
      sym__code,
    ACTIONS(261), 1,
      anon_sym_PERCENT_GT,
    STATE(54), 1,
      aux_sym__hash_comment_repeat1,
  [1073] = 3,
    ACTIONS(244), 1,
      sym__code,
    ACTIONS(269), 1,
      anon_sym_PERCENT_GT,
    STATE(54), 1,
      aux_sym__hash_comment_repeat1,
  [1083] = 2,
    ACTIONS(273), 1,
      aux_sym__expression_value_token1,
    ACTIONS(271), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1091] = 3,
    ACTIONS(275), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(277), 1,
      sym__code,
    STATE(58), 1,
      aux_sym__hash_comment_repeat1,
  [1101] = 3,
    ACTIONS(244), 1,
      sym__code,
    ACTIONS(279), 1,
      anon_sym_PERCENT_GT,
    STATE(54), 1,
      aux_sym__hash_comment_repeat1,
  [1111] = 3,
    ACTIONS(281), 1,
      aux_sym__html_comment_token1,
    ACTIONS(283), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(52), 1,
      aux_sym__html_comment_repeat1,
  [1121] = 3,
    ACTIONS(242), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(285), 1,
      sym__code,
    STATE(59), 1,
      aux_sym__hash_comment_repeat1,
  [1131] = 2,
    ACTIONS(287), 1,
      aux_sym__html_comment_token1,
    STATE(63), 1,
      aux_sym__html_comment_repeat1,
  [1138] = 2,
    ACTIONS(289), 1,
      sym__code,
    STATE(62), 1,
      aux_sym__hash_comment_repeat1,
  [1145] = 2,
    ACTIONS(291), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(293), 1,
      anon_sym_POUND,
  [1152] = 2,
    ACTIONS(295), 1,
      sym_tag_name,
    ACTIONS(297), 1,
      sym_component_name,
  [1159] = 2,
    ACTIONS(299), 1,
      aux_sym__html_comment_token1,
    STATE(50), 1,
      aux_sym__html_comment_repeat1,
  [1166] = 2,
    ACTIONS(301), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(303), 1,
      anon_sym_POUND,
  [1173] = 2,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
    ACTIONS(307), 1,
      aux_sym_quoted_attribute_value_token1,
  [1180] = 2,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    ACTIONS(309), 1,
      aux_sym_quoted_attribute_value_token2,
  [1187] = 1,
    ACTIONS(311), 1,
      anon_sym_html,
  [1191] = 1,
    ACTIONS(313), 1,
      anon_sym_PERCENT_GT,
  [1195] = 1,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
  [1199] = 1,
    ACTIONS(317), 1,
      sym_component_name,
  [1203] = 1,
    ACTIONS(319), 1,
      anon_sym_GT,
  [1207] = 1,
    ACTIONS(321), 1,
      anon_sym_GT,
  [1211] = 1,
    ACTIONS(323), 1,
      anon_sym_SQUOTE,
  [1215] = 1,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
  [1219] = 1,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
  [1223] = 1,
    ACTIONS(327), 1,
      anon_sym_DOCTYPE,
  [1227] = 1,
    ACTIONS(329), 1,
      anon_sym_GT,
  [1231] = 1,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
  [1235] = 1,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
  [1239] = 1,
    ACTIONS(331), 1,
      sym_tag_name,
  [1243] = 1,
    ACTIONS(333), 1,
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
  [SMALL_STATE(32)] = 753,
  [SMALL_STATE(33)] = 771,
  [SMALL_STATE(34)] = 789,
  [SMALL_STATE(35)] = 807,
  [SMALL_STATE(36)] = 825,
  [SMALL_STATE(37)] = 842,
  [SMALL_STATE(38)] = 858,
  [SMALL_STATE(39)] = 868,
  [SMALL_STATE(40)] = 882,
  [SMALL_STATE(41)] = 898,
  [SMALL_STATE(42)] = 910,
  [SMALL_STATE(43)] = 926,
  [SMALL_STATE(44)] = 933,
  [SMALL_STATE(45)] = 946,
  [SMALL_STATE(46)] = 953,
  [SMALL_STATE(47)] = 960,
  [SMALL_STATE(48)] = 967,
  [SMALL_STATE(49)] = 980,
  [SMALL_STATE(50)] = 987,
  [SMALL_STATE(51)] = 997,
  [SMALL_STATE(52)] = 1007,
  [SMALL_STATE(53)] = 1017,
  [SMALL_STATE(54)] = 1027,
  [SMALL_STATE(55)] = 1037,
  [SMALL_STATE(56)] = 1045,
  [SMALL_STATE(57)] = 1055,
  [SMALL_STATE(58)] = 1063,
  [SMALL_STATE(59)] = 1073,
  [SMALL_STATE(60)] = 1083,
  [SMALL_STATE(61)] = 1091,
  [SMALL_STATE(62)] = 1101,
  [SMALL_STATE(63)] = 1111,
  [SMALL_STATE(64)] = 1121,
  [SMALL_STATE(65)] = 1131,
  [SMALL_STATE(66)] = 1138,
  [SMALL_STATE(67)] = 1145,
  [SMALL_STATE(68)] = 1152,
  [SMALL_STATE(69)] = 1159,
  [SMALL_STATE(70)] = 1166,
  [SMALL_STATE(71)] = 1173,
  [SMALL_STATE(72)] = 1180,
  [SMALL_STATE(73)] = 1187,
  [SMALL_STATE(74)] = 1191,
  [SMALL_STATE(75)] = 1195,
  [SMALL_STATE(76)] = 1199,
  [SMALL_STATE(77)] = 1203,
  [SMALL_STATE(78)] = 1207,
  [SMALL_STATE(79)] = 1211,
  [SMALL_STATE(80)] = 1215,
  [SMALL_STATE(81)] = 1219,
  [SMALL_STATE(82)] = 1223,
  [SMALL_STATE(83)] = 1227,
  [SMALL_STATE(84)] = 1231,
  [SMALL_STATE(85)] = 1235,
  [SMALL_STATE(86)] = 1239,
  [SMALL_STATE(87)] = 1243,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(82),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(68),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(32),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(32),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(69),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(65),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(66),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(40),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(38),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(41),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(44),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(57),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(52),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(53),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(54),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [315] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
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
