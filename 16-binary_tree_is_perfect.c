#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 or number
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int b, f;

	if (tree == NULL)
		return (0);
	b = binary_tree_balance(tree);
	f = binary_tree_is_full(tree);

	return ((b && f) ? 1 : 0);
}

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

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);
	return ((l && r) ? 1 : 0);
}
