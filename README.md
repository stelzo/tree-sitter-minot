# tree-sitter-minot

Tree-sitter grammar for the Minot Query Language.

## Editor Integration

### Helix

Configure language in `~/.config/helix/languages.toml`:

```toml
[[language]]
name = "minot"
scope = "source.minot"
file-types = ["minot", "mt"]
roots = []
comment-token = "#"
injection-regex = "minot"
indent = { tab-width = 2, unit = "  " }

[[grammar]]
name = "minot"
source = { git = "https://codeberg.org/stelzo/tree-sitter-minot", rev = "225dd5200e00cc894b51d94edd3463a3ec466fb5" }
```

Copy query files to Helix runtime:
```bash
git clone https://codeberg.org/stelzo/tree-sitter-minot.git /tmp/tree-sitter-minot
mkdir -p ~/.config/helix/runtime/queries/minot
cp /tmp/tree-sitter-minot/queries/*.scm ~/.config/helix/runtime/queries/minot/
```

Fetch and build the grammar:
```bash
hx --grammar fetch
hx --grammar build
```

Verify installation:
```bash
hx --health minot
```

Open a `.mt` file in Helix - syntax highlighting should now work!

### Neovim

Follow the instructions to install [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) if it is not already installed.
Then add a custom filetype for Minot in your `init.lua`

```lua
-- minot filetype
vim.filetype.add({
  extension = {
    -- Takes path and bufnr as arguments
    rl = function (_, _)
      return 'minot', function(bufnr)
        -- Configure the buffer for minot
        vim.bo[bufnr].shiftwidth = 2
        vim.bo[bufnr].tabstop = 2
        vim.bo[bufnr].expandtab = true
        pcall(vim.treesitter.start, bufnr, 'minot')
      end
    end
  }
})
```

Install the Minot grammer using nvim-treesitter (see [nvim-treesitter: adding custom languages](https://github.com/nvim-treesitter/nvim-treesitter?tab=readme-ov-file#adding-custom-languages) for reference)

```lua
-- minot tree-sitter-grammar
vim.api.nvim_create_autocmd('User', {pattern = 'TSUpdate',
callback = function()
  require('nvim-treesitter.parsers').minot = {
    install_info = {
      url = 'https://codeberg.org/stelzo/tree-sitter-minot',
      -- Install the provided queries
      queries = 'queries'
    }
  }
end})
```

Run `:TSInstall minot` to install the parser and queries.

Now restart Neovim and open a `.rl` file - syntax highlighting should now work!

### VS Code

Check the marketplace for the Minot extension.

## Development

Prerequisites:
- Node.js and npm
- tree-sitter-cli version 0.23.x (important for Helix compatibility)

Install the correct tree-sitter-cli version:

```bash
npm install -g tree-sitter-cli@0.23
```

Generate Parser
```bash
tree-sitter generate
```

## License

MIT

