#include "binary_trees.h"

/**
 * binary_tree_is_root - checks to see if a given node of a tree is a root
 *
 * @node: node to check
 * Return: Returns 1 if a root, 0 if null or not a root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right && node->left)
		return (1);
	return (0);

}
