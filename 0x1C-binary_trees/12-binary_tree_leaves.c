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
 * binary_tree_leaves - counts the number of leaves in a binary tree
 *
 * @tree: tree to start counting from
 * Return: Returns the numer of leaves in the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (binary_tree_is_leaf(tree))
	{
		return (1);
	}
	if (tree == NULL)
	{
		return (0);
	}

	leaves = binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
