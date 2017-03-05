#include "4-binary_tree_is_leaf.c"
#include "14-binary_tree_balance.c"
#include "binary_trees.h"

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

/**
 * binary_tree_is_perfect - checks to see if a binary tree is perfect
 * a perfect binary tree has a neutral balance and is full
 *
 * @tree: tree to check from
 * Return: returns 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree) && binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}
