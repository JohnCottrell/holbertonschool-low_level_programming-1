#include <Python.h>
#define div olddiv

long add(long a, long b)
{
	return(a + b);
}

long sub(long a, long b)
{
	return(a - b);
}

long mul(long a, long b)
{
	return(a * b);
}

long div(long a, long b)
{
	if (a == 0 || b == 0)
		return(0);
	return(a / b);
}

long mod(long a, long b)
{
	if (a == 0 || b == 0)
		return(0);
	return(a % b);
}
