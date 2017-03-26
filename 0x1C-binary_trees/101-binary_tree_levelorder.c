#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

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
	return (size);
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

sl_node_t *add_node_end(sl_node_t **head, sl_node_t **tail, binary_tree_t *value)
{
	sl_node_t *new;

	new = malloc(sizeof(sl_node_t));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		*tail = new;
		return (new);
	}
	if (*tail)
		(*tail)->next = new;
	*tail = new;

	return (new);
}

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **queue;
	sl_node_t *head, *tail, *temp, *walk;

	head = tail = NULL;
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);
	if (tree->left)
		add_node_end(&head, &tail, tree->left);
	if (tree->right)
		add_node_end(&head, &tail, tree->right);
	walk = head;
	while (walk)
	{
		func((walk->value)->n);
		if ((walk->value)->left)
			add_node_end(&head, &tail, (walk->value)->left);
		if ((walk->value)->right)
			add_node_end(&head, &tail, (walk->value)->right);
		temp = walk;
		walk = walk->next;
		free(temp);
	}
}
