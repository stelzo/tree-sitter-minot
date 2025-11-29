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

    conflicts: $ => [
        [$.internal_variable, $.variable_path],
        [$.identifier, $.variable_path],
        [$.variable_path]
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

        // Namespaced variable path (2+ segments): middle parts are namespace segments,
        // final part is the last segment used for assignment/access
        namespace_segment_identifier: $ => prec(2, alias($.identifier, 'namespace_segment_identifier')),
        namespace_segment_internal: $ => prec(2, alias($.internal_variable, 'namespace_segment_internal')),

        path_last_identifier: $ => prec(1, alias($.identifier, 'path_last_identifier')),
        path_last_internal: $ => prec(1, alias($.internal_variable, 'path_last_internal')),

        // Unified dotted path: handles both 2-segment and 3+ segment dotted paths
        // Examples: _topic._a (2 segments), _topic.b.a (3 segments)
        // All segments except the last are namespace segments
        variable_path: $ => prec.dynamic(2, seq(
            choice(
                alias($.identifier, $.namespace_segment_identifier),
                alias($.internal_variable, $.namespace_segment_internal)
            ),
            repeat(seq(
                '.',
                choice(
                    alias($.identifier, $.namespace_segment_identifier),
                    alias($.internal_variable, $.namespace_segment_internal)
                )
            )),
            '.',
            choice(
                alias($.identifier, $.path_last_identifier),
                alias($.internal_variable, $.path_last_internal)
            )
        )),

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

        // Namespace block: identifier.identifier.{ ... } or _var.identifier.{ ... } or just identifier.{ ... }
        namespace_block: $ => prec(4, seq(
            choice($.variable_path, $.identifier, $.internal_variable),
            '.',
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
            $.namespace_block,
            $.variable_path,
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
