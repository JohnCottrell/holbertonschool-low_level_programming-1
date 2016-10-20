#include <stdio.h>
#include "holberton.h"

/**
 * main - prints first 97 fibonacci numbers
 *
 * Description: At the 89th number, switches to uses two
 * variables, to hold first handful of digits and last digits.
 *
 * Return: returns zero
 */
int main(void)
{
	unsigned long int i, l, f;
	int ii, ll, ff, c, overf, init;

	i = c = 1;
	l = 2;
	f = 3;
	init = 0;
	printf("%lu, %lu, ", i, l);
	for (c = 0; c < 95; c++)
	{
		if (c < 89)
		{
			printf("%lu, ", f);
		}
		else
		{
				if (init == 0)
				{
					ff = chop(f, 18);
					f %= _llpow(10, 18);
					ll = chop(l, 18);
					l %= _llpow(10, 18);
					ii = chop(i, 18);
					i %= _llpow(10, 18);
					init = 1;
				}
			overf = chop(f, 18) + ff;
			printf("%d%lu", overf, f - (chop(f,18)*_llpow(10,18)));
			if (c != 94)
				printf(", ");
			ii = ll;
			ll = ff;
			ff = ii + ll;
		}
		i = l;
		l = f;
		f = i + l;
	}
	printf("\n");
	return (0);
}



/**
 * chop - Cuts integer down to specific decimal place.
 *
 * Description: Divides num by a specific power of ten.
 * @num: number to chop down
 * @times: times to chop it down
 * Return: Returns digits left after division.
 */
unsigned long int chop(unsigned long int num, int times)
{
	return (num / _llpow(10, times));
}


/**
 * _llpow - Quick pow implementation.
 *
 * Description: Multiples number by itself a number of times
 * designated by the exponent.
 *
 * @base: base number
 * @exponent: exponent, number of times to multiply base by itself
 * Return: returns zero
 */
unsigned long int _llpow(int base, int exponent)
{
	unsigned long int val = 1;

	while (exponent > 0)
	{
		val *= base;
		exponent--;
	}
	return (val);

}
