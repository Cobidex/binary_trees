#include "binary_trees.h"

/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree: pointer to root node of tree to count number of leaves
 * Return: 0 or number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0;
	const binary_tree_t *l = tree->left;
	const binary_tree_t *r = tree->right;

	if (tree)
		n = (l && r) ? binary_tree_leaves(tree->left) : 1;
	return (n);
}
