module.exports = grammar({
  name: 'uri',

  rules: {
    source_file: $ => repeat($.uri),
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
      choice(
        prec(2, seq($.host, ':', $.port)),
        $.host,
      ),
    ),
    scheme: $ => /[a-zA-Z][a-zA-Z0-9+.-]*/,
    userinfo: $ => /[^\n@]+@/, // TODO: should separate @
    host: $ => choice(
      // host without colon
      /[^\n@:/]+/, // no-colon
      // host not beginning with colon
      seq(/[^\n@:/]+/, /[^\n@/]*:/, choice(
        seq(/[^\n@/:0-9][^\n@/:]*/), // : followed by non-numeric
        seq(/[0-9]+[^\n@/:0-9][^\n@/:]*/), // : followed by non-numeric
      )),
      // TODO: should support ^:
    ),
    port: $ => /\d+/,
    path: $ => seq(/[^\n:]/, /([^\n?#]*)?/), // TODO: should support ^:
    query: $ => /[^\n#]*/,
    fragment: $ => /[^\n]*/,
  }
});
