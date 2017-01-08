#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *walk;

	while (head != NULL)
	{
		walk = head;
		head = head->next;
		free(walk);
	}
}
