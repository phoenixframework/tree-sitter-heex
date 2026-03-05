# Tree-sitter HEEx

[Tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar and parser for [HEEx](https://hexdocs.pm/phoenix_live_view/Phoenix.Component.html#sigil_H/2), the HTML-aware and component-friendly extension of EEx for [Phoenix](https://www.phoenixframework.org/).

For EEx support, see [tree-sitter-eex](https://github.com/connorlay/tree-sitter-eex). For Surface support, see [tree-sitter-surface](https://github.com/connorlay/tree-sitter-surface).

## Installation

### Requirements
* [NodeJS](https://nodejs.org/en/) LTS
* [`node-gyp-build`](https://www.npmjs.com/package/node-gyp-build)
* [mise](https://mise.jdx.dev/) (optional)
* [Docker](https://www.docker.com/) (optional)

See [Creating Parsers](https://tree-sitter.github.io/tree-sitter/creating-parsers) for more information.

### Usage
1. Clone this repository:
```sh
git clone https://github.com/phoenixframework/tree-sitter-heex.git
```

2. (Optional) Install NodeJS via mise:
```sh
cd tree-sitter-heex
mise install
```

3. Install `node-gyp-build` globally:
```sh
npm install -g node-gyp-build
```

4. Install npm dependencies:
```sh
npm install
```

5. Run the tests:
```sh
npm test
```

6. Run the code formatter:
```sh
npm run format
```

7. (Optional) Update the tests (useful when contributing):
```sh
npm run update_test
```

8. (Optional) Run the web playground (requires Docker):
```sh
npm run playground
```

See [Using Parsers](https://tree-sitter.github.io/tree-sitter/using-parsers) for more information.

## Editor Support

* [Neovim](https://neovim.io/) via [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)
* [Helix](https://helix-editor.com/)
* [Zed](https://zed.dev/) via the [Elixir extension](https://zed.dev/extensions/elixir)
