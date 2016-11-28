#include "lists.h"

/**
 * _strlen - returns the length of a given string
 *
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

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
	newnode->str = malloc(_strlen(str) + 1);
	if (newnode->str == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
