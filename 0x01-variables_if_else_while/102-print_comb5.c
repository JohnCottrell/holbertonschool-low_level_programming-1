#include <stdio.h>

/**
 * main - prints 00-99, but prints only smallest combination of two digits
 *
 * Description: Uses multiple loops to putchar all numbers, while ensuring
 * the first number is never larger than the second number
 * Return: returns 0
 */
int main(void)
{
int i, ii, j, jj;

i = ii = j = '0';
jj = '1';
while (i <= '9')
{
	while (ii <= '9')
	{
		while (j <= '9')
		{
			while (jj <= '9')
			{
				putchar(i);
				putchar(ii);
				putchar(' ');
				putchar(j);
				putchar(jj);
				if (i != '9' || j != '9' || ii != '8' || jj != '9')
				{
					putchar(',');
					putchar(' ');
				}
				jj++;
			}
			jj = '0';
			j++;
		}
		j = i;
		jj = ++ii + 1;
	}
	ii = '0';
	jj = '1';
	j = ++i;
}
putchar('\n');
return (0);
}
