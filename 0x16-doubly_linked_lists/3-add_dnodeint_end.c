#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *walk;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head != NULL)
	{
		walk = *head;
		while (walk->next != NULL)
		{
			walk = walk->next;
		}
		walk->next = new;
		new->prev = walk;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return(new);
}
