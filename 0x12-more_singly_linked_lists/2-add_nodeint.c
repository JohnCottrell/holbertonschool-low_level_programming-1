#include "lists.h"

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
