#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i;
	dlistint_t *walk;

	i = 0;
	walk = head;
	while (i != index)
	{
		walk = walk->next;
		i++;
	}
	return (walk);
}
