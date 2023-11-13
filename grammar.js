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
      optional($.authority),
      $.path,
      optional(seq('?', $.query)),
      optional(seq('#', $.fragment)),
    ),
    authority: $ => seq(
      '//',
      optional($.userinfo),
      $.host,
      optional(seq(':', $.port)),
    ),
    scheme: $ => /[a-zA-Z][a-zA-Z0-9+.-]*/,
    userinfo: $ => /[^\n@]+@/, // TODO: should separate @
    host: $ => /[^\n@:/]*/, // TODO: should support :
    port: $ => /\d+/,
    path: $ => /\/([^/][^\n?#]*)?/, // NOTE: avoid matching ^//, or authority becomes a part of path
    query: $ => /[^\n#]*/,
    fragment: $ => /[^\n]*/,
  }
});
