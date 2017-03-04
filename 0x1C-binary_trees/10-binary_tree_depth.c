#include "binary_trees.h"

/**
 * binary_tree_depth - gets the depth of a binary tree
 *
 * @node: node to work from
 * Return: Returns the depth as an int
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	depth = 0;
	while (node->parent != NULL)
	{
		node = node->parent;
		depth++;
	}
	return (depth);
}
