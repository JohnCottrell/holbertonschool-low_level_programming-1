#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * main - Gives the largest prime factor of a set number
 *
 * Description: Starts at 2
 * If number is divisible by i, divide it, continue on with new, divide.
 * else, increase number, try again. end at sqrt of number
 *
 * Return: returns 0
 */
int main(void)
{
	long num = 612852475143;
	long i;

	for (i = 2; i < sqrt(num); i++)
		while ((num % i) == 0)
			num /= i;
	printf("%ld\n", num);

	return (0);
}
