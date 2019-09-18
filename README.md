## Configuration
Reference for prebuild targets: https://github.com/tree-sitter/tree-sitter-ruby/blob/master/package.json

## Publishing
0. Make sure a `.prebuildrc` file (git-ignored) is in the root of the repository that contains a valid GitHub token `upload=<token>`
1. Bump package version in the package.json
2. `yarn run pre-build` (GitHub credentials erros are expected)
3. `npm publish`

