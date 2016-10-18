#include <stdio.h>

/**
 *main - prints even fibonacci numbers that are under 4,000,000
 *
 *
 *Return: returns 0
 */

int main(void)
{
	long f, l, i, sum;

	f = 3;
	i = 1;
	l = 2;
	sum = 2;

	while (f < 3000000)
	{
		if (f % 2 == 0)
			sum += f;
		i = l;
		l = f;
		f = i + l;
	}
	if (f % 2 == 0)
		sum += f;
		printf("%ld\n", sum);

	return (0);
}
