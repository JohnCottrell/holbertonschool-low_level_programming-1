#include <stdio.h>
#include "holberton.h"

/**
 * main - prints first 97 fibonacci numbers
 *
 * Description: At the 89th number, switches to uses two
 * unsigned LLs to hold first handful of digits and last digits.
 *
 * Return: returns zero
 */
int main(void)
{
	unsigned long long i, l, f;
	int ii, ll, ff;
	int c, overf;

	i = 1;
	l = 2;
	f = i + l;
	c = i;
	printf("%llu, %llu, ", i, l);
	while (c < 89)
	{
		printf("%llu, ", f);
		i = l;
		l = f;
		f = i + l;
		c++;
	}
	ff = chop(f, 18);
	f = (f - (ff * _llpow(10, 18)));
	ll = chop(l, 18);
	l = (l - (ll * _llpow(10, 18)));
	ii = chop(i, 18);
	i = (i - (ii * _llpow(10, 18)));
	while (c < 95)
	{
		overf = chop(f, 18) + ff;
		printf("%d%lld, ", overf, f - (chop(f, 18) * _llpow(10, 18)));


		ii = ll;
		ll = ff;
		ff = ii + ll;
		i = l;
		l = f;
		f = i + l;

		c++;
	}
	overf = chop(f, 18) + ff;
	printf("%d%lld\n", overf, (f - (chop(f, 18) * _llpow(10, 18))));
}


/**
 * chop - Cuts integer down to specific decimal place.
 *
 * Description: Divides num by a specific power of ten.
 * @num: number to chop down
 * @times: times to chop it down
 * Return: Returns digits left after division.
 */
unsigned long long chop(unsigned long long num, int times)
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
unsigned long long _llpow(int base, int exponent)
{
	unsigned long long val = 1;

	while (exponent > 0)
	{
		val *= base;
		exponent--;
	}
	return (val);

}
