#include "holberton.h"
#include <stdlib.h>

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
 * name - description
 *
 * @param: description
 * Return: description
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstring;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if ((int) n > _strlen(s2))
		n = _strlen(s2);
	newstring = malloc(_strlen(s1) + n + 1);
	if (newstring == NULL)
		return (NULL);
	for (i = 0, j = 0; s1[i] != '\0'; i++, j++)
		newstring[j] = s1[i];
	for (i = 0; i != n; i++, j++)
		newstring[j] = s2[i];
	newstring[j] = '\0';
	return (newstring);
}
