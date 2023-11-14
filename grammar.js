module.exports = grammar({
  name: 'uri',

  rules: {
    source_file: $ => repeat($._definition),
    _definition: $ => choice(
      $.uri
    ),
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
    host: $ => /[^\n@:/]*/, // TODO: should support :
    port: $ => /\d+/,
    path: $ => seq(/[^\n:]/, /([^\n?#]*)?/), // TODO: should support ^:
    query: $ => /[^\n#]*/,
    fragment: $ => /[^\n]*/,
  }
});
