#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size == 0)
		return NULL;
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return NULL;
	new_table->size = size;
	new_table->array = _calloc(size, sizeof(hash_node_t *));
	if (new_table == NULL)
		return NULL;
	return (new_table);
}

/**
 * _calloc - mallocs assigned memory and sets to zero
 *
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);
	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);
	for (i = 0; i != size; i++)
		*(space + (size * i)) = 0;
	return (space);
}
