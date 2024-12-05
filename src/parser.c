#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 117
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
  anon_sym_do = 34,
  anon_sym_DASH_GT = 35,
  anon_sym_POUND = 36,
  aux_sym_ending_expression_value_token1 = 37,
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
  sym_ending_expression_value = 73,
  sym_component_name = 74,
  aux_sym_fragment_repeat1 = 75,
  aux_sym_component_repeat1 = 76,
  aux_sym_start_tag_repeat1 = 77,
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
  [anon_sym_do] = "do",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_POUND] = "#",
  [aux_sym_ending_expression_value_token1] = "ending_expression_value_token1",
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
  [sym_ending_expression_value] = "ending_expression_value",
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
  [anon_sym_do] = anon_sym_do,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_ending_expression_value_token1] = aux_sym_ending_expression_value_token1,
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
  [sym_ending_expression_value] = sym_ending_expression_value,
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
  [aux_sym_ending_expression_value_token1] = {
    .visible = false,
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
  [sym_ending_expression_value] = {
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
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 62,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 69,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 81,
  [83] = 62,
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
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 92,
  [113] = 84,
  [114] = 114,
  [115] = 115,
  [116] = 115,
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
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == 'D') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'h') ADVANCE(129);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '%') ADVANCE(20);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(105);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(85);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(130);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(130);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(131);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'Y') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(131);
      END_STATE();
    case 47:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(131);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(131);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(51);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(51);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(51);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(115);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLONlet);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLONfor);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLONstream);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLONif);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '%') ADVANCE(82);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_BANG_DASH_DASH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_PERCENT_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(115);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(115);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_ending_expression_value_token1);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_ending_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_ending_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_module);
      if (lookahead == '.') ADVANCE(47);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_function);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__code);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(105);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'C') ADVANCE(122);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'E') ADVANCE(52);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'O') ADVANCE(118);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'P') ADVANCE(119);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'T') ADVANCE(123);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'Y') ADVANCE(121);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(99);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(53);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(125);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(124);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(95);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(126);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(131);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 49},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 48},
  [19] = {.lex_state = 48},
  [20] = {.lex_state = 48},
  [21] = {.lex_state = 48},
  [22] = {.lex_state = 48},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 48},
  [26] = {.lex_state = 48},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 49},
  [33] = {.lex_state = 49},
  [34] = {.lex_state = 49},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 49},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 49},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 49},
  [44] = {.lex_state = 49},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 49},
  [49] = {.lex_state = 49},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 45},
  [66] = {.lex_state = 45},
  [67] = {.lex_state = 45},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 45},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 45},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 45},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 45},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 24},
  [101] = {.lex_state = 35},
  [102] = {.lex_state = 24},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 24},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
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
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_ending_expression_value_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(103),
    [sym__node] = STATE(10),
    [sym_doctype] = STATE(10),
    [sym_tag] = STATE(10),
    [sym_component] = STATE(10),
    [sym_start_tag] = STATE(9),
    [sym_self_closing_tag] = STATE(23),
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
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LT_PERCENT] = ACTIONS(11),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(9),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(11),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(9),
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
    STATE(12), 1,
      sym_end_component,
    STATE(13), 1,
      sym_self_closing_component,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(32), 1,
      sym_self_closing_slot,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(9), 3,
      anon_sym_LBRACE,
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
  [70] = 19,
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
    STATE(13), 1,
      sym_self_closing_component,
    STATE(20), 1,
      sym_end_component,
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(32), 1,
      sym_self_closing_slot,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(9), 3,
      anon_sym_LBRACE,
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
  [140] = 18,
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
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(32), 1,
      sym_self_closing_slot,
    ACTIONS(43), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(40), 3,
      anon_sym_LBRACE,
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
  [207] = 16,
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
    STATE(23), 1,
      sym_self_closing_tag,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH_COLON,
    ACTIONS(71), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(68), 3,
      anon_sym_LBRACE,
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
  [268] = 16,
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
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(40), 1,
      sym_end_slot,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(9), 3,
      anon_sym_LBRACE,
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
  [328] = 16,
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
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(43), 1,
      sym_end_slot,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(9), 3,
      anon_sym_LBRACE,
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
  [388] = 16,
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
    STATE(23), 1,
      sym_self_closing_tag,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(9), 3,
      anon_sym_LBRACE,
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
  [448] = 16,
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
    STATE(23), 1,
      sym_self_closing_tag,
    STATE(31), 1,
      sym_end_tag,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(9), 3,
      anon_sym_LBRACE,
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
  [508] = 15,
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
    STATE(23), 1,
      sym_self_closing_tag,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(9), 3,
      anon_sym_LBRACE,
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
  [565] = 2,
    ACTIONS(100), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(98), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [585] = 2,
    ACTIONS(104), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(102), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [605] = 2,
    ACTIONS(108), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(106), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [625] = 2,
    ACTIONS(112), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(110), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [645] = 2,
    ACTIONS(116), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(114), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [665] = 2,
    ACTIONS(120), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(118), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [685] = 2,
    ACTIONS(124), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(122), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [705] = 2,
    ACTIONS(128), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(126), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [725] = 2,
    ACTIONS(132), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(130), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [745] = 2,
    ACTIONS(136), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(134), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [765] = 2,
    ACTIONS(140), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(138), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [785] = 2,
    ACTIONS(144), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(142), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [805] = 2,
    ACTIONS(148), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(146), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [825] = 2,
    ACTIONS(152), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(150), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [845] = 2,
    ACTIONS(156), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(154), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [865] = 2,
    ACTIONS(160), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(158), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [885] = 2,
    ACTIONS(164), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(162), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [905] = 2,
    ACTIONS(168), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(166), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [925] = 2,
    ACTIONS(172), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(170), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [945] = 2,
    ACTIONS(176), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(174), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [965] = 2,
    ACTIONS(180), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(178), 10,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [985] = 2,
    ACTIONS(182), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(184), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1003] = 2,
    ACTIONS(186), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(188), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1021] = 2,
    ACTIONS(190), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(192), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1039] = 7,
    ACTIONS(194), 1,
      anon_sym_GT,
    ACTIONS(196), 1,
      anon_sym_SLASH_GT,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_attribute_name,
    STATE(99), 1,
      sym_special_attribute_name,
    ACTIONS(200), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(41), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1067] = 6,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      sym_attribute_name,
    STATE(99), 1,
      sym_special_attribute_name,
    ACTIONS(204), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    ACTIONS(209), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(36), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1093] = 7,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_attribute_name,
    ACTIONS(215), 1,
      anon_sym_GT,
    ACTIONS(217), 1,
      anon_sym_SLASH_GT,
    STATE(99), 1,
      sym_special_attribute_name,
    ACTIONS(200), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(45), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1121] = 2,
    ACTIONS(219), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(221), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1139] = 7,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_attribute_name,
    ACTIONS(223), 1,
      anon_sym_GT,
    ACTIONS(225), 1,
      anon_sym_SLASH_GT,
    STATE(99), 1,
      sym_special_attribute_name,
    ACTIONS(200), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(42), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1167] = 2,
    ACTIONS(227), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(229), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1185] = 7,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_attribute_name,
    ACTIONS(231), 1,
      anon_sym_GT,
    ACTIONS(233), 1,
      anon_sym_SLASH_GT,
    STATE(99), 1,
      sym_special_attribute_name,
    ACTIONS(200), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(36), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1213] = 7,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_attribute_name,
    ACTIONS(235), 1,
      anon_sym_GT,
    ACTIONS(237), 1,
      anon_sym_SLASH_GT,
    STATE(99), 1,
      sym_special_attribute_name,
    ACTIONS(200), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(36), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1241] = 2,
    ACTIONS(239), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(241), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1259] = 2,
    ACTIONS(243), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(245), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1277] = 7,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_attribute_name,
    ACTIONS(247), 1,
      anon_sym_GT,
    ACTIONS(249), 1,
      anon_sym_SLASH_GT,
    STATE(99), 1,
      sym_special_attribute_name,
    ACTIONS(200), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(36), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1305] = 2,
    ACTIONS(251), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(253), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1323] = 2,
    ACTIONS(255), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(257), 8,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1340] = 2,
    ACTIONS(259), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(261), 8,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1357] = 2,
    ACTIONS(263), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(265), 8,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1374] = 2,
    ACTIONS(267), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(269), 8,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1391] = 2,
    ACTIONS(273), 1,
      anon_sym_EQ,
    ACTIONS(271), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1405] = 3,
    ACTIONS(277), 1,
      anon_sym_DOT,
    ACTIONS(279), 1,
      sym_attribute_name,
    ACTIONS(275), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
  [1421] = 1,
    ACTIONS(281), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1432] = 1,
    ACTIONS(283), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1443] = 5,
    ACTIONS(287), 1,
      aux_sym_ending_expression_value_token1,
    ACTIONS(289), 1,
      sym__code,
    STATE(63), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(285), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(93), 3,
      sym_expression_value,
      sym_partial_expression_value,
      sym_ending_expression_value,
  [1462] = 1,
    ACTIONS(291), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1473] = 1,
    ACTIONS(293), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1484] = 1,
    ACTIONS(295), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1495] = 1,
    ACTIONS(297), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1506] = 1,
    ACTIONS(299), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1517] = 1,
    ACTIONS(301), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1528] = 3,
    ACTIONS(305), 1,
      sym__code,
    STATE(62), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(303), 4,
      anon_sym_RBRACE,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1541] = 4,
    ACTIONS(312), 1,
      sym__code,
    STATE(62), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(308), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_GT,
    ACTIONS(310), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1556] = 5,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      sym_attribute_value,
    ACTIONS(316), 1,
      anon_sym_SQUOTE,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    STATE(56), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [1573] = 5,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 1,
      aux_sym__expression_value_token1,
    STATE(65), 1,
      aux_sym_expression_repeat1,
    STATE(80), 1,
      sym__expression_value,
  [1589] = 5,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 1,
      aux_sym__expression_value_token1,
    STATE(67), 1,
      aux_sym_expression_repeat1,
    STATE(80), 1,
      sym__expression_value,
  [1605] = 5,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 1,
      aux_sym__expression_value_token1,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_expression_repeat1,
    STATE(80), 1,
      sym__expression_value,
  [1621] = 3,
    ACTIONS(338), 1,
      sym__code,
    STATE(70), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(336), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_GT,
  [1632] = 4,
    ACTIONS(340), 1,
      anon_sym_LBRACE,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    ACTIONS(344), 1,
      aux_sym__expression_value_token1,
    STATE(116), 1,
      sym__expression_value,
  [1645] = 3,
    ACTIONS(346), 1,
      sym__code,
    STATE(70), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(303), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_GT,
  [1656] = 4,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(351), 1,
      sym_module,
    ACTIONS(353), 1,
      sym_tag_name,
    STATE(39), 1,
      sym_component_name,
  [1669] = 3,
    ACTIONS(338), 1,
      sym__code,
    STATE(70), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(355), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_GT,
  [1680] = 3,
    ACTIONS(338), 1,
      sym__code,
    STATE(70), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(357), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_GT,
  [1691] = 3,
    ACTIONS(361), 1,
      sym__code,
    STATE(68), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(359), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_GT,
  [1702] = 3,
    ACTIONS(365), 1,
      sym__code,
    STATE(73), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(363), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_GT,
  [1713] = 3,
    ACTIONS(367), 1,
      sym__code,
    STATE(72), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(336), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_GT,
  [1724] = 4,
    ACTIONS(340), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    ACTIONS(371), 1,
      aux_sym__expression_value_token1,
    STATE(115), 1,
      sym__expression_value,
  [1737] = 3,
    ACTIONS(373), 1,
      aux_sym__html_comment_token1,
    ACTIONS(375), 1,
      anon_sym_DASH_DASH_GT,
    STATE(81), 1,
      aux_sym__html_comment_repeat1,
  [1747] = 3,
    ACTIONS(377), 1,
      aux_sym__html_comment_token1,
    ACTIONS(379), 1,
      anon_sym_DASH_DASH_GT,
    STATE(78), 1,
      aux_sym__html_comment_repeat1,
  [1757] = 2,
    ACTIONS(383), 1,
      aux_sym__expression_value_token1,
    ACTIONS(381), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1765] = 3,
    ACTIONS(385), 1,
      aux_sym__html_comment_token1,
    ACTIONS(388), 1,
      anon_sym_DASH_DASH_GT,
    STATE(81), 1,
      aux_sym__html_comment_repeat1,
  [1775] = 3,
    ACTIONS(388), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    ACTIONS(390), 1,
      aux_sym__html_comment_token1,
    STATE(82), 1,
      aux_sym__html_comment_repeat1,
  [1785] = 3,
    ACTIONS(303), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(393), 1,
      sym__code,
    STATE(83), 1,
      aux_sym__hash_comment_repeat1,
  [1795] = 2,
    ACTIONS(398), 1,
      aux_sym__expression_value_token1,
    ACTIONS(396), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1803] = 3,
    ACTIONS(349), 1,
      anon_sym_DOT,
    ACTIONS(351), 1,
      sym_module,
    STATE(105), 1,
      sym_component_name,
  [1813] = 3,
    ACTIONS(400), 1,
      aux_sym__html_comment_token1,
    ACTIONS(402), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(88), 1,
      aux_sym__html_comment_repeat1,
  [1823] = 3,
    ACTIONS(404), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(406), 1,
      sym__code,
    STATE(83), 1,
      aux_sym__hash_comment_repeat1,
  [1833] = 3,
    ACTIONS(408), 1,
      aux_sym__html_comment_token1,
    ACTIONS(410), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(82), 1,
      aux_sym__html_comment_repeat1,
  [1843] = 2,
    ACTIONS(414), 1,
      anon_sym_POUND,
    ACTIONS(412), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_GT,
  [1851] = 3,
    ACTIONS(416), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(418), 1,
      sym__code,
    STATE(87), 1,
      aux_sym__hash_comment_repeat1,
  [1861] = 2,
    ACTIONS(422), 1,
      anon_sym_POUND,
    ACTIONS(420), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_GT,
  [1869] = 2,
    ACTIONS(426), 1,
      aux_sym__expression_value_token1,
    ACTIONS(424), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1877] = 1,
    ACTIONS(428), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_GT,
  [1882] = 2,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_expression,
  [1889] = 2,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      aux_sym_quoted_attribute_value_token1,
  [1896] = 2,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(434), 1,
      aux_sym_quoted_attribute_value_token2,
  [1903] = 1,
    ACTIONS(436), 1,
      sym_tag_name,
  [1907] = 1,
    ACTIONS(438), 1,
      anon_sym_GT,
  [1911] = 1,
    ACTIONS(440), 1,
      anon_sym_EQ,
  [1915] = 1,
    ACTIONS(442), 1,
      sym_function,
  [1919] = 1,
    ACTIONS(444), 1,
      anon_sym_html,
  [1923] = 1,
    ACTIONS(446), 1,
      anon_sym_DOCTYPE,
  [1927] = 1,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
  [1931] = 1,
    ACTIONS(450), 1,
      sym_tag_name,
  [1935] = 1,
    ACTIONS(452), 1,
      anon_sym_GT,
  [1939] = 1,
    ACTIONS(454), 1,
      anon_sym_EQ,
  [1943] = 1,
    ACTIONS(456), 1,
      anon_sym_SQUOTE,
  [1947] = 1,
    ACTIONS(456), 1,
      anon_sym_DQUOTE,
  [1951] = 1,
    ACTIONS(458), 1,
      anon_sym_GT,
  [1955] = 1,
    ACTIONS(460), 1,
      anon_sym_GT,
  [1959] = 1,
    ACTIONS(462), 1,
      sym_function,
  [1963] = 1,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
  [1967] = 1,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
  [1971] = 1,
    ACTIONS(464), 1,
      sym_tag_name,
  [1975] = 1,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
  [1979] = 1,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 207,
  [SMALL_STATE(6)] = 268,
  [SMALL_STATE(7)] = 328,
  [SMALL_STATE(8)] = 388,
  [SMALL_STATE(9)] = 448,
  [SMALL_STATE(10)] = 508,
  [SMALL_STATE(11)] = 565,
  [SMALL_STATE(12)] = 585,
  [SMALL_STATE(13)] = 605,
  [SMALL_STATE(14)] = 625,
  [SMALL_STATE(15)] = 645,
  [SMALL_STATE(16)] = 665,
  [SMALL_STATE(17)] = 685,
  [SMALL_STATE(18)] = 705,
  [SMALL_STATE(19)] = 725,
  [SMALL_STATE(20)] = 745,
  [SMALL_STATE(21)] = 765,
  [SMALL_STATE(22)] = 785,
  [SMALL_STATE(23)] = 805,
  [SMALL_STATE(24)] = 825,
  [SMALL_STATE(25)] = 845,
  [SMALL_STATE(26)] = 865,
  [SMALL_STATE(27)] = 885,
  [SMALL_STATE(28)] = 905,
  [SMALL_STATE(29)] = 925,
  [SMALL_STATE(30)] = 945,
  [SMALL_STATE(31)] = 965,
  [SMALL_STATE(32)] = 985,
  [SMALL_STATE(33)] = 1003,
  [SMALL_STATE(34)] = 1021,
  [SMALL_STATE(35)] = 1039,
  [SMALL_STATE(36)] = 1067,
  [SMALL_STATE(37)] = 1093,
  [SMALL_STATE(38)] = 1121,
  [SMALL_STATE(39)] = 1139,
  [SMALL_STATE(40)] = 1167,
  [SMALL_STATE(41)] = 1185,
  [SMALL_STATE(42)] = 1213,
  [SMALL_STATE(43)] = 1241,
  [SMALL_STATE(44)] = 1259,
  [SMALL_STATE(45)] = 1277,
  [SMALL_STATE(46)] = 1305,
  [SMALL_STATE(47)] = 1323,
  [SMALL_STATE(48)] = 1340,
  [SMALL_STATE(49)] = 1357,
  [SMALL_STATE(50)] = 1374,
  [SMALL_STATE(51)] = 1391,
  [SMALL_STATE(52)] = 1405,
  [SMALL_STATE(53)] = 1421,
  [SMALL_STATE(54)] = 1432,
  [SMALL_STATE(55)] = 1443,
  [SMALL_STATE(56)] = 1462,
  [SMALL_STATE(57)] = 1473,
  [SMALL_STATE(58)] = 1484,
  [SMALL_STATE(59)] = 1495,
  [SMALL_STATE(60)] = 1506,
  [SMALL_STATE(61)] = 1517,
  [SMALL_STATE(62)] = 1528,
  [SMALL_STATE(63)] = 1541,
  [SMALL_STATE(64)] = 1556,
  [SMALL_STATE(65)] = 1573,
  [SMALL_STATE(66)] = 1589,
  [SMALL_STATE(67)] = 1605,
  [SMALL_STATE(68)] = 1621,
  [SMALL_STATE(69)] = 1632,
  [SMALL_STATE(70)] = 1645,
  [SMALL_STATE(71)] = 1656,
  [SMALL_STATE(72)] = 1669,
  [SMALL_STATE(73)] = 1680,
  [SMALL_STATE(74)] = 1691,
  [SMALL_STATE(75)] = 1702,
  [SMALL_STATE(76)] = 1713,
  [SMALL_STATE(77)] = 1724,
  [SMALL_STATE(78)] = 1737,
  [SMALL_STATE(79)] = 1747,
  [SMALL_STATE(80)] = 1757,
  [SMALL_STATE(81)] = 1765,
  [SMALL_STATE(82)] = 1775,
  [SMALL_STATE(83)] = 1785,
  [SMALL_STATE(84)] = 1795,
  [SMALL_STATE(85)] = 1803,
  [SMALL_STATE(86)] = 1813,
  [SMALL_STATE(87)] = 1823,
  [SMALL_STATE(88)] = 1833,
  [SMALL_STATE(89)] = 1843,
  [SMALL_STATE(90)] = 1851,
  [SMALL_STATE(91)] = 1861,
  [SMALL_STATE(92)] = 1869,
  [SMALL_STATE(93)] = 1877,
  [SMALL_STATE(94)] = 1882,
  [SMALL_STATE(95)] = 1889,
  [SMALL_STATE(96)] = 1896,
  [SMALL_STATE(97)] = 1903,
  [SMALL_STATE(98)] = 1907,
  [SMALL_STATE(99)] = 1911,
  [SMALL_STATE(100)] = 1915,
  [SMALL_STATE(101)] = 1919,
  [SMALL_STATE(102)] = 1923,
  [SMALL_STATE(103)] = 1927,
  [SMALL_STATE(104)] = 1931,
  [SMALL_STATE(105)] = 1935,
  [SMALL_STATE(106)] = 1939,
  [SMALL_STATE(107)] = 1943,
  [SMALL_STATE(108)] = 1947,
  [SMALL_STATE(109)] = 1951,
  [SMALL_STATE(110)] = 1955,
  [SMALL_STATE(111)] = 1959,
  [SMALL_STATE(112)] = 1963,
  [SMALL_STATE(113)] = 1967,
  [SMALL_STATE(114)] = 1971,
  [SMALL_STATE(115)] = 1975,
  [SMALL_STATE(116)] = 1979,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(102),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(71),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(97),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(55),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(55),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(79),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(86),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(90),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(102),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(71),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(55),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(55),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(79),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(86),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(90),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
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
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_slot, 3, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_slot, 3, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(66),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(106),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(51),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_slot, 4, .production_id = 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_slot, 4, .production_id = 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_slot, 3, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_slot, 3, .production_id = 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 4, .production_id = 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 4, .production_id = 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 3, .production_id = 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 3, .production_id = 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_attribute, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(62),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(77),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(80),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(70),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 4),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ending_expression_value, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ending_expression_value, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(81),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(82),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(83),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [448] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_attribute_name, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
