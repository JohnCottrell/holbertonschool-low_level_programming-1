#include "lists.h"

/**
 * free_listint - frees memory allocated for a listint_t structure
 * and sets head to NULL
 *
 * @head: head for listint_t struct
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *walk;

	walk = *head;
	if (head == NULL)
		return;
	while (walk != NULL)
	{
		tmp = walk;
		walk = walk->next;
		free(tmp);
	}
	free(walk);
	*head = NULL;
}
