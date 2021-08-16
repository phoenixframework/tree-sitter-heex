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
      $.expression_value,
      '}'
    ),

    expression_value: $ => choice(
      /[^{}]+/,
      '{}',
      seq(
        '{',
        alias($.expression_value, 'expression_value'),
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
          alias(repeat1(/[^%]+|%/), $.expression_value),
          '%>',
        )
      )
    ),

    comment: $ => seq(
      '<%#',
      prec.left(
        seq(
          repeat1(/[^%]+|%/),
          '%>'
        )
      )
    ),

    tag_name: $ => /[a-z]+[^\-<>{}!"'/=\s]*/,

    component_name: $ => /[.A-Z]+[^\-<>{}!"'/=\s]*/,

    attribute_name: $ => /[^<>{}"'/=\s]+/,

    text: $ => /[^<>{}\s]([^<>{}]*[^<>{}\s])?/,
}})
