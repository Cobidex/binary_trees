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
		return (h);
	l = (temp->left) ? 1 + binary_tree_height(temp->left) : 0;
	r = (temp->right) ? 1 + binary_tree_height(temp->right) : 0;
	h = (l < r) ? r - l : l - r;
	return (h);
}
