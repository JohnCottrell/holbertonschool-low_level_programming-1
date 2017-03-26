#include "binary_trees.h"
#include <stdio.h>

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

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (first->parent == second)
		return (first->parent);
	if (second->parent == first)
		return (second->parent);
	if (binary_tree_depth(first) > binary_tree_depth(second))
		first = first->parent;
	else
		second = second->parent;
	return (binary_trees_ancestor(first, second));
}
