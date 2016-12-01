#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a specific index in a listint_t
 *
 * @head: head of listint_t
 * @index: index to delete node from
 * Return: Returns 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, len;
	listint_t *walk, *last;

	if (*head == NULL)
		return (-1);
	walk = *head;
	len = 0;
	while (walk->next != NULL)
	{
		walk = walk->next;
		len++;
	}
	if (index > len)
		return (-1);
	walk = *head;
	if (index == 0 && len != 0)
	{
		*head = walk->next;
		free(walk);
		return (1);
	}
	else if (index == 0)
	{
		*head = NULL;
		free(walk);
		return (1);
	}
	i = 0;
	while (i != index)
	{
		if ((i + 1) == index)
			last = walk;
		walk = walk->next;
		i++;
	}
	last->next = walk->next;
	free(walk);
	return (1);

}
