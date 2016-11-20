#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints all arguments passed to it
 * @format: list of argument types
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	char *tempstring;
	int i, flag;

	va_start(arguments, format);
	i = flag = 0;
	while (format[i] != '\0')
	{
		flag = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(arguments, int));
			break;
		case 'i':
			printf("%d", va_arg(arguments, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(arguments, double));
			break;
		case 's':
			tempstring = va_arg(arguments, char*);
			if (tempstring != NULL)
				printf("%s", tempstring);
			else
				printf("(nil)");
			break;
		default:
			flag = 1;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		else if (flag == 0)
			printf("\n");
		i++;
	}
	va_end(arguments);
}
