#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t struct, returns the data
 *
 * @head: head for listint_t struct
 * Return: returns data from popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int retval;

	if (*head == NULL)
		return (0);

	node = *head;
	retval = node->n;
	*head = node->next;
	free(node);

	return (retval);
}
