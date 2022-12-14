#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: return 0 or the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0;
	const binary_tree_t *temp = tree;

	while (temp != NULL)
	{
		h++;
		if (temp->left)
			temp = temp->left;
		else if (temp->right)
			temp = temp->right;
		else
			temp = NULL;
	}
	return (h);
}
