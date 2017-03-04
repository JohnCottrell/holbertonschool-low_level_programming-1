#include "binary_trees.h"

/**
 * binary_tree_height - returns height of binary tree
 * uses recursive function get_height
 *
 * @tree: node to start from
 * Return: returns height of node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (!tree->left && !tree->right)
		return (0);
	height = get_height(tree->right, 1);
	if (get_height(tree->left, 1) > height)
		height = get_height(tree->left, 1);
	return (height);
}

/**
 * get_height - gets the height of a binary tree
 * used with binary_tree_height
 *
 * @tree: tree to check
 * @height: height of tree
 * Return: returns height of tree
 */
size_t get_height(const binary_tree_t *tree, size_t height)
{
	size_t rheight, lheight;

	if ((!tree) || (!tree->right && !tree->left))
		return (height);
	rheight = get_height(tree->right, height++);
	lheight = get_height(tree->left, height++);
	if (rheight > lheight)
		return (rheight);
	return (lheight);
}
