#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *walk, *temp;
	int i;

	if (*head == NULL)
		return -1;
	walk = *head;
	i = 0;
	while (i != index)
	{
		walk = walk->next;
		i++;
	}
	if (walk == NULL)
		return -1;
	if (index == 0)
	{
		if (walk->next != NULL)
		{
			*head = walk->next;
			(walk->next)->prev = NULL;
		}
	}
	temp = walk->next;
	if (index != 0)
		(walk->prev)->next = temp;
	if (walk->prev != NULL)
		temp->prev = walk->prev;
	if (walk->next == NULL)
		*head = NULL;
	free(walk);
	return (1);
}
