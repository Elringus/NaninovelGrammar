## Configuration
Reference for prebuild targets: https://github.com/tree-sitter/tree-sitter-ruby/blob/master/package.json

## Publishing
0. Make sure a `.prebuildrc` file (git-ignored) is in the root of the repository and contains a valid GitHub token `upload=...`
1. Bump package version
2. `yarn run pre-build` (GitHub credentials erros are expected)
3. `npm publish`

