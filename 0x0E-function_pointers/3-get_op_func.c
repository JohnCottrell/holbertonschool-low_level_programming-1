#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - determines which operation to use for main
 *
 * @s: char to check
 * Return: returns pointer to appropriate function
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	int (*p[5]) (int, int);
	char operator[] = "+-*/%";

	p[0] = op_add;
	p[1] = op_sub;
	p[2] = op_mul;
	p[3] = op_div;
	p[4] = op_mod;

	i = 0;
	while (operator[i] != s[0])
	{
		i++;
		if (i > 4)
		{
			printf("Error\n");
			exit(99);
		}
	}
	return (*p[i]);
}
