#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes in a binary tree? or something?
 *
 * @tree: tree
 * Return: not entirely sure honestly?
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (!tree->right && !tree->left))
	{
		return (0);
	}

	return (nodes);
}
