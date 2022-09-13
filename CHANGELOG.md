# Changelog

## Unreleased
- Support `:if` HEEx special attributes on tags, components, and slots

## 0.5.0
- Add new nodes to support HEEx special attributes `:let`, `:for`, and `:stream`
- Support self-closing HEEx slots
- Support hyphens in HTML tag names
- Update README
- Add prettier code formatter

## 0.4.1
- Add package.json metadata required to integrate with tree-sitter-elixir
- Update tree-sitter-cli and regenerate parser

## 0.4.0

- Add new nodes to support HEEx slots
- Fix: allow for empty comments
- Update highlights to match those in nvim-treesitter
- Update README

## 0.3.1

- Upgrade to tree-sitter-cli 0.20.4

## 0.3.0

- Add highlight queries, thanks @the-mikedavis!
- Add injection queries, thanks @the-mikedavis!
- Add `partial_expression_value` node to support multi-clause directives, thanks @the-mikedavis!
- Add support for multi-line EEx comments, thanks @the-mikedavis!
- Add support for HTML comments, thanks @the-mikedavis!

## 0.2.1

- Bugfix: allow brackets in `expression_value` nodes, thanks @the-mikedavis!

## 0.2.0

- Add missing `doctype` node
- Simplify comments definition by removing redundant choice calls

## 0.1.0

- Initial release
