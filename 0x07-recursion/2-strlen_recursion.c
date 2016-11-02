#include "holberton.h"

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return _strlen_recursion(++s)+1;
	return 0;
}
