/**
 * @file Minot Query Language
 * @author Christopher Sieh <stelzo@steado.de>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
    name: 'minot',

    extras: $ => [
        /\s/,
        $.comment,
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

        // Array literal with brackets
        array: $ => prec(1, seq(
            alias('[', $.punctuation),
            optional(seq(
                $.statement,
                repeat(seq(
                    alias(',', $.operator),
                    $.statement
                ))
            )),
            alias(']', $.punctuation)
        )),

        // Block structure with braces
        block: $ => seq(
            alias('{', $.punctuation),
            repeat($.statement),
            alias('}', $.punctuation)
        ),

        // Parenthesized expression
        paren_expr: $ => seq(
            alias('(', $.punctuation),
            repeat($.statement),
            alias(')', $.punctuation)
        ),

        loop: $ => prec(1, seq(
            alias('loop', $.keyword),
            $.number,
            $.block
        )),

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
            $.array,
            $.block,
            $.paren_expr,
            $.loop
        )
    }
});
