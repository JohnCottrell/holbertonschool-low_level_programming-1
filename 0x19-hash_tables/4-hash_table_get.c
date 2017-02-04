#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - returns a value associated with a key in a ht
 *
 * @ht: hash_table_t we're working with
 * @key: key to search for
 * Return: Returns pointer to value, or NULL on fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hsh;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	hsh = key_index((const unsigned char *) key, ht->size);
	if (ht->array != NULL && ht->array[hsh] != NULL)
	{
		node = ht->array[hsh];
		while (strncmp(node->key, key, strlen(key)) != 0 && node)
		{
			node = node->next;
		}
		if (node && strncmp(node->key, key, strlen(key)) == 0)
			return (node->value);
	}
	return (NULL);
}
