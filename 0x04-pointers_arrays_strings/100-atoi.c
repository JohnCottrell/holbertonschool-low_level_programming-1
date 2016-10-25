#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a given string
 *
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * mypow - Quick pow implementation.
 * Description: Multiples number by itself a number of times
 * designated by the exponent.
 *
 * @base: base number
 * @exponent: exponent, number of times to multiply base by itself
 * Return: returns zero
 */
long mypow(long base, long exponent)
{
	long val = 1;

	while (exponent > 0)
	{
		val *= base;
		exponent--;
	}
	return (val);

}


/**
 * _atoi - Converts a character array to an integer
 *
 * Description: Respects leading '-' and '+' signs
 * integer inside string may be preceded by any number of non-integer values
 * but will only copy the first whole integer found.
 *
 * @s: character array to convert
 * Return: returns integer from array, returns 0 if none found
 */
int _atoi(char *s)
{
	long i, j, neg;
	long temp[100];
	int retval, k;

	i = j = 0;
	k = 1;
	neg = 0;
	retval = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			neg++;
		if (s[i] == '+')
			neg--;
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				temp[j++] = s[i++] - '0';
			}
			break;
		}
		i++;
	}
	j--;
	while (j >= 0)
	{
		retval = retval + (temp[j--] * k);
		k = k * 10;
	}

	if (neg > 0)
		retval = retval - (retval * 2);

	return (retval);

}
