#include <stdio.h>

/**
 * main - prints 00-99, but prints only smallest combination of two digits
 *
 * Description: Uses multiple loops to puts all numbers, while ensuring
 * the first number is never larger than the second number
 * Return: returns 0
 */
int main(void)
{
int i, j, k;

for (i = 48, j = 49, k = 50; i < 58; i++)
{
	while (j < 58)
	{
		if (i != j)
		{
			while (k < 58)
			{
				if (j != k)
				{
					if ((k > j) && (j > i))
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (i < 55)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
				k++;
			}
			k = 50;
		}
		j++;
	}
	j = 49;
}
putchar('\n');
return (0);
}
