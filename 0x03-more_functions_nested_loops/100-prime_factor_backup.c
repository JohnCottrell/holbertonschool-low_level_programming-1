#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * main -
 *
 * Description:
 * Return:
 */
int main(void)
{
	long num = 612852475143;
	long i;

	for (i = 2;i < sqrt(num);i++) {
		if ((num % i) == 0) {
			num /= i;
			if (num >= 1) {
				i = 2;
			}
		}
	}
	printf("%ld", num);
}
