#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 129
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 1
#define TOKEN_COUNT 47
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
  anon_sym_script = 6,
  anon_sym_LT_SLASH = 7,
  anon_sym_SLASH_GT = 8,
  anon_sym_LT_COLON = 9,
  anon_sym_LT_SLASH_COLON = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  aux_sym__expression_value_token1 = 13,
  anon_sym_EQ = 14,
  anon_sym_COLONlet = 15,
  anon_sym_COLONfor = 16,
  anon_sym_COLONstream = 17,
  anon_sym_COLONif = 18,
  sym_attribute_value = 19,
  anon_sym_SQUOTE = 20,
  aux_sym_quoted_attribute_value_token1 = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_quoted_attribute_value_token2 = 23,
  anon_sym_LT_PERCENT = 24,
  anon_sym_LT_PERCENT_EQ = 25,
  anon_sym_LT_PERCENT_PERCENT = 26,
  anon_sym_LT_PERCENT_PERCENT_EQ = 27,
  anon_sym_PERCENT_GT = 28,
  anon_sym_LT_BANG_DASH_DASH = 29,
  aux_sym__html_comment_token1 = 30,
  anon_sym_DASH_DASH_GT = 31,
  anon_sym_LT_PERCENT_BANG_DASH_DASH = 32,
  anon_sym_DASH_DASH_PERCENT_GT = 33,
  anon_sym_LT_PERCENT_POUND = 34,
  anon_sym_do = 35,
  anon_sym_DASH_GT = 36,
  anon_sym_POUND = 37,
  aux_sym_ending_expression_value_token1 = 38,
  anon_sym_DOT = 39,
  sym_module = 40,
  sym_function = 41,
  sym__code = 42,
  sym_tag_name = 43,
  sym_attribute_name = 44,
  sym_raw_text = 45,
  sym_text = 46,
  sym_fragment = 47,
  sym__node = 48,
  sym_doctype = 49,
  sym_tag = 50,
  sym_component = 51,
  sym_script = 52,
  sym_start_script = 53,
  sym_end_script = 54,
  sym_self_closing_script = 55,
  sym_slot = 56,
  sym_start_tag = 57,
  sym_end_tag = 58,
  sym_self_closing_tag = 59,
  sym_start_component = 60,
  sym_end_component = 61,
  sym_self_closing_component = 62,
  sym_start_slot = 63,
  sym_end_slot = 64,
  sym_self_closing_slot = 65,
  sym_expression = 66,
  sym__expression_value = 67,
  sym_special_attribute = 68,
  sym_special_attribute_name = 69,
  sym_attribute = 70,
  sym_quoted_attribute_value = 71,
  sym_directive = 72,
  sym_comment = 73,
  sym__html_comment = 74,
  sym__bang_comment = 75,
  sym__hash_comment = 76,
  sym_expression_value = 77,
  sym_partial_expression_value = 78,
  sym_ending_expression_value = 79,
  sym_component_name = 80,
  aux_sym_fragment_repeat1 = 81,
  aux_sym_component_repeat1 = 82,
  aux_sym_start_script_repeat1 = 83,
  aux_sym_expression_repeat1 = 84,
  aux_sym__html_comment_repeat1 = 85,
  aux_sym__hash_comment_repeat1 = 86,
  alias_sym_slot_name = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG] = "<!",
  [anon_sym_DOCTYPE] = "DOCTYPE",
  [anon_sym_html] = "html",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_script] = "script",
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
  [sym_raw_text] = "raw_text",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_doctype] = "doctype",
  [sym_tag] = "tag",
  [sym_component] = "component",
  [sym_script] = "script",
  [sym_start_script] = "start_script",
  [sym_end_script] = "end_script",
  [sym_self_closing_script] = "self_closing_script",
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
  [aux_sym_start_script_repeat1] = "start_script_repeat1",
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
  [anon_sym_script] = anon_sym_script,
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
  [sym_raw_text] = sym_raw_text,
  [sym_text] = sym_text,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_doctype] = sym_doctype,
  [sym_tag] = sym_tag,
  [sym_component] = sym_component,
  [sym_script] = sym_script,
  [sym_start_script] = sym_start_script,
  [sym_end_script] = sym_end_script,
  [sym_self_closing_script] = sym_self_closing_script,
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
  [aux_sym_start_script_repeat1] = aux_sym_start_script_repeat1,
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
  [anon_sym_script] = {
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
  [sym_raw_text] = {
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
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_start_script] = {
    .visible = true,
    .named = true,
  },
  [sym_end_script] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_script] = {
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
  [aux_sym_start_script_repeat1] = {
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
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 79,
  [82] = 72,
  [83] = 83,
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
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 86,
  [126] = 87,
  [127] = 127,
  [128] = 106,
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
      if (eof) ADVANCE(57);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == 'D') ADVANCE(132);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'h') ADVANCE(145);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(111);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 5:
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(100);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(147);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(147);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 17:
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(101);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(59);
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
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(48);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == '{') ADVANCE(72);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 52:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 53:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 54:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(111);
      END_STATE();
    case 55:
      if (eof) ADVANCE(57);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_BANG);
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOCTYPE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_script);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_COLON);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLONlet);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLONfor);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLONstream);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLONif);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '%') ADVANCE(90);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT);
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_PERCENT_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(96);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__html_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_BANG_DASH_DASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_PERCENT_GT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_POUND);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_ending_expression_value_token1);
      if (lookahead == '}') ADVANCE(108);
      if (lookahead == ')' ||
          lookahead == ']') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_ending_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_ending_expression_value_token1);
      if (lookahead == ')' ||
          lookahead == ']' ||
          lookahead == '}') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_module);
      if (lookahead == '.') ADVANCE(54);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_function);
      if (!sym_module_character_set_1(lookahead)) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__code);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(126);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(125);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(127);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'C') ADVANCE(134);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'E') ADVANCE(59);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'O') ADVANCE(130);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'P') ADVANCE(131);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'T') ADVANCE(135);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'Y') ADVANCE(133);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(144);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'd') ADVANCE(107);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'i') ADVANCE(143);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(60);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'm') ADVANCE(139);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(137);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(103);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'p') ADVANCE(146);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(138);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(140);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(65);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_raw_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(149);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 56},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 55},
  [6] = {.lex_state = 56},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 55},
  [12] = {.lex_state = 55},
  [13] = {.lex_state = 55},
  [14] = {.lex_state = 55},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 55},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 55},
  [20] = {.lex_state = 55},
  [21] = {.lex_state = 55},
  [22] = {.lex_state = 55},
  [23] = {.lex_state = 55},
  [24] = {.lex_state = 55},
  [25] = {.lex_state = 55},
  [26] = {.lex_state = 55},
  [27] = {.lex_state = 55},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 55},
  [30] = {.lex_state = 55},
  [31] = {.lex_state = 55},
  [32] = {.lex_state = 55},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 55},
  [35] = {.lex_state = 55},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15},
  [46] = {.lex_state = 56},
  [47] = {.lex_state = 56},
  [48] = {.lex_state = 56},
  [49] = {.lex_state = 56},
  [50] = {.lex_state = 56},
  [51] = {.lex_state = 56},
  [52] = {.lex_state = 56},
  [53] = {.lex_state = 56},
  [54] = {.lex_state = 56},
  [55] = {.lex_state = 56},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 15},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 49},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 49},
  [74] = {.lex_state = 49},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 49},
  [77] = {.lex_state = 49},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 49},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 49},
  [87] = {.lex_state = 49},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 56},
  [103] = {.lex_state = 23},
  [104] = {.lex_state = 52},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 53},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 53},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 52},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 23},
  [115] = {.lex_state = 35},
  [116] = {.lex_state = 53},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 52},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 23},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 35},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
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
    [anon_sym_script] = ACTIONS(1),
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
    [sym_fragment] = STATE(117),
    [sym__node] = STATE(10),
    [sym_doctype] = STATE(10),
    [sym_tag] = STATE(10),
    [sym_component] = STATE(10),
    [sym_script] = STATE(10),
    [sym_start_script] = STATE(104),
    [sym_self_closing_script] = STATE(13),
    [sym_start_tag] = STATE(6),
    [sym_self_closing_tag] = STATE(14),
    [sym_start_component] = STATE(3),
    [sym_self_closing_component] = STATE(15),
    [sym_directive] = STATE(10),
    [sym_comment] = STATE(10),
    [sym__html_comment] = STATE(16),
    [sym__bang_comment] = STATE(16),
    [sym__hash_comment] = STATE(16),
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
  [0] = 21,
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
    STATE(3), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(9), 1,
      sym_start_slot,
    STATE(13), 1,
      sym_self_closing_script,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(15), 1,
      sym_self_closing_component,
    STATE(36), 1,
      sym_end_component,
    STATE(51), 1,
      sym_self_closing_slot,
    STATE(104), 1,
      sym_start_script,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(16), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(4), 9,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_script,
      sym_slot,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [76] = 21,
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
    STATE(3), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(9), 1,
      sym_start_slot,
    STATE(13), 1,
      sym_self_closing_script,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(15), 1,
      sym_self_closing_component,
    STATE(33), 1,
      sym_end_component,
    STATE(51), 1,
      sym_self_closing_slot,
    STATE(104), 1,
      sym_start_script,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(16), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(2), 9,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_script,
      sym_slot,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [152] = 20,
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
    STATE(3), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(9), 1,
      sym_start_slot,
    STATE(13), 1,
      sym_self_closing_script,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(15), 1,
      sym_self_closing_component,
    STATE(51), 1,
      sym_self_closing_slot,
    STATE(104), 1,
      sym_start_script,
    ACTIONS(40), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(43), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(16), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(4), 9,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_script,
      sym_slot,
      sym_directive,
      sym_comment,
      aux_sym_component_repeat1,
  [225] = 18,
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
    STATE(3), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_script,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(15), 1,
      sym_self_closing_component,
    STATE(104), 1,
      sym_start_script,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH_COLON,
    ACTIONS(68), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(71), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(16), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_script,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [292] = 18,
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
      anon_sym_LT_SLASH,
    ACTIONS(88), 1,
      sym_text,
    STATE(3), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_script,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(15), 1,
      sym_self_closing_component,
    STATE(35), 1,
      sym_end_tag,
    STATE(104), 1,
      sym_start_script,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(16), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(7), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_script,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [358] = 18,
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
      anon_sym_LT_SLASH,
    ACTIONS(90), 1,
      sym_text,
    STATE(3), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_script,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(15), 1,
      sym_self_closing_component,
    STATE(32), 1,
      sym_end_tag,
    STATE(104), 1,
      sym_start_script,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(16), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_script,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [424] = 18,
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
      anon_sym_LT_SLASH_COLON,
    STATE(3), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_script,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(15), 1,
      sym_self_closing_component,
    STATE(52), 1,
      sym_end_slot,
    STATE(104), 1,
      sym_start_script,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(16), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_script,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [490] = 18,
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
      anon_sym_LT_SLASH_COLON,
    ACTIONS(94), 1,
      sym_text,
    STATE(3), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_script,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(15), 1,
      sym_self_closing_component,
    STATE(48), 1,
      sym_end_slot,
    STATE(104), 1,
      sym_start_script,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(16), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(8), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_script,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [556] = 17,
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
    STATE(3), 1,
      sym_start_component,
    STATE(6), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_self_closing_script,
    STATE(14), 1,
      sym_self_closing_tag,
    STATE(15), 1,
      sym_self_closing_component,
    STATE(104), 1,
      sym_start_script,
    ACTIONS(9), 2,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(11), 2,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
    STATE(16), 3,
      sym__html_comment,
      sym__bang_comment,
      sym__hash_comment,
    STATE(5), 8,
      sym__node,
      sym_doctype,
      sym_tag,
      sym_component,
      sym_script,
      sym_directive,
      sym_comment,
      aux_sym_fragment_repeat1,
  [619] = 2,
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
  [638] = 2,
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
  [657] = 2,
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
  [676] = 2,
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
  [695] = 2,
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
  [714] = 2,
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
  [733] = 2,
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
  [752] = 2,
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
  [771] = 2,
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
  [790] = 2,
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
  [809] = 2,
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
  [828] = 2,
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
  [847] = 2,
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
  [866] = 2,
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
  [885] = 2,
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
  [904] = 2,
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
  [923] = 2,
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
  [942] = 2,
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
  [961] = 2,
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
  [980] = 2,
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
  [999] = 2,
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
  [1018] = 2,
    ACTIONS(184), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(182), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1037] = 2,
    ACTIONS(188), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(186), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1056] = 2,
    ACTIONS(192), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(190), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1075] = 2,
    ACTIONS(196), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(194), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1094] = 2,
    ACTIONS(200), 5,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(198), 9,
      ts_builtin_sym_end,
      anon_sym_LT_COLON,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1113] = 7,
    ACTIONS(202), 1,
      anon_sym_GT,
    ACTIONS(204), 1,
      anon_sym_SLASH_GT,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_attribute_name,
    STATE(118), 1,
      sym_special_attribute_name,
    ACTIONS(208), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(43), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_script_repeat1,
  [1141] = 7,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_attribute_name,
    ACTIONS(212), 1,
      anon_sym_GT,
    ACTIONS(214), 1,
      anon_sym_SLASH_GT,
    STATE(118), 1,
      sym_special_attribute_name,
    ACTIONS(208), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(43), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_script_repeat1,
  [1169] = 7,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_attribute_name,
    ACTIONS(216), 1,
      anon_sym_GT,
    ACTIONS(218), 1,
      anon_sym_SLASH_GT,
    STATE(118), 1,
      sym_special_attribute_name,
    ACTIONS(208), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(42), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_script_repeat1,
  [1197] = 7,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_attribute_name,
    ACTIONS(220), 1,
      anon_sym_GT,
    ACTIONS(222), 1,
      anon_sym_SLASH_GT,
    STATE(118), 1,
      sym_special_attribute_name,
    ACTIONS(208), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(38), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_script_repeat1,
  [1225] = 7,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_attribute_name,
    ACTIONS(224), 1,
      anon_sym_GT,
    ACTIONS(226), 1,
      anon_sym_SLASH_GT,
    STATE(118), 1,
      sym_special_attribute_name,
    ACTIONS(208), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(37), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_script_repeat1,
  [1253] = 7,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_attribute_name,
    ACTIONS(228), 1,
      anon_sym_GT,
    ACTIONS(230), 1,
      anon_sym_SLASH_GT,
    STATE(118), 1,
      sym_special_attribute_name,
    ACTIONS(208), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(43), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_script_repeat1,
  [1281] = 6,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      sym_attribute_name,
    STATE(118), 1,
      sym_special_attribute_name,
    ACTIONS(232), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    ACTIONS(237), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(43), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_script_repeat1,
  [1307] = 7,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_attribute_name,
    ACTIONS(243), 1,
      anon_sym_GT,
    ACTIONS(245), 1,
      anon_sym_SLASH_GT,
    STATE(118), 1,
      sym_special_attribute_name,
    ACTIONS(208), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(43), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_script_repeat1,
  [1335] = 7,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      sym_attribute_name,
    ACTIONS(247), 1,
      anon_sym_GT,
    ACTIONS(249), 1,
      anon_sym_SLASH_GT,
    STATE(118), 1,
      sym_special_attribute_name,
    ACTIONS(208), 4,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
    STATE(44), 4,
      sym_expression,
      sym_special_attribute,
      sym_attribute,
      aux_sym_start_script_repeat1,
  [1363] = 2,
    ACTIONS(251), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(253), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1380] = 2,
    ACTIONS(255), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(257), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1397] = 2,
    ACTIONS(259), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(261), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1414] = 2,
    ACTIONS(263), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(265), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1431] = 2,
    ACTIONS(267), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(269), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1448] = 2,
    ACTIONS(271), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(273), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1465] = 2,
    ACTIONS(275), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(277), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1482] = 2,
    ACTIONS(279), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(281), 8,
      anon_sym_LT_SLASH,
      anon_sym_LT_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1499] = 2,
    ACTIONS(283), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(285), 7,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1515] = 2,
    ACTIONS(287), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(289), 7,
      anon_sym_LT_SLASH,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1531] = 2,
    ACTIONS(291), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(293), 7,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1547] = 2,
    ACTIONS(295), 4,
      anon_sym_LT_BANG,
      anon_sym_LT,
      anon_sym_LT_PERCENT,
      anon_sym_LT_PERCENT_PERCENT,
    ACTIONS(297), 7,
      anon_sym_LT_SLASH_COLON,
      anon_sym_LT_PERCENT_EQ,
      anon_sym_LT_PERCENT_PERCENT_EQ,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_BANG_DASH_DASH,
      anon_sym_LT_PERCENT_POUND,
      sym_text,
  [1563] = 3,
    ACTIONS(301), 1,
      anon_sym_DOT,
    ACTIONS(303), 1,
      sym_attribute_name,
    ACTIONS(299), 7,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
  [1579] = 2,
    ACTIONS(307), 1,
      anon_sym_EQ,
    ACTIONS(305), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1593] = 1,
    ACTIONS(309), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1604] = 1,
    ACTIONS(311), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1615] = 1,
    ACTIONS(313), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1626] = 1,
    ACTIONS(315), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1637] = 1,
    ACTIONS(317), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1648] = 1,
    ACTIONS(319), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1659] = 1,
    ACTIONS(321), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1670] = 5,
    ACTIONS(325), 1,
      aux_sym_ending_expression_value_token1,
    ACTIONS(327), 1,
      sym__code,
    STATE(70), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(323), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
    STATE(108), 3,
      sym_expression_value,
      sym_partial_expression_value,
      sym_ending_expression_value,
  [1689] = 1,
    ACTIONS(329), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      anon_sym_COLONlet,
      anon_sym_COLONfor,
      anon_sym_COLONstream,
      anon_sym_COLONif,
      sym_attribute_name,
  [1700] = 5,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(331), 1,
      sym_attribute_value,
    ACTIONS(333), 1,
      anon_sym_SQUOTE,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    STATE(64), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [1717] = 4,
    ACTIONS(337), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(341), 1,
      sym__code,
    STATE(72), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(339), 2,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1731] = 5,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      aux_sym__expression_value_token1,
    STATE(73), 1,
      aux_sym_expression_repeat1,
    STATE(83), 1,
      sym__expression_value,
  [1747] = 3,
    ACTIONS(351), 1,
      sym__code,
    STATE(72), 1,
      aux_sym__hash_comment_repeat1,
    ACTIONS(349), 3,
      anon_sym_PERCENT_GT,
      anon_sym_do,
      anon_sym_DASH_GT,
  [1759] = 5,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    ACTIONS(347), 1,
      aux_sym__expression_value_token1,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_expression_repeat1,
    STATE(83), 1,
      sym__expression_value,
  [1775] = 5,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 1,
      aux_sym__expression_value_token1,
    STATE(74), 1,
      aux_sym_expression_repeat1,
    STATE(83), 1,
      sym__expression_value,
  [1791] = 5,
    ACTIONS(364), 1,
      anon_sym_script,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      sym_module,
    ACTIONS(370), 1,
      sym_tag_name,
    STATE(45), 1,
      sym_component_name,
  [1807] = 4,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    ACTIONS(376), 1,
      aux_sym__expression_value_token1,
    STATE(128), 1,
      sym__expression_value,
  [1820] = 4,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    ACTIONS(380), 1,
      aux_sym__expression_value_token1,
    STATE(106), 1,
      sym__expression_value,
  [1833] = 3,
    ACTIONS(382), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(384), 1,
      sym__code,
    STATE(82), 1,
      aux_sym__hash_comment_repeat1,
  [1843] = 3,
    ACTIONS(386), 1,
      aux_sym__html_comment_token1,
    ACTIONS(389), 1,
      anon_sym_DASH_DASH_GT,
    STATE(79), 1,
      aux_sym__html_comment_repeat1,
  [1853] = 3,
    ACTIONS(391), 1,
      aux_sym__html_comment_token1,
    ACTIONS(393), 1,
      anon_sym_DASH_DASH_GT,
    STATE(93), 1,
      aux_sym__html_comment_repeat1,
  [1863] = 3,
    ACTIONS(389), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    ACTIONS(395), 1,
      aux_sym__html_comment_token1,
    STATE(81), 1,
      aux_sym__html_comment_repeat1,
  [1873] = 3,
    ACTIONS(349), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(398), 1,
      sym__code,
    STATE(82), 1,
      aux_sym__hash_comment_repeat1,
  [1883] = 2,
    ACTIONS(403), 1,
      aux_sym__expression_value_token1,
    ACTIONS(401), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1891] = 3,
    ACTIONS(405), 1,
      aux_sym__html_comment_token1,
    ACTIONS(407), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(91), 1,
      aux_sym__html_comment_repeat1,
  [1901] = 3,
    ACTIONS(409), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(411), 1,
      sym__code,
    STATE(78), 1,
      aux_sym__hash_comment_repeat1,
  [1911] = 2,
    ACTIONS(415), 1,
      aux_sym__expression_value_token1,
    ACTIONS(413), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1919] = 2,
    ACTIONS(419), 1,
      aux_sym__expression_value_token1,
    ACTIONS(417), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1927] = 3,
    ACTIONS(366), 1,
      anon_sym_DOT,
    ACTIONS(368), 1,
      sym_module,
    STATE(123), 1,
      sym_component_name,
  [1937] = 3,
    ACTIONS(384), 1,
      sym__code,
    ACTIONS(421), 1,
      anon_sym_PERCENT_GT,
    STATE(82), 1,
      aux_sym__hash_comment_repeat1,
  [1947] = 3,
    ACTIONS(423), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(425), 1,
      sym__code,
    STATE(95), 1,
      aux_sym__hash_comment_repeat1,
  [1957] = 3,
    ACTIONS(427), 1,
      aux_sym__html_comment_token1,
    ACTIONS(429), 1,
      anon_sym_DASH_DASH_PERCENT_GT,
    STATE(81), 1,
      aux_sym__html_comment_repeat1,
  [1967] = 3,
    ACTIONS(384), 1,
      sym__code,
    ACTIONS(431), 1,
      anon_sym_PERCENT_GT,
    STATE(82), 1,
      aux_sym__hash_comment_repeat1,
  [1977] = 3,
    ACTIONS(433), 1,
      aux_sym__html_comment_token1,
    ACTIONS(435), 1,
      anon_sym_DASH_DASH_GT,
    STATE(79), 1,
      aux_sym__html_comment_repeat1,
  [1987] = 3,
    ACTIONS(437), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(439), 1,
      sym__code,
    STATE(89), 1,
      aux_sym__hash_comment_repeat1,
  [1997] = 3,
    ACTIONS(384), 1,
      sym__code,
    ACTIONS(441), 1,
      anon_sym_PERCENT_GT,
    STATE(82), 1,
      aux_sym__hash_comment_repeat1,
  [2007] = 3,
    ACTIONS(441), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(443), 1,
      sym__code,
    STATE(92), 1,
      aux_sym__hash_comment_repeat1,
  [2017] = 2,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    ACTIONS(447), 1,
      aux_sym_quoted_attribute_value_token1,
  [2024] = 2,
    ACTIONS(445), 1,
      anon_sym_DQUOTE,
    ACTIONS(449), 1,
      aux_sym_quoted_attribute_value_token2,
  [2031] = 2,
    ACTIONS(451), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(453), 1,
      anon_sym_POUND,
  [2038] = 2,
    ACTIONS(455), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(457), 1,
      anon_sym_POUND,
  [2045] = 2,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_expression,
  [2052] = 2,
    ACTIONS(459), 1,
      anon_sym_LT_SLASH,
    STATE(30), 1,
      sym_end_script,
  [2059] = 1,
    ACTIONS(461), 1,
      sym_function,
  [2063] = 1,
    ACTIONS(463), 1,
      sym_raw_text,
  [2067] = 1,
    ACTIONS(465), 1,
      anon_sym_GT,
  [2071] = 1,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
  [2075] = 1,
    ACTIONS(469), 1,
      sym_tag_name,
  [2079] = 1,
    ACTIONS(471), 1,
      anon_sym_PERCENT_GT,
  [2083] = 1,
    ACTIONS(473), 1,
      sym_tag_name,
  [2087] = 1,
    ACTIONS(475), 1,
      anon_sym_GT,
  [2091] = 1,
    ACTIONS(477), 1,
      anon_sym_GT,
  [2095] = 1,
    ACTIONS(479), 1,
      sym_raw_text,
  [2099] = 1,
    ACTIONS(481), 1,
      anon_sym_EQ,
  [2103] = 1,
    ACTIONS(483), 1,
      sym_function,
  [2107] = 1,
    ACTIONS(485), 1,
      anon_sym_html,
  [2111] = 1,
    ACTIONS(487), 1,
      sym_tag_name,
  [2115] = 1,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
  [2119] = 1,
    ACTIONS(491), 1,
      anon_sym_EQ,
  [2123] = 1,
    ACTIONS(493), 1,
      sym_raw_text,
  [2127] = 1,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
  [2131] = 1,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
  [2135] = 1,
    ACTIONS(497), 1,
      anon_sym_DOCTYPE,
  [2139] = 1,
    ACTIONS(499), 1,
      anon_sym_GT,
  [2143] = 1,
    ACTIONS(501), 1,
      anon_sym_script,
  [2147] = 1,
    ACTIONS(415), 1,
      anon_sym_RBRACE,
  [2151] = 1,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
  [2155] = 1,
    ACTIONS(503), 1,
      anon_sym_GT,
  [2159] = 1,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 76,
  [SMALL_STATE(4)] = 152,
  [SMALL_STATE(5)] = 225,
  [SMALL_STATE(6)] = 292,
  [SMALL_STATE(7)] = 358,
  [SMALL_STATE(8)] = 424,
  [SMALL_STATE(9)] = 490,
  [SMALL_STATE(10)] = 556,
  [SMALL_STATE(11)] = 619,
  [SMALL_STATE(12)] = 638,
  [SMALL_STATE(13)] = 657,
  [SMALL_STATE(14)] = 676,
  [SMALL_STATE(15)] = 695,
  [SMALL_STATE(16)] = 714,
  [SMALL_STATE(17)] = 733,
  [SMALL_STATE(18)] = 752,
  [SMALL_STATE(19)] = 771,
  [SMALL_STATE(20)] = 790,
  [SMALL_STATE(21)] = 809,
  [SMALL_STATE(22)] = 828,
  [SMALL_STATE(23)] = 847,
  [SMALL_STATE(24)] = 866,
  [SMALL_STATE(25)] = 885,
  [SMALL_STATE(26)] = 904,
  [SMALL_STATE(27)] = 923,
  [SMALL_STATE(28)] = 942,
  [SMALL_STATE(29)] = 961,
  [SMALL_STATE(30)] = 980,
  [SMALL_STATE(31)] = 999,
  [SMALL_STATE(32)] = 1018,
  [SMALL_STATE(33)] = 1037,
  [SMALL_STATE(34)] = 1056,
  [SMALL_STATE(35)] = 1075,
  [SMALL_STATE(36)] = 1094,
  [SMALL_STATE(37)] = 1113,
  [SMALL_STATE(38)] = 1141,
  [SMALL_STATE(39)] = 1169,
  [SMALL_STATE(40)] = 1197,
  [SMALL_STATE(41)] = 1225,
  [SMALL_STATE(42)] = 1253,
  [SMALL_STATE(43)] = 1281,
  [SMALL_STATE(44)] = 1307,
  [SMALL_STATE(45)] = 1335,
  [SMALL_STATE(46)] = 1363,
  [SMALL_STATE(47)] = 1380,
  [SMALL_STATE(48)] = 1397,
  [SMALL_STATE(49)] = 1414,
  [SMALL_STATE(50)] = 1431,
  [SMALL_STATE(51)] = 1448,
  [SMALL_STATE(52)] = 1465,
  [SMALL_STATE(53)] = 1482,
  [SMALL_STATE(54)] = 1499,
  [SMALL_STATE(55)] = 1515,
  [SMALL_STATE(56)] = 1531,
  [SMALL_STATE(57)] = 1547,
  [SMALL_STATE(58)] = 1563,
  [SMALL_STATE(59)] = 1579,
  [SMALL_STATE(60)] = 1593,
  [SMALL_STATE(61)] = 1604,
  [SMALL_STATE(62)] = 1615,
  [SMALL_STATE(63)] = 1626,
  [SMALL_STATE(64)] = 1637,
  [SMALL_STATE(65)] = 1648,
  [SMALL_STATE(66)] = 1659,
  [SMALL_STATE(67)] = 1670,
  [SMALL_STATE(68)] = 1689,
  [SMALL_STATE(69)] = 1700,
  [SMALL_STATE(70)] = 1717,
  [SMALL_STATE(71)] = 1731,
  [SMALL_STATE(72)] = 1747,
  [SMALL_STATE(73)] = 1759,
  [SMALL_STATE(74)] = 1775,
  [SMALL_STATE(75)] = 1791,
  [SMALL_STATE(76)] = 1807,
  [SMALL_STATE(77)] = 1820,
  [SMALL_STATE(78)] = 1833,
  [SMALL_STATE(79)] = 1843,
  [SMALL_STATE(80)] = 1853,
  [SMALL_STATE(81)] = 1863,
  [SMALL_STATE(82)] = 1873,
  [SMALL_STATE(83)] = 1883,
  [SMALL_STATE(84)] = 1891,
  [SMALL_STATE(85)] = 1901,
  [SMALL_STATE(86)] = 1911,
  [SMALL_STATE(87)] = 1919,
  [SMALL_STATE(88)] = 1927,
  [SMALL_STATE(89)] = 1937,
  [SMALL_STATE(90)] = 1947,
  [SMALL_STATE(91)] = 1957,
  [SMALL_STATE(92)] = 1967,
  [SMALL_STATE(93)] = 1977,
  [SMALL_STATE(94)] = 1987,
  [SMALL_STATE(95)] = 1997,
  [SMALL_STATE(96)] = 2007,
  [SMALL_STATE(97)] = 2017,
  [SMALL_STATE(98)] = 2024,
  [SMALL_STATE(99)] = 2031,
  [SMALL_STATE(100)] = 2038,
  [SMALL_STATE(101)] = 2045,
  [SMALL_STATE(102)] = 2052,
  [SMALL_STATE(103)] = 2059,
  [SMALL_STATE(104)] = 2063,
  [SMALL_STATE(105)] = 2067,
  [SMALL_STATE(106)] = 2071,
  [SMALL_STATE(107)] = 2075,
  [SMALL_STATE(108)] = 2079,
  [SMALL_STATE(109)] = 2083,
  [SMALL_STATE(110)] = 2087,
  [SMALL_STATE(111)] = 2091,
  [SMALL_STATE(112)] = 2095,
  [SMALL_STATE(113)] = 2099,
  [SMALL_STATE(114)] = 2103,
  [SMALL_STATE(115)] = 2107,
  [SMALL_STATE(116)] = 2111,
  [SMALL_STATE(117)] = 2115,
  [SMALL_STATE(118)] = 2119,
  [SMALL_STATE(119)] = 2123,
  [SMALL_STATE(120)] = 2127,
  [SMALL_STATE(121)] = 2131,
  [SMALL_STATE(122)] = 2135,
  [SMALL_STATE(123)] = 2139,
  [SMALL_STATE(124)] = 2143,
  [SMALL_STATE(125)] = 2147,
  [SMALL_STATE(126)] = 2151,
  [SMALL_STATE(127)] = 2155,
  [SMALL_STATE(128)] = 2159,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(122),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(75),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(109),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(67),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(67),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(80),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(84),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(85),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_repeat1, 2), SHIFT_REPEAT(4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(122),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(75),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(67),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(67),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(80),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(84),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(85),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_script, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_script, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_script, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_script, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_script, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_script, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doctype, 4),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doctype, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_comment, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_comment, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bang_comment, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bang_comment, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hash_comment, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hash_comment, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_script_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_script_repeat1, 2), SHIFT_REPEAT(71),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_script_repeat1, 2), SHIFT_REPEAT(113),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_script_repeat1, 2), SHIFT_REPEAT(59),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_slot, 4, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_slot, 4, .production_id = 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_slot, 3, .production_id = 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_slot, 3, .production_id = 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_slot, 3, .production_id = 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_slot, 3, .production_id = 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_slot, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slot, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 3, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 3, .production_id = 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_slot, 4, .production_id = 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_slot, 4, .production_id = 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_attribute, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(72),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(77),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(83),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(79),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_comment_repeat1, 2), SHIFT_REPEAT(81),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__hash_comment_repeat1, 2), SHIFT_REPEAT(82),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ending_expression_value, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 4),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ending_expression_value, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial_expression_value, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial_expression_value, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_script, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_attribute_name, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [489] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_script, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
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
