#include "binary_trees.h"

/**
 * get_size - gets the size of a binary tree, recursively
 *
 * @tree: tree to start from
 * @size: size of tree
 * Return: returns the size
 */
size_t get_size(const binary_tree_t *tree, size_t size)
{
	if (tree == NULL)
		return (size);
	size++;
	size = get_size(tree->right, size++);
	size += get_size(tree->left, size++);
}

/**
 * binary_tree_size - gets the size of a binary tree
 * uses get_size
 *
 * @tree: tree to work with
 * Return: returns the size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size = 1;
	size += get_size(tree->right, 0);
	size += get_size(tree->left, 0);
	return (size);
}
