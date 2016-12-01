#include "lists.h"

/**
 * get_nodeint_at_index - returns data for node in listint_t, by specific index
 *
 * @head: head for listint_t struct
 * @index: index of specified node
 * Return: returns data from specified node, or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *walk;

	walk = head;
	i = 0;
	while (i != index)
	{
		if (walk->next == NULL)
			return (NULL);
		walk = walk->next;
		i++;
	}
	return (walk);
}
