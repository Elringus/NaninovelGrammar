module.exports = grammar({
  name: "naniscript",
  scopeName: "source.naniscript",

  extras: $ => [
    $.error // Error tokens can appear anywhere.
    // /\s+/ (white space) is manually handled in the rules.
  ],

  rules: {

    // Script is the root (master) node.
    script: $ => seq(
      // Script consists of either empty or control lines with line breaks at the end.
      repeat(choice(
        seq(optional($._hor_space), $._ver_space),
        seq($.line, $._ver_space)
      )),
      // ... and can end with either empty or control line without a line break at the end.
      optional(choice($._hor_space, $.line))
    ),

    // Сontrol line is: comment, define, label, command or generic text line.
    line: $ => choice(
      $.comment,
      $.define,
      $.label,
      $.command,
      $.generic_text
    ),

    // Comment is a control line starting with ';' followed by a text.
    comment: $ => seq(optional($._hor_space), ';', /[^\r\n]*/),

    // Define is a control line starting with '>' followed by a word, a space and a text.
    define: $ => seq(optional($._hor_space), '>', $.define_key, $._hor_space, $.define_value),
    define_key: $ => /[a-zA-Z0-9_]+/,
    define_value: $ => /[^{}\r\n]+/,

    // Label is a control line starting with '#' followed by an optional space and a word.
    label: $ => seq(optional($._hor_space), '#', optional($._hor_space), $.label_id),
    label_id: $ => /[a-zA-Z0-9_]+/,

    // Command is a control line starting with '@' followed by a word, a space,
    // an optional nameless paramater and multiple optional named parameters splitted by spaces.
    command: $ => seq(
        optional($._hor_space),
        '@',
        $.command_id,
        optional($.command_nameless_param),
        repeat($.command_param),
        optional($._hor_space)
    ),
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
    command_param_value: $ => repeat1(choice(
      seq('"', repeat(choice(/(\\.|[^"\r\n\[\]{}])+/, $.expression)), '"'),
      /[^"\s\r\n:\[\]{}@]+/,
      $.expression
    )),

    // Generic text is a control line, that doesn't start with any of the other
    // control line start symbols; consists of text and can contain inlined commands and expressions.
    generic_text: $ => seq(
      optional($._hor_space),
      repeat1(choice(
        $.expression,
        $.inlined_command,
        seq(/[^;>#@\s\[\]{}].?/, /(\\.|[^\r\n\[\]{}])*/)
      )
    )),

    // Command line without a starting `@` symbol, but wrapped in `[]`;
    // can be injected into generec text lines.
    inlined_command: $ => seq(
        '[',
        $.command_id,
        optional($.command_nameless_param),
        repeat($.command_param),
        ']',
        optional($._hor_space)
    ),

    // A text wrapped in `{}`; can be injected into generic text lines and
    // command parameter values.
    expression: $ => token(seq('{', /[^\r\n{}]*/, '}', optional(/[ \t]*/))),

    // Used as a fallback when other tokens don't match.
    error: $ => token(prec(-1, /[\s\S]+/)),

    // Horizontal line space (spaces and tabs).
    _hor_space: $ => token(repeat1(choice(' ', '\t'))),
    // Vertical line space (line breaks).
    _ver_space: $ => token(repeat1(choice('\n', '\r'))),
  }
});
