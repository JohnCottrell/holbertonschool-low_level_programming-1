#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments given to program
 * @argv: arguments
 * @argc: number of arguments
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int input,  coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	input = atoi(argv[1]);

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
	coins += input;

	printf("%d", coins);
}
