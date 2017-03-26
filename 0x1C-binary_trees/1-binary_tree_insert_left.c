#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left child of a node
 * @parent: parent to insert
 * @value: value to insert
 * Return: Returns a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left == NULL)
		parent->left = new;
	else
	{
		new->left = parent->left;
		parent->left = new;
		(new->left)->parent = new;
	}
	return (new);
}
