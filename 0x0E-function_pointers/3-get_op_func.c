#include "3-calc.h"
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
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (*(ops[i]).op != s[0])
	{
		if (i > 4 || s[1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}
		i++;
	}
	return (ops[i].f);
}
