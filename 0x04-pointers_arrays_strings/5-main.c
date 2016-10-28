#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "Holberton";
	char test[3] = "Hi";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	rev_string(test);
	printf("%s\n", test);
	
	return (0);
}
