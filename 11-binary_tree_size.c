#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node of the tree to measure the size
 * Return: size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;
	size_t s = 0;

	l = (tree) ? binary_tree_size(tree->left) : 0;
	r = (tree) ? binary_tree_size(tree->right) : 0;
	s = l + r + 1;
	return (s);
}
