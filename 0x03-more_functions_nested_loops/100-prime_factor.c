#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * main - Gives the largest prime factor of a set number
 *
 * Description: Starts at 2
 * If number is divisible by i, divide it, continue on with new, divided
 *
 * Return:
 */
int main(void)
{
	long num = 612852475143;
	long i;

	for (i = 2;i < sqrt(num);i++) {
		if ((num % i) == 0) {
			num /= i;
			}
	}
	printf("%ld\n", num);

	return (0);
}
