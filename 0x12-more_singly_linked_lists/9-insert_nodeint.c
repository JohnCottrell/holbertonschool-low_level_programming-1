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
	unsigned int i;
	listint_t *walk, *new;

	if (*head == NULL && index != 0)
		return (NULL);
	walk = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	walk = *head;
	i = 0;
	while (i < index - 1)
	{
		walk = walk->next;
		if (walk == NULL)
		{
			free(new);
			return (NULL);
		}
		i++;
	}
	new->next = walk->next;
	walk->next = new;
	return (new);
}
