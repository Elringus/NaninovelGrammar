module.exports = grammar({
  name: "naniscript",
  scopeName: "source.naniscript",

  // externals: $ => [
  //   $.expression,
  // ],

  extras: $ => [],

  rules: {
    script: $ => seq(repeat(seq($.line, /[\n\r]+/)), optional($.line)),
    line: $ => seq(
      optional(/[ \t]*/),
      choice(
        $.comment,
        $.define,
        $.label,
        $.command,
        $.generic_text
      ),
      optional(/[ \t]*/),
    ),

    comment: $ => /;[^\r\n]*/,

    define: $ => seq('>', $.define_key, /[ \t]+/, $.define_value),
    define_key: $ => /[a-zA-Z0-9_]+/,
    define_value: $ => /[^{}\r\n]+/,

    label: $ => seq('#', /[ \t]*/, $.label_id),
    label_id: $ => /[a-zA-Z0-9_]+/,

    command: $ => seq(
        '@',
        $.command_id,
        optional($.command_nameless_param),
        repeat($.command_param)
    ),
    command_id: $ => /[a-zA-Z0-9_]+/,
    command_param: $ => seq(
        /[ \t]+/,
        $.command_param_id,
        $.command_param_value,
    ),
    command_nameless_param: $ => seq(
      /[ \t]+/,
      $.command_param_value,
    ),
    command_param_id: $ => /[a-zA-Z0-9_]+:/,
    command_param_value: $ => choice(
      seq('"', choice(repeat1(/(\\.|[^"\r\n\[\]{}])+/), $.expression), '"'),
      repeat1(choice(/[^"\s\r\n:\[\]{}@]+/, $.expression))
    ),

    generic_text: $ => prec(-1, repeat1(choice(
       $.expression,
       $.inlined_command,
       /[^\r\n\[\]{}]+/
    ))),

    inlined_command: $ => seq(
        '[',
        $.command_id,
        optional($.command_nameless_param),
        repeat($.command_param),
        ']'
    ),

    expression: $ => seq('{', /[^\r\n{}]*/, '}'),
  }
});
