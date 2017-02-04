#include "hash_tables.h"
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hsh;
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (-1);
	node->next = NULL;
	hsh = key_index(key, ht->size);
	if (ht->array[hsh] == NULL)
	{
		node->key = strdup(key);
		node->value = strdup(value);
		ht->array[hsh] = node;
		return (1);
	}
	return (0);
}

/**
 * _strlen - returns the length of a given string
 *
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copies an entire string to a buffer
 *
 *
 * @src: source string to copy
 * @dest: buffer to copy string into
 * Return: returns pointer to copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *retval;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	retval = dest;

	return (retval);
}

/**
 * _strdup - duplicates a string to a newly allocated space
 *
 *
 *
 * @str: string to duplicate
 * Return: returns pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dupe;

	if (str == NULL)
		return (NULL);
	dupe = malloc(_strlen(str) + 1);
	if (dupe == NULL)
		return (NULL);
	_strcpy(dupe, str);
	return (dupe);
}
