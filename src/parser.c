#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 70
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 1
#define TOKEN_COUNT 28
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
  anon_sym_LT_PERCENT_POUND = 23,
  sym_tag_name = 24,
  sym_component_name = 25,
  sym_attribute_name = 26,
  sym_text = 27,
  sym_fragment = 28,
  sym__node = 29,
  sym_doctype = 30,
  sym_tag = 31,
  sym_component = 32,
  sym_start_tag = 33,
  sym_end_tag = 34,
  sym_self_closing_tag = 35,
  sym_start_component = 36,
  sym_end_component = 37,
  sym_self_closing_component = 38,
  sym_expression = 39,
  sym__expression_value = 40,
  sym_attribute = 41,
  sym_quoted_attribute_value = 42,
  sym_directive = 43,
  sym_comment = 44,
  aux_sym_fragment_repeat1 = 45,
  aux_sym_start_tag_repeat1 = 46,
  aux_sym_expression_repeat1 = 47,
  aux_sym_directive_repeat1 = 48,
  alias_sym_expression_value = 49,
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
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
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
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
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
      if (eof) ADVANCE(23);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '%') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == 'D') ADVANCE(11);
      if (lookahead == 'h') ADVANCE(57);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'P') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'Y') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(63);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_html);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '%') ADVANCE(44);
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '%') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '%') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_component_name);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      if (!sym_component_name_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_component_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
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
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(60),
    [sym__node] = STATE(7),
    [sym_doctype] = STATE(7),
    [sym_tag] = STATE(7),
    [sym_component] = STATE(7),
    [sym_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(10),
    [sym_start_component] = STATE(5),
    [sym_self_closing_component] = STATE(11),
    [sym_directive] = STATE(7),
    [sym_comment] = STATE(7),
    [aux_sym_fragment_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_BANG] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(11),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(9),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(11),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(19), 1,
      anon_sym_LT_BANG,
    ACTIONS(22), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(34), 1,
      sym_text,
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(25), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(28), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(2), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [46] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_text,
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(13), 1,
      sym_end_component,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(2), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [94] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(39), 1,
      sym_text,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(14), 1,
      sym_end_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(2), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [142] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(43), 1,
      sym_text,
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(20), 1,
      sym_end_component,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(3), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [190] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    ACTIONS(45), 1,
      sym_text,
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(18), 1,
      sym_end_tag,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(4), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [238] = 12,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(39), 1,
      sym_text,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(2), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [283] = 2,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [298] = 2,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [313] = 2,
    ACTIONS(59), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [328] = 2,
    ACTIONS(63), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [343] = 2,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [358] = 2,
    ACTIONS(71), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [373] = 2,
    ACTIONS(75), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [388] = 2,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [403] = 2,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [418] = 2,
    ACTIONS(87), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [433] = 2,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(89), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [448] = 2,
    ACTIONS(95), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [463] = 2,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [478] = 2,
    ACTIONS(103), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [493] = 2,
    ACTIONS(107), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [508] = 2,
    ACTIONS(111), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(109), 6,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [522] = 2,
    ACTIONS(115), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(113), 6,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [536] = 2,
    ACTIONS(119), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(117), 6,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [550] = 2,
    ACTIONS(123), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(121), 6,
      anon_sym_LT_BANG,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [564] = 5,
    ACTIONS(125), 1,
      anon_sym_GT,
    ACTIONS(127), 1,
      anon_sym_SLASH_GT,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym_attribute_name,
    STATE(28), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [582] = 4,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(138), 1,
      sym_attribute_name,
    ACTIONS(133), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(28), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [598] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym_attribute_name,
    ACTIONS(141), 1,
      anon_sym_GT,
    ACTIONS(143), 1,
      anon_sym_SLASH_GT,
    STATE(28), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [616] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym_attribute_name,
    ACTIONS(145), 1,
      anon_sym_GT,
    ACTIONS(147), 1,
      anon_sym_SLASH_GT,
    STATE(29), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [634] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      sym_attribute_name,
    ACTIONS(149), 1,
      anon_sym_GT,
    ACTIONS(151), 1,
      anon_sym_SLASH_GT,
    STATE(27), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [652] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      sym_attribute_value,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    STATE(40), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [669] = 2,
    ACTIONS(161), 1,
      anon_sym_EQ,
    ACTIONS(159), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [679] = 5,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 1,
      aux_sym__expression_value_token1,
    STATE(34), 1,
      aux_sym_expression_repeat1,
    STATE(48), 1,
      sym__expression_value,
  [695] = 5,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      aux_sym__expression_value_token1,
    STATE(34), 1,
      aux_sym_expression_repeat1,
    STATE(48), 1,
      sym__expression_value,
  [711] = 5,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      aux_sym__expression_value_token1,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_expression_repeat1,
    STATE(48), 1,
      sym__expression_value,
  [727] = 4,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      aux_sym__expression_value_token1,
    STATE(69), 1,
      sym__expression_value,
  [740] = 1,
    ACTIONS(185), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [747] = 1,
    ACTIONS(187), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [754] = 1,
    ACTIONS(189), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [761] = 1,
    ACTIONS(191), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [768] = 4,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(195), 1,
      aux_sym__expression_value_token1,
    STATE(58), 1,
      sym__expression_value,
  [781] = 1,
    ACTIONS(197), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [788] = 3,
    ACTIONS(199), 1,
      aux_sym_directive_token1,
    ACTIONS(201), 1,
      anon_sym_PERCENT_GT,
    STATE(47), 1,
      aux_sym_directive_repeat1,
  [798] = 2,
    ACTIONS(205), 1,
      aux_sym__expression_value_token1,
    ACTIONS(203), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [806] = 2,
    ACTIONS(209), 1,
      aux_sym__expression_value_token1,
    ACTIONS(207), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [814] = 3,
    ACTIONS(211), 1,
      aux_sym_directive_token1,
    ACTIONS(214), 1,
      anon_sym_PERCENT_GT,
    STATE(47), 1,
      aux_sym_directive_repeat1,
  [824] = 2,
    ACTIONS(218), 1,
      aux_sym__expression_value_token1,
    ACTIONS(216), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [832] = 3,
    ACTIONS(199), 1,
      aux_sym_directive_token1,
    ACTIONS(220), 1,
      anon_sym_PERCENT_GT,
    STATE(47), 1,
      aux_sym_directive_repeat1,
  [842] = 2,
    ACTIONS(222), 1,
      aux_sym_directive_token1,
    STATE(49), 1,
      aux_sym_directive_repeat1,
  [849] = 2,
    ACTIONS(222), 1,
      aux_sym_directive_token1,
    STATE(44), 1,
      aux_sym_directive_repeat1,
  [856] = 2,
    ACTIONS(224), 1,
      sym_tag_name,
    ACTIONS(226), 1,
      sym_component_name,
  [863] = 2,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      aux_sym_quoted_attribute_value_token1,
  [870] = 2,
    ACTIONS(228), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      aux_sym_quoted_attribute_value_token2,
  [877] = 1,
    ACTIONS(234), 2,
      aux_sym_directive_token1,
      anon_sym_PERCENT_GT,
  [882] = 1,
    ACTIONS(236), 1,
      anon_sym_GT,
  [886] = 1,
    ACTIONS(238), 1,
      anon_sym_GT,
  [890] = 1,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
  [894] = 1,
    ACTIONS(242), 1,
      anon_sym_DOCTYPE,
  [898] = 1,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
  [902] = 1,
    ACTIONS(246), 1,
      anon_sym_html,
  [906] = 1,
    ACTIONS(248), 1,
      sym_tag_name,
  [910] = 1,
    ACTIONS(250), 1,
      anon_sym_SQUOTE,
  [914] = 1,
    ACTIONS(250), 1,
      anon_sym_DQUOTE,
  [918] = 1,
    ACTIONS(252), 1,
      sym_component_name,
  [922] = 1,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
  [926] = 1,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
  [930] = 1,
    ACTIONS(254), 1,
      anon_sym_GT,
  [934] = 1,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 142,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 238,
  [SMALL_STATE(8)] = 283,
  [SMALL_STATE(9)] = 298,
  [SMALL_STATE(10)] = 313,
  [SMALL_STATE(11)] = 328,
  [SMALL_STATE(12)] = 343,
  [SMALL_STATE(13)] = 358,
  [SMALL_STATE(14)] = 373,
  [SMALL_STATE(15)] = 388,
  [SMALL_STATE(16)] = 403,
  [SMALL_STATE(17)] = 418,
  [SMALL_STATE(18)] = 433,
  [SMALL_STATE(19)] = 448,
  [SMALL_STATE(20)] = 463,
  [SMALL_STATE(21)] = 478,
  [SMALL_STATE(22)] = 493,
  [SMALL_STATE(23)] = 508,
  [SMALL_STATE(24)] = 522,
  [SMALL_STATE(25)] = 536,
  [SMALL_STATE(26)] = 550,
  [SMALL_STATE(27)] = 564,
  [SMALL_STATE(28)] = 582,
  [SMALL_STATE(29)] = 598,
  [SMALL_STATE(30)] = 616,
  [SMALL_STATE(31)] = 634,
  [SMALL_STATE(32)] = 652,
  [SMALL_STATE(33)] = 669,
  [SMALL_STATE(34)] = 679,
  [SMALL_STATE(35)] = 695,
  [SMALL_STATE(36)] = 711,
  [SMALL_STATE(37)] = 727,
  [SMALL_STATE(38)] = 740,
  [SMALL_STATE(39)] = 747,
  [SMALL_STATE(40)] = 754,
  [SMALL_STATE(41)] = 761,
  [SMALL_STATE(42)] = 768,
  [SMALL_STATE(43)] = 781,
  [SMALL_STATE(44)] = 788,
  [SMALL_STATE(45)] = 798,
  [SMALL_STATE(46)] = 806,
  [SMALL_STATE(47)] = 814,
  [SMALL_STATE(48)] = 824,
  [SMALL_STATE(49)] = 832,
  [SMALL_STATE(50)] = 842,
  [SMALL_STATE(51)] = 849,
  [SMALL_STATE(52)] = 856,
  [SMALL_STATE(53)] = 863,
  [SMALL_STATE(54)] = 870,
  [SMALL_STATE(55)] = 877,
  [SMALL_STATE(56)] = 882,
  [SMALL_STATE(57)] = 886,
  [SMALL_STATE(58)] = 890,
  [SMALL_STATE(59)] = 894,
  [SMALL_STATE(60)] = 898,
  [SMALL_STATE(61)] = 902,
  [SMALL_STATE(62)] = 906,
  [SMALL_STATE(63)] = 910,
  [SMALL_STATE(64)] = 914,
  [SMALL_STATE(65)] = 918,
  [SMALL_STATE(66)] = 922,
  [SMALL_STATE(67)] = 926,
  [SMALL_STATE(68)] = 930,
  [SMALL_STATE(69)] = 934,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(59),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(52),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(51),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(51),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(50),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(36),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(33),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(42),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(48),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(55),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [244] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
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
