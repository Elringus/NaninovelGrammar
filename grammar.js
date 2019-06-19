module.exports = grammar({
  name: "naniscript",
  scopeName: "source.naniscript",

  // Handle white space manually.
  extras: $ => [],

  rules: {
    // Script is the root node.
    script: $ => seq(
      // Script consists of either empty or control lines with line breaks at the end.
      repeat(choice(seq(optional($._hor_space), $._ver_space), seq($.line, $._ver_space))),
      // ... and can end with either empty or control line without a line break at the end.
      optional(choice($._hor_space, $.line))
    ),

    // A control line is: a comment, define, label, command or generic text line.
    // A control line can optionally be wrapped in hor. space.
    line: $ => seq(
      optional($._hor_space),
      choice(
        $.comment,
        $.define,
        $.label,
        $.command,
        $.generic_text
      ),
      optional($._hor_space)
    ),

    // Comment is a control line starting with ';'.
    comment: $ => seq(';', /[^\r\n]*/),

    // Define is a control line starting with '>' followed by a word, a space and a text.
    define: $ => seq('>', $.define_key, $._hor_space, $.define_value),
    define_key: $ => /[a-zA-Z0-9_]+/,
    define_value: $ => /[^{}\r\n]+/,

    // Label is a control line starting with '#' followed by an optional space and a word.
    label: $ => seq('#', optional($._hor_space), $.label_id),
    label_id: $ => /[a-zA-Z0-9_]+/,

    // Command is a control line starting with '@' followed by a word, a space,
    // an optional nameless paramater and multiple optional named parameters splitted by spaces.
    command: $ => prec.right(seq(
        '@',
        $.command_id,
        optional($.command_nameless_param),
        repeat($.command_param)
    )),
    command_id: $ => /[a-zA-Z0-9_]+/,
    command_nameless_param: $ => seq(
      $._hor_space,
      $.command_param_value,
    ),
    command_param: $ => seq(
        $._hor_space,
        $.command_param_id,
        $.command_param_value,
    ),
    command_param_id: $ => /[a-zA-Z0-9_]+:/,
    command_param_value: $ => choice(
      seq('"', choice(repeat1(/(\\.|[^"\r\n\[\]{}])+/), $.expression), '"'),
      repeat1(choice(/[^"\s\r\n:\[\]{}@]+/, $.expression))
    ),

    // Generic text is a control line, that doesn't start with any of the other
    // control line start symbols; consists of a text and can contain inlined commands and expressions.
    generic_text: $ => choice($.expression, $.inlined_command, seq(/[^\r\n;>#@]./, repeat(choice(
       $.expression,
       $.inlined_command,
       /[^\r\n\[\]{}]*/
    )))),

    // A body of a command line, without a starting symbol, but wrapped in `[]`;
    // can be injected intro generec text lines.
    inlined_command: $ => seq(
        '[',
        $.command_id,
        optional($.command_nameless_param),
        repeat($.command_param),
        ']'
    ),

    // A text wrapped in `{}`; can be injected into generic text lines and
    // command parameter values.
    expression: $ => token(seq('{', /[^\r\n{}]*/, '}')),

    // Horizontal line space (spaces and tabs).
    _hor_space: $ => token(repeat1(choice(' ', '\t'))),
    // Vertical line space (line breaks).
    _ver_space: $ => token(repeat1(choice('\n', '\r'))),
  }
});
