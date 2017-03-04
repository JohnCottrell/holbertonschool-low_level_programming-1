#include "binary_trees.h"
#include <stdio.h>

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

size_t get_height(const binary_tree_t *tree, size_t height)
{
	size_t rheight, lheight;
	if ((!tree) || (!tree->right && !tree->left))
		return height;
	rheight = get_height(tree->right, height++);
	lheight = get_height(tree->left, height++);
	if (rheight > lheight)
		return (rheight);
	return (lheight);
}

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
