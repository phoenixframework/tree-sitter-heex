package tree_sitter_heex_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_heex "github.com/phoenixframework/tree-sitter-heex/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_heex.Language())
	if language == nil {
		t.Errorf("Error loading Heex grammar")
	}
}
