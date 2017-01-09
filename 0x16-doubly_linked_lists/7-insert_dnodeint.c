#include "lists.h"

/**
 * insert_dnodeint_at_idx - inserts a new node at a specific index
 * @idx: index to insert at
 * @head: head of dlistint_t
 * @n: number for new node
 *
 * Return: Returns address to the new dnodeint, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *walk, *newnode, *temp;
	unsigned int i;

	if (h == NULL && n != 0)
		return (NULL);
	if (h != NULL)
		walk = *h;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	i = 0;
	if (idx == 0)
	{
		newnode->next = walk;
		walk->prev = newnode;
		newnode->prev = NULL;
		*h = newnode;
		return (*h);
	}
	while (i < (idx - 1))
	{
		walk = walk->next;
		i++;
	}
	if (walk == NULL)
	{
		free(newnode);
		return (NULL);
	}
	temp = walk;
	walk = walk->next;
	temp->next = newnode;
	newnode->next = walk;
	newnode->prev = temp;
	return (newnode);
}
