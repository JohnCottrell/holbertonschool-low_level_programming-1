#include "holberton.h"
#include <stdio.h>

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}


void rev_string(char *s)
{
	int i, d, len, temp;

	len = _strlen(s) - 1;
	i = 0;
	d = len;

	while (i < (len / 2))
	{
		temp = s[i];
		s[i++] = s[d];
		s[d--] = temp;
	}
}


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
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

int _atoi(char *s)
{
	int i, e, neg, retval, places, temp;

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
//	digits = e - i + 1;

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
	return retval;
}
