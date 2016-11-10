#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - mallocs memory asked, exits with code 98 on failure
 *
 * @b: memory required
 * Return: pointer to memory requested
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
