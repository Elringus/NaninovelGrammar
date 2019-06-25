module.exports = grammar({
  name: "naniscript",
  scopeName: "source.naniscript",

  // White space is handled manually in the rules.
  extras: $ => [],

  rules: {
    // Script is the root (master) node.
    script: $ => seq(
      // Script consists of either empty or control lines with line breaks at the end.
      repeat(choice(
        seq(optional($._hor_space), $._ver_space),
        seq(optional($._hor_space), $.line, $._ver_space)
      )),
      // ... and can end with either empty or control line without a line break at the end.
      optional(choice(
        $._hor_space, 
        seq(optional($._hor_space), $.line)
      ))
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
    comment: $ => seq(';', /[^\r\n]*/),

    // Define is a control line starting with '>' followed by a word, a space and a text.
    define: $ => seq('>', $.define_key, $._hor_space, $.define_value),
    define_key: $ => /[a-zA-Z0-9_]+/,
    define_value: $ => /[^{}\r\n]+/,

    // Label is a control line starting with '#' followed by an optional space and a word.
    label: $ => seq('#', optional($._hor_space), $.label_id, optional($._hor_space)),
    label_id: $ => /[a-zA-Z0-9_]+/,

    // Command is a control line starting with '@' followed by a word, a space,
    // an optional nameless paramater and multiple optional named parameters splitted by spaces.
    command: $ => seq(
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
      /(\\.|[^"\s:\[\]{}@])+/,
      $.expression
    )),

    // Generic text is a control line, that doesn't start with any of the other
    // control line start symbols; consists of text and can contain inlined commands and expressions.
    generic_text: $ => seq(
      choice( // This part is solely to prevent generics from grabbing leading spaces.
        $.expression,
        $.inlined_command,
        seq(/[^;>#@\s\[\]{}].?/, /(\\.|[^\r\n\[\]{}])*/),
      ),
      repeat(choice(
        $.expression,
        $.inlined_command,
        seq(/[^;>#@\r\n\[\]{}].?/, /(\\.|[^\r\n\[\]{}])*/),
      ))
    ),

    // Command line without a starting `@` symbol, but wrapped in `[]`;
    // can be injected into generec text lines.
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
