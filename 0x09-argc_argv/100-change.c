#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints least amount of change necessary
 * @argv: arguments given
 * @argc: number of arguments
 * Return: zero on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int input, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	input = atoi(argv[1]);
	if (input < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	coins = 0;
	while (input >= 25)
	{
		input -= 25;
		coins++;
	}
	while (input >= 10)
	{
		input -= 10;
		coins++;
	}
	while (input >= 5)
	{
		input -= 5;
		coins++;
	}
	if (input % 2 != 0)
	{
		coins++;
		input -= 1;
	}
	while (input != 0)
	{
		coins++;
		input -= 2;
	}

	printf("%d\n", coins);
	return (0);
}
