#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a binary tree node as the right child of
 * of a parent node
 *
 * @parent: parent node to insert at
 * @value: value to insert
 * Return: Returns the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if (parent->right == NULL)
		parent->right = new;
	else
	{
		new->right = parent->right;
		parent->right = new;
		(new->right)->parent = new;
	}
	return (new);
}
