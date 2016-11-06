#include <stdio.h>

/**
 * main - prints our its name followed by a new line
 * @argc: arguement count
 * @argv: strings that come after calling function
 * Return: none
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	else
	{
		argv[0] = argv[4];
		printf("%s\n", argv[0]);
	}
	return (0);
}
