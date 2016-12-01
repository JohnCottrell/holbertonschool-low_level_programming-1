#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node to a given position in a listint_t
 *
 * @head: head for listint_t struct
 * @index: index to add node at
 * @n: value to add to new node
 * Return: returns new node address, or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int i, len;
	listint_t *walk, *new, *last;

	if (head == NULL || *head == NULL)
		return (NULL);
	walk = *head;
	len = 0;
	while (walk->next != NULL)
	{
		walk = walk->next;
		len++;
	}
	if (index > len)
		return (NULL);
	walk = *head;
	if (index == 0)
		return (add_nodeint(head, n));
	if (index == len)
		return (add_nodeint_end(head, n));
	i = 0;
	while (i != index)
	{
		if ((i + 1) == index)
			last = walk;
		walk = walk->next;
		i++;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = walk;
	last->next = new;

	return (walk);
}

/**
 * add_nodeint - adds a node to the beginning of a listint_t struct
 *
 * @head: head for listint_t struct
 * @n: value to add to new node
 * Return: returns new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
