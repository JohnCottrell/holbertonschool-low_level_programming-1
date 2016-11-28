#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node to the END of a list_t list
 *
 * @head: pointer to head of list
 * @str: string to add to node
 * Return: address of new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	newnode->str = strdup(str);
	if (newnode->str == NULL)
		return (NULL);
	newnode->len = strlen(str);
	if (*head == NULL)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = NULL;
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
