#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	unsigned int flag;

	flag = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", (ht->array[i])->key, (ht->array[i])->value);
			flag = 1;
		}
	printf("}");
}
