#include "binary_trees.h"

/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree: pointer to root node of tree to count number of leaves
 * Return: 0 or number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t nl = 0;
	size_t nr = 0;
	size_t nt = 0;

	if (tree)
	{
		nl = (tree->left) ? binary_tree_leaves(tree->left) : 1;
		nr = (tree->right) ? binary_tree_leaves(tree->right) : 1;
	}
	nt = nl + nr;
	return (nt);
}
