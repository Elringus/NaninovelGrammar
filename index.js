try {
  module.exports = require("./build/Release/tree_sitter_tree_sitter_nani_script_binding");
} catch (error) {
  try {
    module.exports = require("./build/Debug/tree_sitter_tree_sitter_nani_script_binding");
  } catch (_) {
    throw error
  }
}
