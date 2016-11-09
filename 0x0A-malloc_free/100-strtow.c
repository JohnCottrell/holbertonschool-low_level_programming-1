#include <stdio.h>
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
 * wc - gets a word count on a given string
 *
 *
 * @str: string to get word count on
 * Return: returns number of words in string
 */
int wc(char *str)
{
	int i, count, inword;

	count = 0;
	inword = 0;
	for (i = 0; i < _strlen(str) && str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			if (inword == 0)
			{
				inword = 1;
				count++;
			}
		}
		else if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			if (inword == 1)
				inword = 0;
		}
	}
	return (count);
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
 * _strdup - duplicates a string to a newly allocated space
 *
 *
 * @str: string to dupe
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	char *dupe;

	dupe = malloc(_strlen(str) + 1);
	if (dupe == NULL)
		return (NULL);
	_strcpy(dupe, str);
	return (dupe);
}

/**
 * strtow - splits a string into seperate words and makes a 2d array
 *
 *
 * @str: string to split
 * Return: returns a pointer to a 2d array
 */
char **strtow(char *str)
{
	int wordcount, i, j, k, l;
	char **array, *copy;

	if (str == NULL || str[0] == '\0' || wc(str) == 0)
		return (NULL);
	wordcount = wc(str);
	copy = _strdup(str);
	if (copy == NULL)
		return (NULL);
	array = malloc((wordcount + 1) * sizeof(*array));
	if (array == (NULL))
		return (NULL);
	i = j = l = k = 0;
	while (str[i] != '\0' && k != wordcount)
	{
		l = 0;
		while (str[i] == ' ' && str[i] != '\0')
			i++;
		j = i;
		while (copy[j] != ' ' && copy[j] != '\0')
			j++;
		array[k] = malloc(sizeof(char) * (j - i));
		if (array[k] == NULL)
		{
			while (--k >= 0)
			{
				free(array[k]);
				free(array);
				return (NULL);
			}
		}
		while (str[i] != ' ' && str[i] != '\0')
			array[k][l++] = str[i++];
		array[k++][l] = '\0';
		i = j;
	}
	array[wordcount] = NULL;
	return (array);
}
