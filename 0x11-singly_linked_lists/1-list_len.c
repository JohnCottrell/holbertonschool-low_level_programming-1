#include "lists.h"

/**
 * list_len - returns number of elements in a list
 *
 * @h: head of const list being counted
 * Return: returns number of elements
 */
size_t list_len(const list_t *h)
{
	int i;
	const list_t *temp;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
