#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function to call a function to print a name
 *
 * @name: name to print
 * @f: function to call to print a name
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
