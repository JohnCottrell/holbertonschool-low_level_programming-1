#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program to perform simple operations
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: exits 0 normally, 98 on argc error, 99 on illegal operator
 * or 100 on division/modulo by zero
 */
int main(int argc, char *argv[])
{
	int result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	func = get_op_func(argv[2]);
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	result = func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
