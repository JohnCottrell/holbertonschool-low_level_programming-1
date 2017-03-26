#include "binary_trees.h"

/**
 * binary_tree_sibling - returns the sibling of a binary tree node
 *
 * @node: node to get sibling of
 * Return: returns a pointer to the node's sibling, or NULL if there is none
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent, *sibling;

	parent = node->parent;
	if (!parent)
		return (NULL);
	if (parent->left == node)
		sibling = parent->right;
	else if (parent->right == node)
		sibling = parent->left;
	return (sibling);
}


/**
 * binary_tree_uncle - returns the uncle of a binary tree node
 *
 * @node: node to get uncle of
 * Return: returns a pointer to the node's uncle, or NULL if there is none
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	parent = node->parent;
	if (!parent)
		return (NULL);
	return (binary_tree_sibling(parent));
}
