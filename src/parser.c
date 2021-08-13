#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASH = 3,
  anon_sym_SLASH_GT = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  aux_sym_expression_value_token1 = 7,
  anon_sym_LBRACE_RBRACE = 8,
  anon_sym_EQ = 9,
  sym_attribute_value = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_quoted_attribute_value_token1 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_quoted_attribute_value_token2 = 14,
  anon_sym_LT_PERCENT = 15,
  anon_sym_LT_PERCENT_EQ = 16,
  anon_sym_LT_PERCENT_PERCENT = 17,
  anon_sym_LT_PERCENT_PERCENT_EQ = 18,
  aux_sym_directive_token1 = 19,
  anon_sym_PERCENT_GT = 20,
  anon_sym_LT_PERCENT_POUND = 21,
  sym_tag_name = 22,
  sym_component_name = 23,
  sym_attribute_name = 24,
  sym_text = 25,
  sym_fragment = 26,
  sym__node = 27,
  sym_tag = 28,
  sym_component = 29,
  sym_start_tag = 30,
  sym_end_tag = 31,
  sym_self_closing_tag = 32,
  sym_start_component = 33,
  sym_end_component = 34,
  sym_self_closing_component = 35,
  sym_expression = 36,
  sym_expression_value = 37,
  sym_attribute = 38,
  sym_quoted_attribute_value = 39,
  sym_directive = 40,
  sym_comment = 41,
  aux_sym_fragment_repeat1 = 42,
  aux_sym_start_tag_repeat1 = 43,
  aux_sym_directive_repeat1 = 44,
  anon_alias_sym_expression_value = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_expression_value_token1] = "expression_value_token1",
  [anon_sym_LBRACE_RBRACE] = "{}",
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
  [sym_tag] = "tag",
  [sym_component] = "component",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_start_component] = "start_component",
  [sym_end_component] = "end_component",
  [sym_self_closing_component] = "self_closing_component",
  [sym_expression] = "expression",
  [sym_expression_value] = "expression_value",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym_directive] = "directive",
  [sym_comment] = "comment",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [anon_alias_sym_expression_value] = "expression_value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_expression_value_token1] = aux_sym_expression_value_token1,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
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
  [sym_tag] = sym_tag,
  [sym_component] = sym_component,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_start_component] = sym_start_component,
  [sym_end_component] = sym_end_component,
  [sym_self_closing_component] = sym_self_closing_component,
  [sym_expression] = sym_expression,
  [sym_expression_value] = sym_expression_value,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym_directive] = sym_directive,
  [sym_comment] = sym_comment,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [anon_alias_sym_expression_value] = anon_alias_sym_expression_value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [aux_sym_expression_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
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
  [sym_expression_value] = {
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
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_expression_value] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_expression_value,
  },
  [2] = {
    [1] = anon_alias_sym_expression_value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_expression_value, 2,
    sym_expression_value,
    anon_alias_sym_expression_value,
  aux_sym_directive_repeat1, 2,
    aux_sym_directive_repeat1,
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
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(14);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '%') ADVANCE(34);
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(27);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_attribute_value);
      if (lookahead == '!' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < ' ' || '"' < lookahead) &&
          lookahead != '\'' &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '%') ADVANCE(36);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '%') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_component_name);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(47);
      if (!sym_component_name_character_set_1(lookahead)) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_component_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(50);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_attribute_value] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [sym_component_name] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(52),
    [sym__node] = STATE(7),
    [sym_tag] = STATE(7),
    [sym_component] = STATE(7),
    [sym_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(10),
    [sym_start_component] = STATE(2),
    [sym_self_closing_component] = STATE(11),
    [sym_directive] = STATE(7),
    [sym_comment] = STATE(7),
    [aux_sym_fragment_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LT_PERCENT] = ACTIONS(7),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(9),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(7),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(9),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(11),
    [sym_text] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(15), 1,
      anon_sym_LT_SLASH,
    ACTIONS(17), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(20), 1,
      sym_end_component,
    ACTIONS(7), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(3), 6,
      sym__node,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [44] = 12,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(15), 1,
      anon_sym_LT_SLASH,
    ACTIONS(19), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(12), 1,
      sym_end_component,
    ACTIONS(7), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(5), 6,
      sym__node,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [88] = 12,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(13), 1,
      sym_end_tag,
    ACTIONS(7), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(5), 6,
      sym__node,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [132] = 11,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(34), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(37), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    ACTIONS(28), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(31), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(5), 6,
      sym__node,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [174] = 12,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(21), 1,
      anon_sym_LT_SLASH,
    ACTIONS(40), 1,
      sym_text,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    STATE(17), 1,
      sym_end_tag,
    ACTIONS(7), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(4), 6,
      sym__node,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [218] = 11,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_self_closing_tag,
    STATE(11), 1,
      sym_self_closing_component,
    ACTIONS(7), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(5), 6,
      sym__node,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [259] = 2,
    ACTIONS(46), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(44), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [273] = 2,
    ACTIONS(50), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(48), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [287] = 2,
    ACTIONS(54), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(52), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [301] = 2,
    ACTIONS(58), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [315] = 2,
    ACTIONS(62), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(60), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [329] = 2,
    ACTIONS(66), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [343] = 2,
    ACTIONS(70), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [357] = 2,
    ACTIONS(74), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [371] = 2,
    ACTIONS(78), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [385] = 2,
    ACTIONS(82), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [399] = 2,
    ACTIONS(86), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [413] = 2,
    ACTIONS(90), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(88), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [427] = 2,
    ACTIONS(94), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(92), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [441] = 2,
    ACTIONS(98), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(96), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [455] = 2,
    ACTIONS(100), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(102), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [468] = 2,
    ACTIONS(104), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(106), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [481] = 2,
    ACTIONS(108), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(110), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [494] = 2,
    ACTIONS(112), 3,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(114), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [507] = 5,
    ACTIONS(116), 1,
      anon_sym_GT,
    ACTIONS(118), 1,
      anon_sym_SLASH_GT,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym_attribute_name,
    STATE(27), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [525] = 4,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      sym_attribute_name,
    ACTIONS(124), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(27), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [541] = 5,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym_attribute_name,
    ACTIONS(132), 1,
      anon_sym_GT,
    ACTIONS(134), 1,
      anon_sym_SLASH_GT,
    STATE(27), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [559] = 5,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym_attribute_name,
    ACTIONS(136), 1,
      anon_sym_GT,
    ACTIONS(138), 1,
      anon_sym_SLASH_GT,
    STATE(26), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [577] = 5,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      sym_attribute_name,
    ACTIONS(140), 1,
      anon_sym_GT,
    ACTIONS(142), 1,
      anon_sym_SLASH_GT,
    STATE(28), 3,
      sym_expression,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [595] = 5,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      sym_attribute_value,
    ACTIONS(146), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
    STATE(38), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [612] = 2,
    ACTIONS(152), 1,
      anon_sym_EQ,
    ACTIONS(150), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [622] = 1,
    ACTIONS(154), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [629] = 1,
    ACTIONS(156), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [636] = 4,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      aux_sym_expression_value_token1,
    ACTIONS(162), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(49), 1,
      sym_expression_value,
  [649] = 1,
    ACTIONS(164), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [656] = 4,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 1,
      aux_sym_expression_value_token1,
    ACTIONS(162), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(48), 1,
      sym_expression_value,
  [669] = 1,
    ACTIONS(166), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
  [676] = 3,
    ACTIONS(168), 1,
      aux_sym_directive_token1,
    ACTIONS(170), 1,
      anon_sym_PERCENT_GT,
    STATE(41), 1,
      aux_sym_directive_repeat1,
  [686] = 3,
    ACTIONS(168), 1,
      aux_sym_directive_token1,
    ACTIONS(172), 1,
      anon_sym_PERCENT_GT,
    STATE(41), 1,
      aux_sym_directive_repeat1,
  [696] = 3,
    ACTIONS(174), 1,
      aux_sym_directive_token1,
    ACTIONS(177), 1,
      anon_sym_PERCENT_GT,
    STATE(41), 1,
      aux_sym_directive_repeat1,
  [706] = 2,
    ACTIONS(179), 1,
      aux_sym_directive_token1,
    STATE(39), 1,
      aux_sym_directive_repeat1,
  [713] = 1,
    ACTIONS(181), 2,
      aux_sym_directive_token1,
      anon_sym_PERCENT_GT,
  [718] = 2,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      aux_sym_quoted_attribute_value_token2,
  [725] = 2,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      aux_sym_quoted_attribute_value_token1,
  [732] = 2,
    ACTIONS(189), 1,
      sym_tag_name,
    ACTIONS(191), 1,
      sym_component_name,
  [739] = 2,
    ACTIONS(179), 1,
      aux_sym_directive_token1,
    STATE(40), 1,
      aux_sym_directive_repeat1,
  [746] = 1,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
  [750] = 1,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
  [754] = 1,
    ACTIONS(197), 1,
      sym_component_name,
  [758] = 1,
    ACTIONS(199), 1,
      anon_sym_GT,
  [762] = 1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
  [766] = 1,
    ACTIONS(203), 1,
      sym_tag_name,
  [770] = 1,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
  [774] = 1,
    ACTIONS(207), 1,
      anon_sym_GT,
  [778] = 1,
    ACTIONS(209), 1,
      anon_sym_SQUOTE,
  [782] = 1,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
  [786] = 1,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 132,
  [SMALL_STATE(6)] = 174,
  [SMALL_STATE(7)] = 218,
  [SMALL_STATE(8)] = 259,
  [SMALL_STATE(9)] = 273,
  [SMALL_STATE(10)] = 287,
  [SMALL_STATE(11)] = 301,
  [SMALL_STATE(12)] = 315,
  [SMALL_STATE(13)] = 329,
  [SMALL_STATE(14)] = 343,
  [SMALL_STATE(15)] = 357,
  [SMALL_STATE(16)] = 371,
  [SMALL_STATE(17)] = 385,
  [SMALL_STATE(18)] = 399,
  [SMALL_STATE(19)] = 413,
  [SMALL_STATE(20)] = 427,
  [SMALL_STATE(21)] = 441,
  [SMALL_STATE(22)] = 455,
  [SMALL_STATE(23)] = 468,
  [SMALL_STATE(24)] = 481,
  [SMALL_STATE(25)] = 494,
  [SMALL_STATE(26)] = 507,
  [SMALL_STATE(27)] = 525,
  [SMALL_STATE(28)] = 541,
  [SMALL_STATE(29)] = 559,
  [SMALL_STATE(30)] = 577,
  [SMALL_STATE(31)] = 595,
  [SMALL_STATE(32)] = 612,
  [SMALL_STATE(33)] = 622,
  [SMALL_STATE(34)] = 629,
  [SMALL_STATE(35)] = 636,
  [SMALL_STATE(36)] = 649,
  [SMALL_STATE(37)] = 656,
  [SMALL_STATE(38)] = 669,
  [SMALL_STATE(39)] = 676,
  [SMALL_STATE(40)] = 686,
  [SMALL_STATE(41)] = 696,
  [SMALL_STATE(42)] = 706,
  [SMALL_STATE(43)] = 713,
  [SMALL_STATE(44)] = 718,
  [SMALL_STATE(45)] = 725,
  [SMALL_STATE(46)] = 732,
  [SMALL_STATE(47)] = 739,
  [SMALL_STATE(48)] = 746,
  [SMALL_STATE(49)] = 750,
  [SMALL_STATE(50)] = 754,
  [SMALL_STATE(51)] = 758,
  [SMALL_STATE(52)] = 762,
  [SMALL_STATE(53)] = 766,
  [SMALL_STATE(54)] = 770,
  [SMALL_STATE(55)] = 774,
  [SMALL_STATE(56)] = 778,
  [SMALL_STATE(57)] = 782,
  [SMALL_STATE(58)] = 786,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(46),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(42),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(42),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(47),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(37),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(32),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(43),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [201] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_value, 3, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_value, 1),
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
