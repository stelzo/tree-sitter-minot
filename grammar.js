module.exports = grammar({
    name: 'minot',

    extras: $ => [
        /\s/,
        $.comment,
    ],

    conflicts: $ => [
        [$.punctuation, $.loop]
    ],

    rules: {
        source_file: $ => repeat($.statement),

        comment: $ => /#[^\n]*/,

        string: $ => seq(
            '"',
            repeat(choice(
                /[^"\\\n]+/,
                /\\./
            )),
            '"'
        ),

        // Matches paths starting with / or ./
        path: $ => token(/\.?\/+[^\n\s]*/),

        keyword: $ => choice(
            'if',
            'LOG'
        ),

        boolean: $ => choice(
            'true',
            'false'
        ),

        function_call: $ => seq(
            choice('pf', 'reset', 'rule'),
            '!'
        ),

        quantity: $ => token(seq(
            /[+-]?(\d+\.\d*|\.\d+|\d+)/,
            choice('mm', 'm', 'cm', 's', 'ms', 'mins', 'min', 'hours', 'hour')
        )),

        number: $ => token(/[+-]?(\d+\.\d*|\.\d+|\d+)/),

        type_identifier: $ => /[A-Z][a-zA-Z0-9_]*/,

        internal_variable: $ => /_[a-zA-Z_:\d]+/,

        identifier: $ => /[a-zA-Z:][a-zA-Z_:\d]*/,

        operator: $ => choice(
            '<-', '->', '=', '==', '..', '+', '-', '~', ',', '.'
        ),

        punctuation: $ => choice(
            '{', '}', '[', ']', '(', ')'
        )
        ,
        loop: $ => seq(
            'loop',
            $.number,
            '{',
            repeat($.statement),
            '}'
        ),

        statement: $ => choice(
            $.string,
            $.path,
            $.keyword,
            $.boolean,
            $.function_call,
            $.quantity,
            $.number,
            $.type_identifier,
            $.internal_variable,
            $.identifier,
            $.operator,
            $.punctuation,
            $.loop
        )
    }
});
