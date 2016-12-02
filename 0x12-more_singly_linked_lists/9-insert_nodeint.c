#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a listint_t struct
 *
 * @head: head for listint_t struct
 * @n: value to add to new node
 * Return: returns new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
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
	listint_t *walk, *new;

	if (*head == NULL && index != 0)
		return (NULL);
	walk = *head;
	len = 0;
	while (walk != NULL)
	{
		walk = walk->next;
		len++;
	}
	if (index >= len)
		return (NULL);
	walk = *head;
	if (index == 0)
		return (add_nodeint(head, n));
	if (index == (len - 1))
		return (add_nodeint_end(head, n));
	i = 0;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (i < index - 1)
	{
		if (walk->next == NULL && index > 0)
		{
			free(new);
			return (NULL);
		}
		walk = walk->next;
		i++;
	}
	new->next = walk->next;
	walk->next = new;

	return (new);
}
