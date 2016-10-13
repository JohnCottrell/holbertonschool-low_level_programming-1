#include <stdio.h>

/**
 * main - prints 00-99 in ascending order, seperated by a space
 *
 * Description: Uses two loop to print all numbers. Followed by a comma
 * deliminator and a space if not 99
 *
 * Return: returns 0
 */
int main(void)
{
	int i, j;

	for (i = j = 48; i < 58; i++)
	{
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if ((i + j) != 114)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		j = 48;
	}
	putchar('\n');
	return (0);
}
