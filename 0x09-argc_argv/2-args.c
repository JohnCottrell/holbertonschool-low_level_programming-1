#include <stdio.h>

/**
 * main - prints all arguments sent to the program
 * @argv: arguments
 * @argc: number of arguments
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i != argc)
		printf("%s\n", argv[i++]);
	return (0);
}
