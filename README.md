# Tree-sitter HEEx

[Tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar and parser for [HEEx](https://hexdocs.pm/phoenix_live_view/Phoenix.LiveView.Helpers.html#sigil_H/2), the HTML-aware and component-friendly extension of EEx for [Phoenix](https://www.phoenixframework.org/).

For EEx support, see [tree-sitter-eex](https://github.com/connorlay/tree-sitter-eex). For Surface support, see [tree-sitter-surface](https://github.com/connorlay/tree-sitter-surface).

## Installation

### Requirements
* [NodeJS](https://nodejs.org/en/) LTS
* [asdf](https://asdf-vm.com/) (optional)
* [Docker](https://www.docker.com/) (optional)

See [Creating Parsers](https://tree-sitter.github.io/tree-sitter/creating-parsers) for more information.

### Usage
1. Clone this repository:
```sh
git clone https://github.com/phoenixframework/tree-sitter-heex.git
```

2. (Optional) Install NodeJS via asdf:
```sh
cd tree-sitter-heex
asdf install
```

3. Install npm dependencies:
```sh
npm install
```

4. Run the tests:
```sh
npm test
```

5. Run the code formatter:
```sh
npm run format
```

6. (Optional) Update the tests (useful when contributing):
```sh
npm run update_test
```

7. (Optional) Run the web playground (requires Docker):
```sh
npm run playground
```

See [Using Parsers](https://tree-sitter.github.io/tree-sitter/using-parsers) for more information.

## Editor Support

* [neovim](https://neovim.io/) via [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter)
* [helix](https://helix-editor.com/)
