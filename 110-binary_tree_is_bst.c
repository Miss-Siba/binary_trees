#include "binary_trees.h"

/**
 * is_valid_bst_util - Utility function to recursively
 * check if a binary tree is a valid BST
 * @root: Pointer to the root of the binary tree
 * @min: Minimum allowed value for nodes in the subtree rooted at @root
 * @max: Maximum allowed value for nodes in the subtree rooted at @root
 * Return: true if the tree rooted at @root is a valid BST, false otherwise
 */
bool is_valid_bst_util(const binary_tree_t *root, int min, int max)
{
	if (tree == NULL)
		return (true);
	if (tree->n <= min || tree->n >= max)
		return (false);
	return (is_valid_bst_util(root->left, min, root->n) &&
		is_valid_bst_util(root->right, root->n, max));
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid binary search tree.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (is_valid_bst_util(tree, INT_MIN, INT_MAX) ? 1 : 0);
}
