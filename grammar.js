module.exports = grammar({
  name: "Elixir",

  rules: {
    program: ($) => $.expression,

    expression: ($) => choice($.module_definition),

    dot: () => ".",

    module_definition: ($) => seq("defmodule", $.module_name, $.block),

    module_name: () => repeat1(/\.?[A-Z0-9][a-zA-Z0-9]*/),

    block: ($) => seq("do", optional(repeat($.expression)), "end"),
  },
});
