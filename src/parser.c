#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 1
#define TOKEN_COUNT 33
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
  aux_sym_directive_token1 = 21,
  anon_sym_PERCENT_GT = 22,
  anon_sym_LT_BANG_DASH_DASH = 23,
  aux_sym__html_comment_token1 = 24,
  anon_sym_DASH_DASH_GT = 25,
  anon_sym_LT_PERCENT_BANG_DASH_DASH = 26,
  anon_sym_DASH_DASH_PERCENT_GT = 27,
  anon_sym_LT_PERCENT_POUND = 28,
  sym_tag_name = 29,
  sym_component_name = 30,
  sym_attribute_name = 31,
  sym_text = 32,
  sym_fragment = 33,
  sym__node = 34,
  sym_doctype = 35,
  sym_tag = 36,
  sym_component = 37,
  sym_start_tag = 38,
  sym_end_tag = 39,
  sym_self_closing_tag = 40,
  sym_start_component = 41,
  sym_end_component = 42,
  sym_self_closing_component = 43,
  sym_expression = 44,
  sym__expression_value = 45,
  sym_attribute = 46,
  sym_quoted_attribute_value = 47,
  sym_directive = 48,
  sym_comment = 49,
  sym__html_comment = 50,
  sym__bang_comment = 51,
  sym__hash_comment = 52,
  aux_sym_fragment_repeat1 = 53,
  aux_sym_start_tag_repeat1 = 54,
  aux_sym_expression_repeat1 = 55,
  aux_sym_directive_repeat1 = 56,
  aux_sym__html_comment_repeat1 = 57,
  alias_sym_expression_value = 58,
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
  [aux_sym_directive_token1] = "directive_token1",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [aux_sym__html_comment_token1] = "_html_comment_token1",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LT_PERCENT_BANG_DASH_DASH] = "<%!--",
  [anon_sym_DASH_DASH_PERCENT_GT] = "--%>",
  [anon_sym_LT_PERCENT_POUND] = "<%#",
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
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym__html_comment_repeat1] = "_html_comment_repeat1",
  [alias_sym_expression_value] = "expression_value",
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
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [aux_sym__html_comment_token1] = aux_sym__html_comment_token1,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_LT_PERCENT_BANG_DASH_DASH] = anon_sym_LT_PERCENT_BANG_DASH_DASH,
  [anon_sym_DASH_DASH_PERCENT_GT] = anon_sym_DASH_DASH_PERCENT_GT,
  [anon_sym_LT_PERCENT_POUND] = anon_sym_LT_PERCENT_POUND,
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
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym__html_comment_repeat1] = aux_sym__html_comment_repeat1,
  [alias_sym_expression_value] = alias_sym_expression_value,
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
  [aux_sym_directive_token1] = {
    .visible = false,
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
  [aux_sym_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__html_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_expression_value] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_expression_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_expression_repeat1, 2,
    aux_sym_expression_repeat1,
    alias_sym_expression_value,
  aux_sym_directive_repeat1, 2,
    aux_sym_directive_repeat1,
    alias_sym_expression_value,
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
      if (eof) ADVANCE(34);
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '%') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == 'D') ADVANCE(22);
      if (lookahead == 'h') ADVANCE(79);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '>') ADVANCE(73);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(84);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'P') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'Y') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(82);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(85);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_html);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(35);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '/') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_BANG_DASH_DASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_PERCENT_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(77);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_component_name);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(82);
      if (!sym_component_name_character_set_1(lookahead)) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_component_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(85);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 30},
  [37] = {.lex_state = 30},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 30},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 30},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 30},
  [53] = {.lex_state = 30},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 30},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 32},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 32},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 26},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
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
    [sym_tag_name] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(70),
    [sym__node] = STATE(7),
    [sym_doctype] = STATE(7),
    [sym_tag] = STATE(7),
    [sym_component] = STATE(7),
    [sym_start_tag] = STATE(5),
    [sym_self_closing_tag] = STATE(12),
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
    STATE(5), 1,
      sym_start_tag,
    STATE(8), 1,
      sym_self_closing_component,
    STATE(12), 1,
      sym_self_closing_tag,
    STATE(22), 1,
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
    STATE(5), 1,
      sym_start_tag,
    STATE(8), 1,
      sym_self_closing_component,
    STATE(12), 1,
      sym_self_closing_tag,
    STATE(15), 1,
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
    STATE(6), 7,
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
    STATE(5), 1,
      sym_start_tag,
    STATE(8), 1,
      sym_self_closing_component,
    STATE(11), 1,
      sym_end_component,
    STATE(12), 1,
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
    STATE(6), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [177] = 16,
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
    ACTIONS(29), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(5), 1,
      sym_start_tag,
    STATE(8), 1,
      sym_self_closing_component,
    STATE(12), 1,
      sym_self_closing_tag,
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
    STATE(3), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [236] = 15,
    ACTIONS(33), 1,
      anon_sym_LT_BANG,
    ACTIONS(36), 1,
      anon_sym_LT,
    ACTIONS(45), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(48), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(51), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(54), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(5), 1,
      sym_start_tag,
    STATE(8), 1,
      sym_self_closing_component,
    STATE(12), 1,
      sym_self_closing_tag,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(39), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(42), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(13), 3,
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
    STATE(5), 1,
      sym_start_tag,
    STATE(8), 1,
      sym_self_closing_component,
    STATE(12), 1,
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
    STATE(6), 7,
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
    STATE(33), 3,
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
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_attribute_name,
    ACTIONS(163), 1,
      anon_sym_GT,
    ACTIONS(165), 1,
      anon_sym_SLASH_GT,
    STATE(31), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [771] = 5,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_attribute_name,
    ACTIONS(167), 1,
      anon_sym_GT,
    ACTIONS(169), 1,
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
    ACTIONS(171), 1,
      anon_sym_GT,
    ACTIONS(173), 1,
      anon_sym_SLASH_GT,
    STATE(32), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [807] = 5,
    ACTIONS(151), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      sym_attribute_value,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    STATE(40), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [824] = 5,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    ACTIONS(186), 1,
      aux_sym__expression_value_token1,
    STATE(36), 1,
      aux_sym_expression_repeat1,
    STATE(53), 1,
      sym__expression_value,
  [840] = 5,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 1,
      aux_sym__expression_value_token1,
    STATE(39), 1,
      aux_sym_expression_repeat1,
    STATE(53), 1,
      sym__expression_value,
  [856] = 2,
    ACTIONS(197), 1,
      anon_sym_EQ,
    ACTIONS(195), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [866] = 5,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      aux_sym__expression_value_token1,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_expression_repeat1,
    STATE(53), 1,
      sym__expression_value,
  [882] = 1,
    ACTIONS(201), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [889] = 4,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      aux_sym__expression_value_token1,
    STATE(78), 1,
      sym__expression_value,
  [902] = 1,
    ACTIONS(209), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [909] = 1,
    ACTIONS(211), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [916] = 4,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 1,
      aux_sym__expression_value_token1,
    STATE(65), 1,
      sym__expression_value,
  [929] = 1,
    ACTIONS(217), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [936] = 1,
    ACTIONS(219), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [943] = 3,
    ACTIONS(221), 1,
      aux_sym__html_comment_token1,
    ACTIONS(223), 1,
      anon_sym_DASH_DASH_GT,
    STATE(50), 1,
      aux_sym__html_comment_repeat1,
  [953] = 3,
    ACTIONS(225), 1,
      aux_sym_directive_token1,
    ACTIONS(228), 1,
      anon_sym_PERCENT_GT,
    STATE(48), 1,
      aux_sym_directive_repeat1,
  [963] = 3,
    ACTIONS(230), 1,
      aux_sym_directive_token1,
    ACTIONS(232), 1,
      anon_sym_PERCENT_GT,
    STATE(48), 1,
      aux_sym_directive_repeat1,
  [973] = 3,
    ACTIONS(234), 1,
      aux_sym__html_comment_token1,
    ACTIONS(237), 1,
      anon_sym_DASH_DASH_GT,
    STATE(50), 1,
      aux_sym__html_comment_repeat1,
  [983] = 3,
    ACTIONS(237), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    ACTIONS(239), 1,
      aux_sym__html_comment_token1,
    STATE(51), 1,
      aux_sym__html_comment_repeat1,
  [993] = 2,
    ACTIONS(244), 1,
      aux_sym__expression_value_token1,
    ACTIONS(242), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1001] = 2,
    ACTIONS(248), 1,
      aux_sym__expression_value_token1,
    ACTIONS(246), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1009] = 3,
    ACTIONS(230), 1,
      aux_sym_directive_token1,
    ACTIONS(250), 1,
      anon_sym_PERCENT_GT,
    STATE(48), 1,
      aux_sym_directive_repeat1,
  [1019] = 3,
    ACTIONS(252), 1,
      aux_sym__html_comment_token1,
    ACTIONS(254), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(51), 1,
      aux_sym__html_comment_repeat1,
  [1029] = 2,
    ACTIONS(258), 1,
      aux_sym__expression_value_token1,
    ACTIONS(256), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1037] = 2,
    ACTIONS(260), 1,
      aux_sym__html_comment_token1,
    STATE(47), 1,
      aux_sym__html_comment_repeat1,
  [1044] = 2,
    ACTIONS(262), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      aux_sym_quoted_attribute_value_token1,
  [1051] = 2,
    ACTIONS(266), 1,
      aux_sym__html_comment_token1,
    STATE(55), 1,
      aux_sym__html_comment_repeat1,
  [1058] = 2,
    ACTIONS(268), 1,
      aux_sym_directive_token1,
    STATE(49), 1,
      aux_sym_directive_repeat1,
  [1065] = 2,
    ACTIONS(270), 1,
      sym_tag_name,
    ACTIONS(272), 1,
      sym_component_name,
  [1072] = 1,
    ACTIONS(274), 2,
      aux_sym_directive_token1,
      anon_sym_PERCENT_GT,
  [1077] = 2,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      aux_sym_quoted_attribute_value_token2,
  [1084] = 2,
    ACTIONS(268), 1,
      aux_sym_directive_token1,
    STATE(54), 1,
      aux_sym_directive_repeat1,
  [1091] = 1,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
  [1095] = 1,
    ACTIONS(280), 1,
      anon_sym_DOCTYPE,
  [1099] = 1,
    ACTIONS(282), 1,
      anon_sym_GT,
  [1103] = 1,
    ACTIONS(284), 1,
      sym_component_name,
  [1107] = 1,
    ACTIONS(286), 1,
      sym_tag_name,
  [1111] = 1,
    ACTIONS(288), 1,
      ts_builtin_sym_end,
  [1115] = 1,
    ACTIONS(290), 1,
      anon_sym_SQUOTE,
  [1119] = 1,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
  [1123] = 1,
    ACTIONS(292), 1,
      anon_sym_html,
  [1127] = 1,
    ACTIONS(294), 1,
      anon_sym_GT,
  [1131] = 1,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
  [1135] = 1,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
  [1139] = 1,
    ACTIONS(296), 1,
      anon_sym_GT,
  [1143] = 1,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 236,
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
  [SMALL_STATE(36)] = 824,
  [SMALL_STATE(37)] = 840,
  [SMALL_STATE(38)] = 856,
  [SMALL_STATE(39)] = 866,
  [SMALL_STATE(40)] = 882,
  [SMALL_STATE(41)] = 889,
  [SMALL_STATE(42)] = 902,
  [SMALL_STATE(43)] = 909,
  [SMALL_STATE(44)] = 916,
  [SMALL_STATE(45)] = 929,
  [SMALL_STATE(46)] = 936,
  [SMALL_STATE(47)] = 943,
  [SMALL_STATE(48)] = 953,
  [SMALL_STATE(49)] = 963,
  [SMALL_STATE(50)] = 973,
  [SMALL_STATE(51)] = 983,
  [SMALL_STATE(52)] = 993,
  [SMALL_STATE(53)] = 1001,
  [SMALL_STATE(54)] = 1009,
  [SMALL_STATE(55)] = 1019,
  [SMALL_STATE(56)] = 1029,
  [SMALL_STATE(57)] = 1037,
  [SMALL_STATE(58)] = 1044,
  [SMALL_STATE(59)] = 1051,
  [SMALL_STATE(60)] = 1058,
  [SMALL_STATE(61)] = 1065,
  [SMALL_STATE(62)] = 1072,
  [SMALL_STATE(63)] = 1077,
  [SMALL_STATE(64)] = 1084,
  [SMALL_STATE(65)] = 1091,
  [SMALL_STATE(66)] = 1095,
  [SMALL_STATE(67)] = 1099,
  [SMALL_STATE(68)] = 1103,
  [SMALL_STATE(69)] = 1107,
  [SMALL_STATE(70)] = 1111,
  [SMALL_STATE(71)] = 1115,
  [SMALL_STATE(72)] = 1119,
  [SMALL_STATE(73)] = 1123,
  [SMALL_STATE(74)] = 1127,
  [SMALL_STATE(75)] = 1131,
  [SMALL_STATE(76)] = 1135,
  [SMALL_STATE(77)] = 1139,
  [SMALL_STATE(78)] = 1143,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(66),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(61),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(60),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(60),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(57),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(59),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(64),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(37),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(38),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(44),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(53),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(62),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(50),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(51),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [288] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
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
