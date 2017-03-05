#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes in a binary tree that have at least 1 child
 *
 * @tree: tree to start from
 * Return: number of nodes with one or more children, including @tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (!tree->right && !tree->left))
	{
		return (0);
	}

	return (count_nodes(tree, 1));
}

/**
 * count_nodes - recursively counts the number of nodes in a tree
 * that have at least one child
 *
 * @tree: tree to start from
 * @nodes: current count of nodes
 * Return: returns the number of nodes that have at least 1 child
 */
size_t count_nodes(const binary_tree_t *tree, size_t nodes)
{
	size_t count;

	if (tree == NULL || (!tree->right && !tree->left))
	{
		return (0);
	}
	count = nodes;
	count += count_nodes(tree->right, nodes);
	count += count_nodes(tree->left, nodes);
	return (count);
}
