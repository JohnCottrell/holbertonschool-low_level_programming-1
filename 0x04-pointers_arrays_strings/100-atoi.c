#include "holberton.h"

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
	neg = 1;
	retval = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			neg *= -1;
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
	return (retval * neg);

}
