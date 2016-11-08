#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"

char *string_concat(char *s1, char *s2)
{
	char *new;
	int i, j, size;

	size = (strlen(s1) + strlen(s2) + 1);
	new = malloc(size);
	if (new == NULL)
		return NULL;
	strcpy(new, s1);
	i = strlen(s1);
	for (i = strlen(s1), j = 0; i != size && s2[j] != '\0'; i++, j++)
		new[i] = s2[j];
	new[i] = '\0';
	return new;
}

char *argstostr(int ac, char **av)
{
	char *string;

	while (ac > 0)
	{
		string = string_concat("\n", string);
		string = string_concat(av[--ac], string);
	}
	string = string + '\0';
	return string;
}
