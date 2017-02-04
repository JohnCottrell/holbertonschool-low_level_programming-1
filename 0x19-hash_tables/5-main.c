#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	char *my_key = strdup("plop");
	char *my_data = strdup("I'm not really French per say");
	hash_table_set(ht, my_key, my_data);
	free(my_key);
	free(my_data);
	hash_table_print(ht);
}
