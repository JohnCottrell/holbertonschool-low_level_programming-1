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

/**
 * binary_tree_is_full - tells if a binary tree is full or not
 *
 * @tree: tree to start checking from
 * Return: returns 1 if full, 0 if not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!full_up(tree))
		return (1);
	return (0);
}

/**
 * full_up - recursively checks to see if a tree is full
 *
 *
 * @tree: tree to check from
 * Return: returns 1 if not full, 0 if full
 */
int full_up(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->right || !tree->left)
		if (tree->right || tree->left)
			return (1);
	return (full_up(tree->left) + full_up(tree->right));
}
