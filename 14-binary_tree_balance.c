#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: return 0 or the height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;
	int h = 0;
	const binary_tree_t *temp = tree;

	if (temp == NULL)
		return (0);
	l = (tree->left) ? 1 + (int)binary_tree_height(tree->left) : 0;
	r = (tree->right) ? 1 + (int)binary_tree_height(tree->right) : 0;
	h = l - r;
	return (h);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: return 0 or the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;
	size_t h = 0;
	const binary_tree_t *temp = tree;

	if (temp == NULL)
		return (h);
	l = (temp->left) ? 1 + binary_tree_height(temp->left) : 0;
	r = (temp->right) ? 1 + binary_tree_height(temp->right) : 0;
	h = (l < r) ? r : l;
	return (h);
}
