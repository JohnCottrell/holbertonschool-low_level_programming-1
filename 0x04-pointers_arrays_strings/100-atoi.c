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
	long i, e, neg, places, temp;
	int retval;
	
	i = 0;
	neg = 0;

	while (s[i] < '0'  || s[i] > '9')
	{
		if (s[i] == '-')
			neg++;
		if (s[i] == '+')
			neg--;
		i++;
	}

	e = i;

	while (s[e] >= '0' && s[e] <= '9' && s[e] != '\0')
		e++;
	while (s[e] == '\0' || s[e] == ' ')
		e--;

	retval = s[e--] - '0';
	places = 1;
	while (e >= i)
	{
		temp = s[e--] - '0';
		retval += temp * mypow(10, places++);
	}
	if (neg > 0)
	{
		retval = retval - (retval * 2);
	}
	return (retval);
}
