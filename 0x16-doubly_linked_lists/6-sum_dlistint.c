#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	int i;

	i = 0;
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
