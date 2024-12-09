#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 129
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
  [69] = 65,
  [70] = 66,
  [71] = 71,
  [72] = 72,
  [73] = 71,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 66,
  [79] = 66,
  [80] = 75,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 85,
  [87] = 82,
  [88] = 81,
  [89] = 89,
  [90] = 83,
  [91] = 84,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 94,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 103,
  [104] = 104,
  [105] = 103,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 95,
  [121] = 121,
  [122] = 96,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 112,
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
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '%') ADVANCE(21);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(86);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(132);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(132);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(133);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 'O') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'Y') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 46:
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(133);
      END_STATE();
    case 48:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == '<') ADVANCE(56);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(133);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '<') ADVANCE(57);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(133);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(117);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLONlet);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLONfor);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLONstream);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLONif);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_BANG_DASH_DASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_PERCENT_GT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
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
          lookahead != '%') ADVANCE(117);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(117);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_ending_expression_value_token1);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_ending_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_ending_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(117);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_module);
      if (lookahead == '.') ADVANCE(48);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_function);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__code);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'C') ADVANCE(124);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'E') ADVANCE(53);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'O') ADVANCE(120);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'P') ADVANCE(121);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'T') ADVANCE(125);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'Y') ADVANCE(123);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(100);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(54);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(127);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(126);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(96);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(128);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(133);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 50},
  [3] = {.lex_state = 50},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 19},
  [8] = {.lex_state = 50},
  [9] = {.lex_state = 50},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 49},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 49},
  [22] = {.lex_state = 49},
  [23] = {.lex_state = 49},
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 49},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 49},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 49},
  [32] = {.lex_state = 50},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 50},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 50},
  [38] = {.lex_state = 50},
  [39] = {.lex_state = 50},
  [40] = {.lex_state = 50},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 50},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 50},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 50},
  [49] = {.lex_state = 50},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 46},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 46},
  [68] = {.lex_state = 46},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 46},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 46},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 46},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 46},
  [96] = {.lex_state = 46},
  [97] = {.lex_state = 14},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 25},
  [118] = {.lex_state = 36},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 25},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 25},
  [128] = {.lex_state = 0},
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
    [sym_fragment] = STATE(111),
    [sym__node] = STATE(10),
    [sym_doctype] = STATE(10),
    [sym_tag] = STATE(10),
    [sym_component] = STATE(10),
    [sym_start_tag] = STATE(9),
    [sym_self_closing_tag] = STATE(13),
    [sym_start_component] = STATE(3),
    [sym_self_closing_component] = STATE(14),
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
    STATE(6), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(14), 1,
      sym_self_closing_component,
    STATE(31), 1,
      sym_end_component,
    STATE(38), 1,
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
    STATE(4), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_slot,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [72] = 20,
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
    STATE(6), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(14), 1,
      sym_self_closing_component,
    STATE(27), 1,
      sym_end_component,
    STATE(38), 1,
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
    STATE(2), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_slot,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [144] = 19,
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
    STATE(6), 1,
      sym_start_slot,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_tag,
    STATE(14), 1,
      sym_self_closing_component,
    STATE(38), 1,
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
    STATE(4), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_slot,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [213] = 17,
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
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [276] = 17,
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
    STATE(35), 1,
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
    STATE(7), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [338] = 17,
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
    STATE(40), 1,
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
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [400] = 17,
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
    ACTIONS(98), 1,
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
    STATE(25), 1,
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
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [462] = 17,
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
    STATE(29), 1,
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
    STATE(8), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [524] = 16,
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
    ACTIONS(98), 1,
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
    STATE(5), 7,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [583] = 2,
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
  [603] = 2,
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
  [623] = 2,
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
  [643] = 2,
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
  [663] = 2,
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
  [683] = 2,
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
  [703] = 2,
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
  [723] = 2,
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
  [743] = 2,
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
  [763] = 2,
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
  [783] = 2,
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
  [803] = 2,
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
  [823] = 2,
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
  [843] = 2,
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
  [863] = 2,
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
  [883] = 2,
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
  [903] = 2,
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
  [923] = 2,
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
  [943] = 2,
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
  [963] = 2,
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
  [983] = 2,
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
  [1003] = 2,
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
  [1021] = 7,
    ACTIONS(194), 1,
      anon_sym_GT,
    ACTIONS(196), 1,
      anon_sym_SLASH_GT,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_attribute_name,
    STATE(119), 1,
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
  [1049] = 7,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_attribute_name,
    ACTIONS(204), 1,
      anon_sym_GT,
    ACTIONS(206), 1,
      anon_sym_SLASH_GT,
    STATE(119), 1,
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
  [1077] = 2,
    ACTIONS(208), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(210), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1095] = 7,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_attribute_name,
    ACTIONS(212), 1,
      anon_sym_GT,
    ACTIONS(214), 1,
      anon_sym_SLASH_GT,
    STATE(119), 1,
      sym_special_attribute_name,
    ACTIONS(200), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(34), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1123] = 2,
    ACTIONS(216), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(218), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1141] = 2,
    ACTIONS(220), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(222), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1159] = 2,
    ACTIONS(224), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(226), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1177] = 2,
    ACTIONS(228), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(230), 9,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1195] = 6,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      sym_attribute_name,
    STATE(119), 1,
      sym_special_attribute_name,
    ACTIONS(232), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    ACTIONS(237), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(41), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [1221] = 7,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_attribute_name,
    ACTIONS(243), 1,
      anon_sym_GT,
    ACTIONS(245), 1,
      anon_sym_SLASH_GT,
    STATE(119), 1,
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
  [1249] = 7,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_attribute_name,
    ACTIONS(247), 1,
      anon_sym_GT,
    ACTIONS(249), 1,
      anon_sym_SLASH_GT,
    STATE(119), 1,
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
  [1277] = 2,
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
  [1295] = 7,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      sym_attribute_name,
    ACTIONS(255), 1,
      anon_sym_GT,
    ACTIONS(257), 1,
      anon_sym_SLASH_GT,
    STATE(119), 1,
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
  [1323] = 2,
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
  [1341] = 2,
    ACTIONS(263), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(265), 8,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1358] = 2,
    ACTIONS(267), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(269), 8,
      anon_sym_LT_SLASH,
      anon_sym_LBRACE,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1375] = 2,
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
  [1392] = 2,
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
  [1409] = 3,
    ACTIONS(281), 1,
      anon_sym_DOT,
    ACTIONS(283), 1,
      sym_attribute_name,
    ACTIONS(279), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
  [1425] = 2,
    ACTIONS(287), 1,
      anon_sym_EQ,
    ACTIONS(285), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1439] = 1,
    ACTIONS(289), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1450] = 1,
    ACTIONS(291), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1461] = 1,
    ACTIONS(293), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1472] = 1,
    ACTIONS(295), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1483] = 1,
    ACTIONS(297), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1494] = 1,
    ACTIONS(299), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1505] = 1,
    ACTIONS(301), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1516] = 5,
    ACTIONS(305), 1,
      aux_sym_ending_expression_value_token1,
    ACTIONS(307), 1,
      sym__code,
    STATE(69), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(303), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(123), 3,
      sym_expression_value,
      sym_partial_expression_value,
      sym_ending_expression_value,
  [1535] = 5,
    ACTIONS(311), 1,
      aux_sym_ending_expression_value_token1,
    ACTIONS(313), 1,
      sym__code,
    STATE(65), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(309), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(121), 3,
      sym_expression_value,
      sym_partial_expression_value,
      sym_ending_expression_value,
  [1554] = 1,
    ACTIONS(315), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1565] = 5,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(317), 1,
      sym_attribute_value,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    STATE(56), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [1582] = 5,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(327), 1,
      aux_sym__expression_value_token1,
    STATE(68), 1,
      aux_sym_expression_repeat1,
    STATE(77), 1,
      sym__expression_value,
  [1598] = 4,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 1,
      sym__code,
    STATE(66), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(331), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1612] = 3,
    ACTIONS(337), 1,
      sym__code,
    STATE(66), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(335), 3,
      anon_sym_RBRACE,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1624] = 5,
    ACTIONS(340), 1,
      anon_sym_LBRACE,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      aux_sym__expression_value_token1,
    STATE(67), 1,
      aux_sym_expression_repeat1,
    STATE(77), 1,
      sym__expression_value,
  [1640] = 5,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    ACTIONS(327), 1,
      aux_sym__expression_value_token1,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_expression_repeat1,
    STATE(77), 1,
      sym__expression_value,
  [1656] = 4,
    ACTIONS(329), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(352), 1,
      sym__code,
    STATE(70), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(350), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1670] = 3,
    ACTIONS(354), 1,
      sym__code,
    STATE(70), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(335), 3,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1682] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 1,
      aux_sym__expression_value_token1,
    STATE(128), 1,
      sym__expression_value,
  [1695] = 4,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      sym_module,
    ACTIONS(367), 1,
      sym_tag_name,
    STATE(43), 1,
      sym_component_name,
  [1708] = 4,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    ACTIONS(371), 1,
      aux_sym__expression_value_token1,
    STATE(112), 1,
      sym__expression_value,
  [1721] = 3,
    ACTIONS(373), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(375), 1,
      sym__code,
    STATE(79), 1,
      aux_sym__hash_comment_repeat1,
  [1731] = 3,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    ACTIONS(379), 1,
      sym__code,
    STATE(78), 1,
      aux_sym__hash_comment_repeat1,
  [1741] = 3,
    ACTIONS(381), 1,
      aux_sym__html_comment_token1,
    ACTIONS(383), 1,
      anon_sym_DASH_DASH_GT,
    STATE(98), 1,
      aux_sym__html_comment_repeat1,
  [1751] = 2,
    ACTIONS(387), 1,
      aux_sym__expression_value_token1,
    ACTIONS(385), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1759] = 3,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(389), 1,
      sym__code,
    STATE(78), 1,
      aux_sym__hash_comment_repeat1,
  [1769] = 3,
    ACTIONS(335), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(392), 1,
      sym__code,
    STATE(79), 1,
      aux_sym__hash_comment_repeat1,
  [1779] = 3,
    ACTIONS(375), 1,
      sym__code,
    ACTIONS(377), 1,
      anon_sym_PERCENT_GT,
    STATE(79), 1,
      aux_sym__hash_comment_repeat1,
  [1789] = 3,
    ACTIONS(395), 1,
      aux_sym__html_comment_token1,
    ACTIONS(398), 1,
      anon_sym_DASH_DASH_GT,
    STATE(81), 1,
      aux_sym__html_comment_repeat1,
  [1799] = 3,
    ACTIONS(400), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(402), 1,
      sym__code,
    STATE(80), 1,
      aux_sym__hash_comment_repeat1,
  [1809] = 3,
    ACTIONS(379), 1,
      sym__code,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      aux_sym__hash_comment_repeat1,
  [1819] = 3,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    ACTIONS(408), 1,
      sym__code,
    STATE(86), 1,
      aux_sym__hash_comment_repeat1,
  [1829] = 3,
    ACTIONS(375), 1,
      sym__code,
    ACTIONS(400), 1,
      anon_sym_PERCENT_GT,
    STATE(79), 1,
      aux_sym__hash_comment_repeat1,
  [1839] = 3,
    ACTIONS(379), 1,
      sym__code,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      aux_sym__hash_comment_repeat1,
  [1849] = 3,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    ACTIONS(410), 1,
      sym__code,
    STATE(75), 1,
      aux_sym__hash_comment_repeat1,
  [1859] = 3,
    ACTIONS(398), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    ACTIONS(412), 1,
      aux_sym__html_comment_token1,
    STATE(88), 1,
      aux_sym__html_comment_repeat1,
  [1869] = 3,
    ACTIONS(415), 1,
      aux_sym__html_comment_token1,
    ACTIONS(417), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(97), 1,
      aux_sym__html_comment_repeat1,
  [1879] = 3,
    ACTIONS(375), 1,
      sym__code,
    ACTIONS(404), 1,
      anon_sym_PERCENT_GT,
    STATE(79), 1,
      aux_sym__hash_comment_repeat1,
  [1889] = 3,
    ACTIONS(406), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(419), 1,
      sym__code,
    STATE(85), 1,
      aux_sym__hash_comment_repeat1,
  [1899] = 3,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(365), 1,
      sym_module,
    STATE(115), 1,
      sym_component_name,
  [1909] = 3,
    ACTIONS(421), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(423), 1,
      sym__code,
    STATE(74), 1,
      aux_sym__hash_comment_repeat1,
  [1919] = 3,
    ACTIONS(425), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(427), 1,
      sym__code,
    STATE(90), 1,
      aux_sym__hash_comment_repeat1,
  [1929] = 2,
    ACTIONS(431), 1,
      aux_sym__expression_value_token1,
    ACTIONS(429), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1937] = 2,
    ACTIONS(435), 1,
      aux_sym__expression_value_token1,
    ACTIONS(433), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1945] = 3,
    ACTIONS(437), 1,
      aux_sym__html_comment_token1,
    ACTIONS(439), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(88), 1,
      aux_sym__html_comment_repeat1,
  [1955] = 3,
    ACTIONS(441), 1,
      aux_sym__html_comment_token1,
    ACTIONS(443), 1,
      anon_sym_DASH_DASH_GT,
    STATE(81), 1,
      aux_sym__html_comment_repeat1,
  [1965] = 3,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    ACTIONS(445), 1,
      sym__code,
    STATE(83), 1,
      aux_sym__hash_comment_repeat1,
  [1975] = 2,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      aux_sym_quoted_attribute_value_token2,
  [1982] = 2,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    ACTIONS(453), 1,
      anon_sym_POUND,
  [1989] = 2,
    ACTIONS(451), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(455), 1,
      anon_sym_POUND,
  [1996] = 2,
    ACTIONS(457), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(459), 1,
      anon_sym_POUND,
  [2003] = 2,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    ACTIONS(461), 1,
      aux_sym_quoted_attribute_value_token1,
  [2010] = 2,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    ACTIONS(463), 1,
      anon_sym_POUND,
  [2017] = 2,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_expression,
  [2024] = 1,
    ACTIONS(465), 1,
      sym_tag_name,
  [2028] = 1,
    ACTIONS(467), 1,
      anon_sym_EQ,
  [2032] = 1,
    ACTIONS(469), 1,
      anon_sym_SQUOTE,
  [2036] = 1,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
  [2040] = 1,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
  [2044] = 1,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
  [2048] = 1,
    ACTIONS(475), 1,
      sym_tag_name,
  [2052] = 1,
    ACTIONS(477), 1,
      anon_sym_GT,
  [2056] = 1,
    ACTIONS(479), 1,
      anon_sym_GT,
  [2060] = 1,
    ACTIONS(481), 1,
      anon_sym_GT,
  [2064] = 1,
    ACTIONS(483), 1,
      sym_function,
  [2068] = 1,
    ACTIONS(485), 1,
      anon_sym_html,
  [2072] = 1,
    ACTIONS(487), 1,
      anon_sym_EQ,
  [2076] = 1,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
  [2080] = 1,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
  [2084] = 1,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
  [2088] = 1,
    ACTIONS(489), 1,
      anon_sym_PERCENT_GT,
  [2092] = 1,
    ACTIONS(491), 1,
      anon_sym_GT,
  [2096] = 1,
    ACTIONS(493), 1,
      sym_function,
  [2100] = 1,
    ACTIONS(495), 1,
      sym_tag_name,
  [2104] = 1,
    ACTIONS(497), 1,
      anon_sym_DOCTYPE,
  [2108] = 1,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 213,
  [SMALL_STATE(6)] = 276,
  [SMALL_STATE(7)] = 338,
  [SMALL_STATE(8)] = 400,
  [SMALL_STATE(9)] = 462,
  [SMALL_STATE(10)] = 524,
  [SMALL_STATE(11)] = 583,
  [SMALL_STATE(12)] = 603,
  [SMALL_STATE(13)] = 623,
  [SMALL_STATE(14)] = 643,
  [SMALL_STATE(15)] = 663,
  [SMALL_STATE(16)] = 683,
  [SMALL_STATE(17)] = 703,
  [SMALL_STATE(18)] = 723,
  [SMALL_STATE(19)] = 743,
  [SMALL_STATE(20)] = 763,
  [SMALL_STATE(21)] = 783,
  [SMALL_STATE(22)] = 803,
  [SMALL_STATE(23)] = 823,
  [SMALL_STATE(24)] = 843,
  [SMALL_STATE(25)] = 863,
  [SMALL_STATE(26)] = 883,
  [SMALL_STATE(27)] = 903,
  [SMALL_STATE(28)] = 923,
  [SMALL_STATE(29)] = 943,
  [SMALL_STATE(30)] = 963,
  [SMALL_STATE(31)] = 983,
  [SMALL_STATE(32)] = 1003,
  [SMALL_STATE(33)] = 1021,
  [SMALL_STATE(34)] = 1049,
  [SMALL_STATE(35)] = 1077,
  [SMALL_STATE(36)] = 1095,
  [SMALL_STATE(37)] = 1123,
  [SMALL_STATE(38)] = 1141,
  [SMALL_STATE(39)] = 1159,
  [SMALL_STATE(40)] = 1177,
  [SMALL_STATE(41)] = 1195,
  [SMALL_STATE(42)] = 1221,
  [SMALL_STATE(43)] = 1249,
  [SMALL_STATE(44)] = 1277,
  [SMALL_STATE(45)] = 1295,
  [SMALL_STATE(46)] = 1323,
  [SMALL_STATE(47)] = 1341,
  [SMALL_STATE(48)] = 1358,
  [SMALL_STATE(49)] = 1375,
  [SMALL_STATE(50)] = 1392,
  [SMALL_STATE(51)] = 1409,
  [SMALL_STATE(52)] = 1425,
  [SMALL_STATE(53)] = 1439,
  [SMALL_STATE(54)] = 1450,
  [SMALL_STATE(55)] = 1461,
  [SMALL_STATE(56)] = 1472,
  [SMALL_STATE(57)] = 1483,
  [SMALL_STATE(58)] = 1494,
  [SMALL_STATE(59)] = 1505,
  [SMALL_STATE(60)] = 1516,
  [SMALL_STATE(61)] = 1535,
  [SMALL_STATE(62)] = 1554,
  [SMALL_STATE(63)] = 1565,
  [SMALL_STATE(64)] = 1582,
  [SMALL_STATE(65)] = 1598,
  [SMALL_STATE(66)] = 1612,
  [SMALL_STATE(67)] = 1624,
  [SMALL_STATE(68)] = 1640,
  [SMALL_STATE(69)] = 1656,
  [SMALL_STATE(70)] = 1670,
  [SMALL_STATE(71)] = 1682,
  [SMALL_STATE(72)] = 1695,
  [SMALL_STATE(73)] = 1708,
  [SMALL_STATE(74)] = 1721,
  [SMALL_STATE(75)] = 1731,
  [SMALL_STATE(76)] = 1741,
  [SMALL_STATE(77)] = 1751,
  [SMALL_STATE(78)] = 1759,
  [SMALL_STATE(79)] = 1769,
  [SMALL_STATE(80)] = 1779,
  [SMALL_STATE(81)] = 1789,
  [SMALL_STATE(82)] = 1799,
  [SMALL_STATE(83)] = 1809,
  [SMALL_STATE(84)] = 1819,
  [SMALL_STATE(85)] = 1829,
  [SMALL_STATE(86)] = 1839,
  [SMALL_STATE(87)] = 1849,
  [SMALL_STATE(88)] = 1859,
  [SMALL_STATE(89)] = 1869,
  [SMALL_STATE(90)] = 1879,
  [SMALL_STATE(91)] = 1889,
  [SMALL_STATE(92)] = 1899,
  [SMALL_STATE(93)] = 1909,
  [SMALL_STATE(94)] = 1919,
  [SMALL_STATE(95)] = 1929,
  [SMALL_STATE(96)] = 1937,
  [SMALL_STATE(97)] = 1945,
  [SMALL_STATE(98)] = 1955,
  [SMALL_STATE(99)] = 1965,
  [SMALL_STATE(100)] = 1975,
  [SMALL_STATE(101)] = 1982,
  [SMALL_STATE(102)] = 1989,
  [SMALL_STATE(103)] = 1996,
  [SMALL_STATE(104)] = 2003,
  [SMALL_STATE(105)] = 2010,
  [SMALL_STATE(106)] = 2017,
  [SMALL_STATE(107)] = 2024,
  [SMALL_STATE(108)] = 2028,
  [SMALL_STATE(109)] = 2032,
  [SMALL_STATE(110)] = 2036,
  [SMALL_STATE(111)] = 2040,
  [SMALL_STATE(112)] = 2044,
  [SMALL_STATE(113)] = 2048,
  [SMALL_STATE(114)] = 2052,
  [SMALL_STATE(115)] = 2056,
  [SMALL_STATE(116)] = 2060,
  [SMALL_STATE(117)] = 2064,
  [SMALL_STATE(118)] = 2068,
  [SMALL_STATE(119)] = 2072,
  [SMALL_STATE(120)] = 2076,
  [SMALL_STATE(121)] = 2080,
  [SMALL_STATE(122)] = 2084,
  [SMALL_STATE(123)] = 2088,
  [SMALL_STATE(124)] = 2092,
  [SMALL_STATE(125)] = 2096,
  [SMALL_STATE(126)] = 2100,
  [SMALL_STATE(127)] = 2104,
  [SMALL_STATE(128)] = 2108,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(127),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(72),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(107),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(61),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(60),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(60),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(76),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(89),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(93),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(127),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(72),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(61),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(60),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(60),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(76),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(89),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(93),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_slot, 3, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_slot, 3, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_slot, 3, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_slot, 3, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_slot, 4, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_slot, 4, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(64),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(108),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(52),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 3, .production_id = 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 3, .production_id = 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 4, .production_id = 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 4, .production_id = 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_attribute, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(66),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(73),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(77),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(70),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 4),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(78),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(79),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(81),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ending_expression_value, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(88),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ending_expression_value, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_attribute_name, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [471] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
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
