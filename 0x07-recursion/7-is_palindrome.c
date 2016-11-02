#include "holberton.h"
#include <stdio.h>

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */
int palindrome_check(char *s, int l, int i)
{
	if (s[i] == s[l] && l != i)
		return palindrome_check(s, --l, ++i);
	if (s[i] == s[l] || i >= l)
		return 1;
	if (s[i] != s[l])
		return 0;
	return 1;
}

int recursive_strlen(char *s, int i)
{
	if (s[i] != '\0')
		return recursive_strlen(s, ++i);
	return --i;
}


int is_palindrome(char *s)
{
	int length;

	length = recursive_strlen(s, 0);
	return palindrome_check(s, length, 0);
}
