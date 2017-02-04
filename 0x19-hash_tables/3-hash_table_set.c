#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - sets a value to a key in a hash_table_t
 *
 * @ht: hash_table_t
 * @key: key for bucket
 * @value: value for bucket
 * Return: Returns 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hsh;
	hash_node_t *node, *walk;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	hsh = key_index((unsigned char *)key, ht->size);
	if (ht->array[hsh])
	{
		walk = ht->array[hsh];
		while (walk && strcmp(walk->key, key) != 0)
			walk = walk->next;
		if (walk && strcmp(walk->key, key) == 0)
		{
			free(walk->value);
			walk->value = strdup(value);
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[hsh];
	ht->array[hsh] = node;
	return (1);
}
