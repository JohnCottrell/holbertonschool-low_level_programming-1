#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary string to a uint
 *
 * @b: string to be converted
 * Return: returns the result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, temp;
	int i, k;

	if (b == NULL)
		return (0);
	i = result = 0;
	while (b[(i + 1)] != '\0')
		i++;
	k = 0;
	while (i >= 0)
	{
		if ((b[i] != '1' && b[i] != '0'))
			return (0);
		temp = 0;
		if (b[i] == '1')
		{
			temp += power_two(k);
		}
		result += temp;
		k++;
		i--;
	}
	return (result);
}

/**
 * power_two - quick function to get power of twos
 *
 * @power: power of 2 to return
 * Return: returns result
 */
unsigned int power_two(int power)
{
	int i = 0;
	unsigned int sum = 1;

	while (i != power)
	{
		sum *= 2;
		i++;
	}
	return (sum);
}
