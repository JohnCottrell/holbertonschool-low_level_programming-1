#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isnumber(char *number);

/**
 * main - prints number of arguments given to program
 * @argv: arguments
 * @argc: number of arguments
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int results, i;

	results = 0;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		if (isnumber(argv[i]))
		{
			results += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", results);
	return (0);
}

int isnumber(char *number)
{
	int i;

	i = 0;
	while (number[i] != '\0')
	{
		if (isdigit(number[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
