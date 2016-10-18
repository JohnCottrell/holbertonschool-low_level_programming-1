#include "holberton.h"

int _abs(int n)
{
	if (n <= 0)
		return (n - (n * 2));
	else
		return (n);
}
