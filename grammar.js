module.exports = grammar({
  name: "naniscript",
  scopeName: "source.naniscript",

  rules: {
    fragment: $ => repeat($._node),

    _node: $ => choice(
      $.comment,
      $.define,
      $.label,
      $.command,
      $.inlined_command,
      $.generic_text,
      $.expression
    ),

    comment: $ => /;[^\r\n]*/,

    expression: $ => token(prec(1, /{[^{}\r\n]+}/)),

    generic_text: $ => token(prec(-1, /[^\r\n\[\]{}]+/)),

    define: $ => seq('>', $.define_key, $._hor_space, $.define_value),
    define_key: $ => /[a-zA-Z0-9_]+/,
    define_value: $ => /[^{}\r\n]+/,

    label: $ => seq('#', optional($._hor_space), $.label_id),
    label_id: $ => /[a-zA-Z0-9_]+/,

    command: $ => seq(
        '@',
        $.command_id,
        optional($.command_nameless_param),
        repeat($.command_param),
    ),
    inlined_command: $ => seq(
        '[',
        $.command_id,
        optional($.command_nameless_param),
        repeat($.command_param),
        ']'
    ),
    command_id: $ => /[a-zA-Z0-9_]+/,
    command_param: $ => seq(
        $._hor_space,
        $.command_param_id,
        $.command_param_value,
    ),
    command_nameless_param: $ => seq(
      $._hor_space,
      $.command_param_value,
    ),
    command_param_id: $ => prec.left(seq(
      //repeat1(choice($.expression, /[a-zA-Z0-9_]+/)),
      /[a-zA-Z0-9_]+:/,
    )),
    command_param_value: $ => prec.right(repeat1(choice(
      $.expression,
      choice(/[^"\s:\[\]{}@]+/, seq('"', /(\\.|[^"\n\[\]{}])*/, '"'))
    ))),

    _hor_space: $ => /[ \t]+/,
  }
});
