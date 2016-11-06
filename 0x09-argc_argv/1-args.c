#include <stdio.h>

/**
 * main - prints number of arguments given to program
 * @argv: arguments
 * @argc: number of arguments
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
