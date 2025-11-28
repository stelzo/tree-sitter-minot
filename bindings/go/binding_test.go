package tree_sitter_minot_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_minot "github.com/stelzo/tree-sitter-minot/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_minot.Language())
	if language == nil {
		t.Errorf("Error loading Minot grammar")
	}
}
