#include "lists.h"

/**
 * print_listint - prints the values of a listint_t struct
 *
 * @h: head for listint_t struct to print
 * Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
