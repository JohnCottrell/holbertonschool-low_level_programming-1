#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node to the start of a list_t list
 *
 * @head: pointer to head of list
 * @str: string to add to node
 * Return: address of new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = malloc(strlen(str) + 1);
	if (newnode->str == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
