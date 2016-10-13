#include <stdio.h>

/**
 * main - outputs a-z
 *
 * Description: Uses a for loop and putchar to output a-z and then a new line
 * Return: returns 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
