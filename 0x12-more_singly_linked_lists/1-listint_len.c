#include "lists.h"

/**
 * listint_len - returns the number of nodes in a listint_t struct
 *
 * @h: head for listint_t struct
 * Return: returns number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
