#include "hash_tables.h"

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

	if (!ht || !key || strlen(key) == 0)
		return (NULL);
	hsh = key_index((unsigned char *) key, ht->size);
	if (ht->array[hsh])
		return ((ht->array[hsh])->value);
	return (NULL);

}
