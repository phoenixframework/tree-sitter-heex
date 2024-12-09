#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
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
    [1] = sym_expression_value,
  },
  [2] = {
    [1] = alias_sym_slot_name,
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
  [59] = 12,
  [60] = 60,
  [61] = 61,
  [62] = 32,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 67,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 66,
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
  [92] = 79,
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
  [111] = 81,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 89,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 99,
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
      if (lookahead == '#') ADVANCE(96);
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
      if (lookahead == '#') ADVANCE(96);
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
      if (lookahead == '%') ADVANCE(20);
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
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(87);
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
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(89);
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
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(128);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '<') ADVANCE(55);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != '>' &&
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
      if (lookahead == '-') ADVANCE(85);
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
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(21);
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
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(112);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(112);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_ending_expression_value_token1);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_ending_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_ending_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(112);
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
      if (lookahead == '>') ADVANCE(95);
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
      if (lookahead == 'd') ADVANCE(99);
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
      if (lookahead == 'o') ADVANCE(94);
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
      if (lookahead == 'd') ADVANCE(97);
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
      if (lookahead == 'o') ADVANCE(93);
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
  [19] = {.lex_state = 47},
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
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 47},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 48},
  [37] = {.lex_state = 48},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 48},
  [41] = {.lex_state = 48},
  [42] = {.lex_state = 48},
  [43] = {.lex_state = 48},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 48},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 44},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 44},
  [69] = {.lex_state = 44},
  [70] = {.lex_state = 44},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 44},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 44},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 44},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 44},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 44},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 23},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 34},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 23},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 23},
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
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_ending_expression_value_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(104),
    [sym__node] = STATE(10),
    [sym_doctype] = STATE(10),
    [sym_tag] = STATE(10),
    [sym_component] = STATE(10),
    [sym_start_tag] = STATE(9),
    [sym_self_closing_tag] = STATE(13),
    [sym_start_component] = STATE(3),
    [sym_self_closing_component] = STATE(14),
    [sym_expression] = STATE(10),
    [sym_directive] = STATE(10),
    [sym_comment] = STATE(10),
    [sym__html_comment] = STATE(15),
    [sym__bang_comment] = STATE(15),
    [sym__hash_comment] = STATE(15),
    [aux_sym_fragment_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_BANG] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_LT_PERCENT] = ACTIONS(11),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(13),
    [anon_sym_LT_PERCENT_PERCENT] = ACTIONS(11),
    [anon_sym_LT_PERCENT_PERCENT_EQ] = ACTIONS(13),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(15),
    [anon_sym_LT_PERCENT_BANG_DASH_DASH] = ACTIONS(17),
    [anon_sym_LT_PERCENT_POUND] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      anon_sym_LT_COLON,
    ACTIONS(27), 1,
      sym_text,
    STATE(3), 1,
      sym_start_component,
    STATE(7), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(14), 1,
      sym_self_closing_component,
    STATE(19), 1,
      sym_end_component,
    STATE(40), 1,
      sym_self_closing_slot,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(13), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(15), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(4), 9,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_slot,
      sym_expression,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [73] = 20,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    ACTIONS(25), 1,
      anon_sym_LT_COLON,
    ACTIONS(29), 1,
      sym_text,
    STATE(3), 1,
      sym_start_component,
    STATE(7), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(14), 1,
      sym_self_closing_component,
    STATE(21), 1,
      sym_end_component,
    STATE(40), 1,
      sym_self_closing_slot,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(13), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(15), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(2), 9,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_slot,
      sym_expression,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [146] = 19,
    ACTIONS(31), 1,
      anon_sym_LT_BANG,
    ACTIONS(34), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      anon_sym_LT_COLON,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(54), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(57), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(60), 1,
      sym_text,
    STATE(3), 1,
      sym_start_component,
    STATE(7), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(14), 1,
      sym_self_closing_component,
    STATE(40), 1,
      sym_self_closing_slot,
    ACTIONS(45), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(48), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(15), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(4), 9,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_slot,
      sym_expression,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [216] = 17,
    ACTIONS(65), 1,
      anon_sym_LT_BANG,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(71), 1,
      anon_sym_LT_SLASH,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(85), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(88), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(91), 1,
      sym_text,
    STATE(3), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(14), 1,
      sym_self_closing_component,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH_COLON,
    ACTIONS(76), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(79), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(15), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_expression,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [280] = 17,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(94), 1,
      anon_sym_LT_SLASH_COLON,
    ACTIONS(96), 1,
      sym_text,
    STATE(3), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(14), 1,
      sym_self_closing_component,
    STATE(42), 1,
      sym_end_slot,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(13), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(15), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_expression,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [343] = 17,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(94), 1,
      anon_sym_LT_SLASH_COLON,
    ACTIONS(98), 1,
      sym_text,
    STATE(3), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(14), 1,
      sym_self_closing_component,
    STATE(43), 1,
      sym_end_slot,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(13), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(15), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(6), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_expression,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [406] = 17,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(96), 1,
      sym_text,
    ACTIONS(100), 1,
      anon_sym_LT_SLASH,
    STATE(3), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(14), 1,
      sym_self_closing_component,
    STATE(17), 1,
      sym_end_tag,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(13), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(15), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_expression,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [469] = 17,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(100), 1,
      anon_sym_LT_SLASH,
    ACTIONS(102), 1,
      sym_text,
    STATE(3), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(14), 1,
      sym_self_closing_component,
    STATE(30), 1,
      sym_end_tag,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(13), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(15), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(8), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_expression,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [532] = 16,
    ACTIONS(5), 1,
      anon_sym_LT_BANG,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_LT_PERCENT_POUND,
    ACTIONS(96), 1,
      sym_text,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(14), 1,
      sym_self_closing_component,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(13), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(15), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_expression,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [592] = 2,
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
  [612] = 2,
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
  [632] = 2,
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
  [652] = 2,
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
  [672] = 2,
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
  [692] = 2,
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
  [712] = 2,
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
  [732] = 2,
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
  [752] = 2,
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
  [772] = 2,
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
  [792] = 2,
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
  [812] = 2,
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
  [832] = 2,
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
  [852] = 2,
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
  [872] = 2,
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
  [892] = 2,
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
  [912] = 2,
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
  [932] = 2,
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
  [952] = 2,
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
  [972] = 2,
    ACTIONS(184), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(182), 10,
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
  [992] = 2,
    ACTIONS(188), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(186), 10,
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
  [1012] = 2,
    ACTIONS(192), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(190), 10,
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
  [1032] = 2,
    ACTIONS(196), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(194), 10,
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
  [1052] = 6,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      sym_attribute_name,
    STATE(117), 1,
      sym_special_attribute_name,
    ACTIONS(198), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    ACTIONS(203), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(34), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1078] = 7,
    ACTIONS(209), 1,
      anon_sym_GT,
    ACTIONS(211), 1,
      anon_sym_SLASH_GT,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      sym_attribute_name,
    STATE(117), 1,
      sym_special_attribute_name,
    ACTIONS(215), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(38), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1106] = 2,
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
  [1124] = 2,
    ACTIONS(223), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(225), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1142] = 7,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      sym_attribute_name,
    ACTIONS(227), 1,
      anon_sym_GT,
    ACTIONS(229), 1,
      anon_sym_SLASH_GT,
    STATE(117), 1,
      sym_special_attribute_name,
    ACTIONS(215), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(34), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1170] = 2,
    ACTIONS(231), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(233), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1188] = 2,
    ACTIONS(235), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(237), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1206] = 2,
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
  [1224] = 2,
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
  [1242] = 2,
    ACTIONS(247), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(249), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1260] = 7,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      sym_attribute_name,
    ACTIONS(251), 1,
      anon_sym_GT,
    ACTIONS(253), 1,
      anon_sym_SLASH_GT,
    STATE(117), 1,
      sym_special_attribute_name,
    ACTIONS(215), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(48), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1288] = 7,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      sym_attribute_name,
    ACTIONS(255), 1,
      anon_sym_GT,
    ACTIONS(257), 1,
      anon_sym_SLASH_GT,
    STATE(117), 1,
      sym_special_attribute_name,
    ACTIONS(215), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(34), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1316] = 2,
    ACTIONS(259), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(261), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1334] = 7,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      sym_attribute_name,
    ACTIONS(263), 1,
      anon_sym_GT,
    ACTIONS(265), 1,
      anon_sym_SLASH_GT,
    STATE(117), 1,
      sym_special_attribute_name,
    ACTIONS(215), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(45), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1362] = 7,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      sym_attribute_name,
    ACTIONS(267), 1,
      anon_sym_GT,
    ACTIONS(269), 1,
      anon_sym_SLASH_GT,
    STATE(117), 1,
      sym_special_attribute_name,
    ACTIONS(215), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(34), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1390] = 2,
    ACTIONS(271), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(273), 8,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1407] = 2,
    ACTIONS(275), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(277), 8,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1424] = 2,
    ACTIONS(279), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(281), 8,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1441] = 2,
    ACTIONS(283), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(285), 8,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1458] = 2,
    ACTIONS(289), 1,
      anon_sym_EQ,
    ACTIONS(287), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1472] = 3,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      sym_attribute_name,
    ACTIONS(291), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
  [1488] = 5,
    ACTIONS(299), 1,
      aux_sym_ending_expression_value_token1,
    ACTIONS(301), 1,
      sym__code,
    STATE(71), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(297), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(102), 3,
      sym_expression_value,
      sym_partial_expression_value,
      sym_ending_expression_value,
  [1507] = 1,
    ACTIONS(303), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1518] = 1,
    ACTIONS(305), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1529] = 1,
    ACTIONS(307), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1540] = 1,
    ACTIONS(110), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1551] = 1,
    ACTIONS(309), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1562] = 1,
    ACTIONS(311), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1573] = 1,
    ACTIONS(190), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1584] = 1,
    ACTIONS(313), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1595] = 5,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(315), 1,
      sym_attribute_value,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
    STATE(63), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [1612] = 5,
    ACTIONS(321), 1,
      anon_sym_LBRACE,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    ACTIONS(326), 1,
      aux_sym__expression_value_token1,
    STATE(65), 1,
      aux_sym_expression_repeat1,
    STATE(85), 1,
      sym__expression_value,
  [1628] = 3,
    ACTIONS(331), 1,
      sym__code,
    STATE(66), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(329), 3,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1640] = 5,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 1,
      aux_sym__expression_value_token1,
    STATE(65), 1,
      aux_sym_expression_repeat1,
    STATE(85), 1,
      sym__expression_value,
  [1656] = 5,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      aux_sym__expression_value_token1,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_expression_repeat1,
    STATE(85), 1,
      sym__expression_value,
  [1672] = 5,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      aux_sym__expression_value_token1,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      aux_sym_expression_repeat1,
    STATE(85), 1,
      sym__expression_value,
  [1688] = 5,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      aux_sym__expression_value_token1,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_expression_repeat1,
    STATE(85), 1,
      sym__expression_value,
  [1704] = 4,
    ACTIONS(346), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(350), 1,
      sym__code,
    STATE(66), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(348), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1718] = 4,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    ACTIONS(356), 1,
      aux_sym__expression_value_token1,
    STATE(119), 1,
      sym__expression_value,
  [1731] = 4,
    ACTIONS(358), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      sym_module,
    ACTIONS(362), 1,
      sym_tag_name,
    STATE(44), 1,
      sym_component_name,
  [1744] = 4,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    ACTIONS(366), 1,
      aux_sym__expression_value_token1,
    STATE(99), 1,
      sym__expression_value,
  [1757] = 3,
    ACTIONS(368), 1,
      aux_sym__html_comment_token1,
    ACTIONS(370), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(87), 1,
      aux_sym__html_comment_repeat1,
  [1767] = 3,
    ACTIONS(372), 1,
      aux_sym__html_comment_token1,
    ACTIONS(374), 1,
      anon_sym_DASH_DASH_GT,
    STATE(88), 1,
      aux_sym__html_comment_repeat1,
  [1777] = 3,
    ACTIONS(376), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(378), 1,
      sym__code,
    STATE(90), 1,
      aux_sym__hash_comment_repeat1,
  [1787] = 3,
    ACTIONS(380), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(382), 1,
      sym__code,
    STATE(80), 1,
      aux_sym__hash_comment_repeat1,
  [1797] = 3,
    ACTIONS(384), 1,
      aux_sym__html_comment_token1,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(79), 1,
      aux_sym__html_comment_repeat1,
  [1807] = 3,
    ACTIONS(329), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(389), 1,
      sym__code,
    STATE(80), 1,
      aux_sym__hash_comment_repeat1,
  [1817] = 2,
    ACTIONS(394), 1,
      aux_sym__expression_value_token1,
    ACTIONS(392), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1825] = 3,
    ACTIONS(396), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(398), 1,
      sym__code,
    STATE(86), 1,
      aux_sym__hash_comment_repeat1,
  [1835] = 3,
    ACTIONS(382), 1,
      sym__code,
    ACTIONS(400), 1,
      anon_sym_PERCENT_GT,
    STATE(80), 1,
      aux_sym__hash_comment_repeat1,
  [1845] = 3,
    ACTIONS(358), 1,
      anon_sym_DOT,
    ACTIONS(360), 1,
      sym_module,
    STATE(110), 1,
      sym_component_name,
  [1855] = 2,
    ACTIONS(404), 1,
      aux_sym__expression_value_token1,
    ACTIONS(402), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1863] = 3,
    ACTIONS(382), 1,
      sym__code,
    ACTIONS(406), 1,
      anon_sym_PERCENT_GT,
    STATE(80), 1,
      aux_sym__hash_comment_repeat1,
  [1873] = 3,
    ACTIONS(408), 1,
      aux_sym__html_comment_token1,
    ACTIONS(410), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(79), 1,
      aux_sym__html_comment_repeat1,
  [1883] = 3,
    ACTIONS(412), 1,
      aux_sym__html_comment_token1,
    ACTIONS(414), 1,
      anon_sym_DASH_DASH_GT,
    STATE(92), 1,
      aux_sym__html_comment_repeat1,
  [1893] = 2,
    ACTIONS(418), 1,
      aux_sym__expression_value_token1,
    ACTIONS(416), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1901] = 3,
    ACTIONS(382), 1,
      sym__code,
    ACTIONS(420), 1,
      anon_sym_PERCENT_GT,
    STATE(80), 1,
      aux_sym__hash_comment_repeat1,
  [1911] = 3,
    ACTIONS(420), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(422), 1,
      sym__code,
    STATE(83), 1,
      aux_sym__hash_comment_repeat1,
  [1921] = 3,
    ACTIONS(387), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(424), 1,
      aux_sym__html_comment_token1,
    STATE(92), 1,
      aux_sym__html_comment_repeat1,
  [1931] = 3,
    ACTIONS(427), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(429), 1,
      sym__code,
    STATE(78), 1,
      aux_sym__hash_comment_repeat1,
  [1941] = 2,
    ACTIONS(431), 1,
      anon_sym_SQUOTE,
    ACTIONS(433), 1,
      aux_sym_quoted_attribute_value_token1,
  [1948] = 2,
    ACTIONS(435), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(437), 1,
      anon_sym_POUND,
  [1955] = 2,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_expression,
  [1962] = 2,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    ACTIONS(439), 1,
      aux_sym_quoted_attribute_value_token2,
  [1969] = 2,
    ACTIONS(441), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(443), 1,
      anon_sym_POUND,
  [1976] = 1,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
  [1980] = 1,
    ACTIONS(447), 1,
      sym_tag_name,
  [1984] = 1,
    ACTIONS(449), 1,
      sym_function,
  [1988] = 1,
    ACTIONS(451), 1,
      anon_sym_PERCENT_GT,
  [1992] = 1,
    ACTIONS(453), 1,
      anon_sym_html,
  [1996] = 1,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
  [2000] = 1,
    ACTIONS(457), 1,
      sym_tag_name,
  [2004] = 1,
    ACTIONS(459), 1,
      anon_sym_GT,
  [2008] = 1,
    ACTIONS(461), 1,
      anon_sym_SQUOTE,
  [2012] = 1,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
  [2016] = 1,
    ACTIONS(463), 1,
      sym_tag_name,
  [2020] = 1,
    ACTIONS(465), 1,
      anon_sym_GT,
  [2024] = 1,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
  [2028] = 1,
    ACTIONS(467), 1,
      anon_sym_GT,
  [2032] = 1,
    ACTIONS(469), 1,
      sym_function,
  [2036] = 1,
    ACTIONS(471), 1,
      anon_sym_EQ,
  [2040] = 1,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
  [2044] = 1,
    ACTIONS(473), 1,
      anon_sym_GT,
  [2048] = 1,
    ACTIONS(475), 1,
      anon_sym_EQ,
  [2052] = 1,
    ACTIONS(477), 1,
      anon_sym_DOCTYPE,
  [2056] = 1,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 216,
  [SMALL_STATE(6)] = 280,
  [SMALL_STATE(7)] = 343,
  [SMALL_STATE(8)] = 406,
  [SMALL_STATE(9)] = 469,
  [SMALL_STATE(10)] = 532,
  [SMALL_STATE(11)] = 592,
  [SMALL_STATE(12)] = 612,
  [SMALL_STATE(13)] = 632,
  [SMALL_STATE(14)] = 652,
  [SMALL_STATE(15)] = 672,
  [SMALL_STATE(16)] = 692,
  [SMALL_STATE(17)] = 712,
  [SMALL_STATE(18)] = 732,
  [SMALL_STATE(19)] = 752,
  [SMALL_STATE(20)] = 772,
  [SMALL_STATE(21)] = 792,
  [SMALL_STATE(22)] = 812,
  [SMALL_STATE(23)] = 832,
  [SMALL_STATE(24)] = 852,
  [SMALL_STATE(25)] = 872,
  [SMALL_STATE(26)] = 892,
  [SMALL_STATE(27)] = 912,
  [SMALL_STATE(28)] = 932,
  [SMALL_STATE(29)] = 952,
  [SMALL_STATE(30)] = 972,
  [SMALL_STATE(31)] = 992,
  [SMALL_STATE(32)] = 1012,
  [SMALL_STATE(33)] = 1032,
  [SMALL_STATE(34)] = 1052,
  [SMALL_STATE(35)] = 1078,
  [SMALL_STATE(36)] = 1106,
  [SMALL_STATE(37)] = 1124,
  [SMALL_STATE(38)] = 1142,
  [SMALL_STATE(39)] = 1170,
  [SMALL_STATE(40)] = 1188,
  [SMALL_STATE(41)] = 1206,
  [SMALL_STATE(42)] = 1224,
  [SMALL_STATE(43)] = 1242,
  [SMALL_STATE(44)] = 1260,
  [SMALL_STATE(45)] = 1288,
  [SMALL_STATE(46)] = 1316,
  [SMALL_STATE(47)] = 1334,
  [SMALL_STATE(48)] = 1362,
  [SMALL_STATE(49)] = 1390,
  [SMALL_STATE(50)] = 1407,
  [SMALL_STATE(51)] = 1424,
  [SMALL_STATE(52)] = 1441,
  [SMALL_STATE(53)] = 1458,
  [SMALL_STATE(54)] = 1472,
  [SMALL_STATE(55)] = 1488,
  [SMALL_STATE(56)] = 1507,
  [SMALL_STATE(57)] = 1518,
  [SMALL_STATE(58)] = 1529,
  [SMALL_STATE(59)] = 1540,
  [SMALL_STATE(60)] = 1551,
  [SMALL_STATE(61)] = 1562,
  [SMALL_STATE(62)] = 1573,
  [SMALL_STATE(63)] = 1584,
  [SMALL_STATE(64)] = 1595,
  [SMALL_STATE(65)] = 1612,
  [SMALL_STATE(66)] = 1628,
  [SMALL_STATE(67)] = 1640,
  [SMALL_STATE(68)] = 1656,
  [SMALL_STATE(69)] = 1672,
  [SMALL_STATE(70)] = 1688,
  [SMALL_STATE(71)] = 1704,
  [SMALL_STATE(72)] = 1718,
  [SMALL_STATE(73)] = 1731,
  [SMALL_STATE(74)] = 1744,
  [SMALL_STATE(75)] = 1757,
  [SMALL_STATE(76)] = 1767,
  [SMALL_STATE(77)] = 1777,
  [SMALL_STATE(78)] = 1787,
  [SMALL_STATE(79)] = 1797,
  [SMALL_STATE(80)] = 1807,
  [SMALL_STATE(81)] = 1817,
  [SMALL_STATE(82)] = 1825,
  [SMALL_STATE(83)] = 1835,
  [SMALL_STATE(84)] = 1845,
  [SMALL_STATE(85)] = 1855,
  [SMALL_STATE(86)] = 1863,
  [SMALL_STATE(87)] = 1873,
  [SMALL_STATE(88)] = 1883,
  [SMALL_STATE(89)] = 1893,
  [SMALL_STATE(90)] = 1901,
  [SMALL_STATE(91)] = 1911,
  [SMALL_STATE(92)] = 1921,
  [SMALL_STATE(93)] = 1931,
  [SMALL_STATE(94)] = 1941,
  [SMALL_STATE(95)] = 1948,
  [SMALL_STATE(96)] = 1955,
  [SMALL_STATE(97)] = 1962,
  [SMALL_STATE(98)] = 1969,
  [SMALL_STATE(99)] = 1976,
  [SMALL_STATE(100)] = 1980,
  [SMALL_STATE(101)] = 1984,
  [SMALL_STATE(102)] = 1988,
  [SMALL_STATE(103)] = 1992,
  [SMALL_STATE(104)] = 1996,
  [SMALL_STATE(105)] = 2000,
  [SMALL_STATE(106)] = 2004,
  [SMALL_STATE(107)] = 2008,
  [SMALL_STATE(108)] = 2012,
  [SMALL_STATE(109)] = 2016,
  [SMALL_STATE(110)] = 2020,
  [SMALL_STATE(111)] = 2024,
  [SMALL_STATE(112)] = 2028,
  [SMALL_STATE(113)] = 2032,
  [SMALL_STATE(114)] = 2036,
  [SMALL_STATE(115)] = 2040,
  [SMALL_STATE(116)] = 2044,
  [SMALL_STATE(117)] = 2048,
  [SMALL_STATE(118)] = 2052,
  [SMALL_STATE(119)] = 2056,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(118),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(73),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(105),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(69),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(55),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(55),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(76),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(75),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(82),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(118),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(73),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(69),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(55),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(55),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(76),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(75),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(82),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(68),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(114),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(53),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_slot, 3, .production_id = 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_slot, 3, .production_id = 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_slot, 4, .production_id = 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_slot, 4, .production_id = 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_slot, 3, .production_id = 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_slot, 3, .production_id = 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 3, .production_id = 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 3, .production_id = 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 4, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 4, .production_id = 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_attribute, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(74),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(85),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(66),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ending_expression_value, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(79),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(80),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 4),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(92),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ending_expression_value, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [455] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_attribute_name, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
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
