module.exports = grammar({
  name: 'uri',

  rules: {
    source_file: $ => repeat(seq($._definition, '\n')),
    _definition: $ => choice(
      // $._ignore,
      $.uri
    ),
    // _ignore: $ => /;.*/,
    uri: $ => seq(
      $.scheme,
      ':',
      choice(
        prec(2, seq($.authority, $.path)), // e.g., https://example.com/foo
        $.authority, // e.g., https://example.com
        $.path, // e.g., file:///home
      ),
      optional(seq('?', $.query)),
      optional(seq('#', $.fragment)),
    ),
    authority: $ => seq(
      '//',
      optional($.userinfo),
      optional(choice(
        prec(2, seq($.host, ':', $.port)),
        $.host,
      )),
    ),
    scheme: $ => /[a-zA-Z][a-zA-Z0-9+.-]*/,
    userinfo: $ => /[^\n@]+@/, // TODO: should separate @
    host: $ => choice(
      // host without colon
      /[^\n@:/]+/, // no-colon
      // host not beginning with colon
      seq(/[^\n@:/]+/, /[^\n@/]*:/, choice(
        /[^\n@/:0-9][^\n@/:]*/, // : followed by non-numeric
        /[0-9]+[^\n@/:0-9][^\n@/:]*/, // : followed by non-numeric
      )),
      // TODO: should support ^:
    ),
    port: $ => /\d+/,
    path: $ => seq(/[^\n?#]/, /([^\n?#]*)?/),
    query: $ => /[^\n#]*/,
    fragment: $ => /[^\n]*/,
  }
});
