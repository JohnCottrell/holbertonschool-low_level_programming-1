#include "lists.h"

/**
 * add_dnodeint - adds a node to a doubly linked list
 *
 * @head: head of dlist
 * @n: number to put into new node
 * Return: Returns the address of the new element, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
