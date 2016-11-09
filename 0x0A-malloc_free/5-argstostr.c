#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"


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
 * _strcpy - copies an entire string to a buffer
 *
 *
 * @src: source string to copy
 * @dest: buffer to copy string into
 * Return: returns pointer to copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *retval;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];

	retval = dest;

	return (retval);
}

/**
 * str_concat - concatenates two strings to a new string
 *
 *
 * @s1: first string
 * @s2: second string
 * Return: returns pointer to completed string
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = (_strlen(s1) + _strlen(s2) + 1);
	new = malloc(size);
	if (new == NULL)
		return (NULL);
	_strcpy(new, s1);
	i = _strlen(s1);
	for (i = _strlen(s1), j = 0; i != size && s2[j] != '\0'; i++, j++)
		new[i] = s2[j];
	new[i] = '\0';
	return (new);
}

/**
 * argstostr - concats together program arguments into one string
 *
 *
 * @ac: argument count
 * @av: arguments
 * Return: returns pointer to completed string
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int len;

	if (ac == 0 || av == NULL)
		return (NULL);
	string = str_concat(av[0], "\n");
	if (string == NULL)
		return (NULL);
	len = 1;
	while (len != ac)
	{
		string = str_concat(string, av[len++]);
		string = str_concat(string, "\n");
		if (string == NULL)
			return (NULL);
	}
	if (string)
		return (string);
	else
		return (NULL);
}
