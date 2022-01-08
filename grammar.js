module.exports = grammar({
  name: 'heex',

  rules: {
    fragment: $ => repeat($._node),

    _node: $ => choice(
      $.doctype,
      $.tag,
      $.component,
      $.text,
      $.comment,
      $.directive
    ),

    doctype: $ => seq(
      '<!',
      'DOCTYPE',
      'html',
      '>'
    ),

    tag: $ => choice(
      seq(
        $.start_tag,
        repeat($._node),
        $.end_tag
      ),
      $.self_closing_tag
    ),

    component: $ => choice(
      seq(
        $.start_component,
        repeat($._node),
        $.end_component
      ),
      $.self_closing_component,
    ),

    start_tag: $ => seq(
      '<',
      $.tag_name,
      repeat(
        choice(
          $.attribute, 
          $.expression,
        )
      ),
      '>'
    ),

    end_tag: $ => seq(
      '</',
      $.tag_name,
      '>'
    ),

    self_closing_tag: $ => seq(
      '<',
      $.tag_name,
      repeat(
        choice(
          $.attribute, 
          $.expression,
        )
      ),
      '/>'
    ),

    start_component: $ => seq(
      '<',
      $.component_name,
      repeat(
        choice(
          $.attribute, 
          $.expression,
        )
      ),
      '>'
    ),

    end_component: $ => seq(
      '</',
      $.component_name,
      '>'
    ),

    self_closing_component: $ => seq(
      '<',
      $.component_name,
      repeat(
        choice(
          $.attribute, 
          $.expression,
        )
      ),
      '/>'
    ),

    expression: $ => seq(
      '{',
      prec.left(
        seq(
          alias(repeat($._expression_value), $.expression_value),
          '}'
        )
      )
    ),

    _expression_value: $ => choice(
      /[^{}]+/,
      seq(
        '{',
        optional($._expression_value),
        '}'
      ),
    ),

    attribute: $ => seq(
      $.attribute_name,
      optional(
        seq(
          '=', 
          choice(
            $.quoted_attribute_value,
            $.attribute_value,
            $.expression
          )
        )
      )
    ),

    attribute_value: $ => /[^<>{}"'=\s]+/,

    quoted_attribute_value: $ => choice(
      seq(
        "'", 
        optional(alias(/[^']+/, $.attribute_value)),
        "'"
      ),
      seq(
        '"', 
        optional(alias(/[^"]+/, $.attribute_value)),
        '"'
      )
    ),

    directive: $ => seq(
      choice('<%', '<%=', '<%%', '<%%='),
      prec.left(
        seq(
          choice($.partial_expression_value, $.expression_value),
          '%>',
        )
      )
    ),
    
    comment: $ => choice($._html_comment, $._bang_comment, $._hash_comment),

    _html_comment: $ => seq(
      '<!--',
      prec.left(
        seq(
          repeat1(/[^-]+|-/),
          '-->'
        )
      )
    ),

    _bang_comment: $ => seq(
      '<%!--',
      prec.left(
        seq(
          repeat1(/[^-]+|-/),
          '--%>'
        )
      )
    ),

    _hash_comment: $ => seq(
      '<%#',
      prec.left(
        seq(
          repeat1($._code),
          '%>'
        )
      )
    ),

    expression_value: $ => repeat1($._code),

    partial_expression_value: $ => seq(
      choice(
        seq(/end[\)\]\}]*/, repeat($._code)),
        seq(repeat($._code), choice('do', '->'), optional(seq('#', repeat($._code)))),
      ),
    ),

    _code: $ => /[^%\s]+|[%\s]/,

    tag_name: $ => /[a-z]+[^\-<>{}!"'/=\s]*/,

    component_name: $ => /[.A-Z]+[^\-<>{}!"'/=\s]*/,

    attribute_name: $ => /[^<>{}"'/=\s]+/,

    text: $ => /[^<>{}\s]([^<>{}]*[^<>{}\s])?/,
}})
