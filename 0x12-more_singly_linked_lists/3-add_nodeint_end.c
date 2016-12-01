#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a listint_t struct
 *
 * @head: head for listint_t struct
 * @n: value to add to new node
 * Return: returns new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
