#include "hash_tables.h"

/**
 * hash_table_print - prints a hash_table_t out
 *
 * @ht: hash_table_t to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned int flag;

	flag = 0;
	printf("{");
	if (ht->array == NULL)
	{
		printf("{");
		return;
	}
	for (i = 0; i < ht->size; i++)
		while (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", (ht->array[i])->key, (ht->array[i])->value);
			flag = 1;
			ht->array[i] = ((ht->array[i])->next);
		}
	printf("}");
}
