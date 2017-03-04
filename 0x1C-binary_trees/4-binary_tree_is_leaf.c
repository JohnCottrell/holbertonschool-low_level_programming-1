#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks to see if a binary tree node is a leaf
 *
 * @node: pointer to the node being checked
 * Return: Returns 1 if node is a leaf, 0 if not, or if NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right || node->left)
		return (0);
	return (1);
}
