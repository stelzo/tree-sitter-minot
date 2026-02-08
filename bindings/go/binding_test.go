package tree_sitter_minot_test

import (
	"testing"

	tree_sitter_minot "codeberg.org/stelzo/tree-sitter-minot/bindings/go"
	tree_sitter "github.com/tree-sitter/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_minot.Language())
	if language == nil {
		t.Errorf("Error loading Minot grammar")
	}
}
