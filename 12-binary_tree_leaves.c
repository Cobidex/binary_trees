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
	const binary_tree_t *l = tree->left;
	const binary_tree_t *r = tree->right;

	if (tree)
	{
		nl = binary_tree_leaves(l);
		nr = binary_tree_leaves(r);
		n = nl + nr;
		if (l == NULL && r == NULL)
			return (1);
	}
	return (n);
}
