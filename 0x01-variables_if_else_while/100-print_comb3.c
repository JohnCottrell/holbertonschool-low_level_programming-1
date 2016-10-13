#include <stdio.h>

/**
 * main - prints 00-99, but prints only smallest combination of two digits
 *
 * Description: Uses multiple loops to print all numbers, while ensuring
 * the first number is never larger than the second number
 * Return: returns 0
 */
int main(void)
{
	int i, j;

	for (i = 48, j = 49; i < 58; i++)
	{
		while (j < 58)
		{
			if (i != j)
			{
				if (j > i)
				{
					putchar(i);
					putchar(j);
					if (i < 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			j++;
		}
		j = 49;
	}
	putchar('\n');
	return (0);
}
