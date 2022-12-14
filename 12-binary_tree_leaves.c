#include "binary_trees.h"

/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree: pointer to root node of tree to count number of leaves
 * Return: 0 or number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0;
	size_t nr = 0;
	size_t nl = 0;

	if (tree == NULL)
		return (0);
	nl = binary_tree_leaves(tree->left);
	nr = binary_tree_leaves(tree->right);
	n = nl + nr;
	return ((!nl && !nr) ? n + 1 : n + 0);
}
