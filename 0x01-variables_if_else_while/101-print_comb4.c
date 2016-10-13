#include <stdio.h>

/**
 * main - prints 00-999, but prints only smallest combination of three digits
 *
 * Description: Uses multiple loops to puts all numbers, while ensuring
 * the first number is never larger than the second number
 * Return: returns 0
 */
int main(void)
{
	int i, j, k;

	i = '0';
	j = i + 1;
	k = j + 1;

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '7' || j != '8' || k != '9')
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	putchar('\n');
	return (0);
}
