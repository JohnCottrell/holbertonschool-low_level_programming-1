#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');
	printf("first %s\n", f);
	f = _strchr(s, 't');
	printf("second %s\n", f);
	s = "";
	f = _strchr(s, 't');
	printf("%s\n", f);
	s = "hello";
	f = _strchr(s, '\0');
	printf("fourth %s\n", f);

	return (0);
}
