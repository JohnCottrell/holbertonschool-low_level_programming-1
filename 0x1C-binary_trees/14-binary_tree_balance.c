#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - function that returns the height of a binary tree
 * uses the recursive function get_height
 *
 * @tree: tree to check at
 * Return: returns the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	height = get_height(tree->right, 1);
	if (get_height(tree->left, 1) > height)
		height = get_height(tree->left, 1);
	return (height);
}

/**
 * get_height - recursively gets the height of a binary tree
 *
 * @tree: tree to start at
 * @height: height, used for recursive magicks
 * Return: returns the height of the tree
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

/**
 * binary_tree_balance - returns the balance of a binary tree
 * balance is simply left - right
 *
 * @tree: tree to start as root
 * Return: returns the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	balance = 0;

	if (tree->left)
		balance = binary_tree_height(tree->left) + 1;
	if (tree->right)
		balance -= binary_tree_height(tree->right) + 1;

	return (balance);
}
