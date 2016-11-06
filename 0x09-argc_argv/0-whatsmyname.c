#include <stdio.h>

/**
 * main - prints name of program to stdout
 * @argv: arguments
 * @argc: number of arguments
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
