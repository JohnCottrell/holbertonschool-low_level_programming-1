#include "lists.h"

/**
 * free_listint2 - frees memory allocated for a listint_t structure
 * and sets head to NULL
 *
 * @head: head for listint_t struct
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *walk;

	if (head == NULL || *head == NULL)
		return;
	walk = *head;
	while (head != NULL && walk != NULL)
	{
		tmp = walk;
		walk = walk->next;
		free(tmp);
	}
	*head = NULL;
}
