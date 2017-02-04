#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hsh;

	hsh = key_index(key, ht->size);
	if (ht->array[hsh])
		return ((ht->array[hsh])->value);
	return NULL;

}
