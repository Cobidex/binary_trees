#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *u = NULL;

	if (node && node->parent && node->parent->parent)
	{
		u = node->parent->parent;
		u = ((u->left == node->parent) ? u->right : u->left);
	}
	return (u);
}
