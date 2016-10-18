#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 OR 5 below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 0;
	int t = 0;

	while (n < 1024)
	{
		if (n % 3 == 0)
			t += n;
		else if (n % 5 == 0)
			t += n;
		n++;
	}
	printf("%d\n", t);

	return (0);
}
