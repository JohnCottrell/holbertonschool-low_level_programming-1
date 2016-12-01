#include "lists.h"

/**
 * reverse_listint - reverses a listint_t struct
 *
 * @head: pointer to head of a listint_t
 * Return: Returns a pointer to the new head pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *list, *temp;

	list = 0;
	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = list;
		list = (*head);
		(*head) = temp;
	}
	(*head) = list;
	return (*head);
}
