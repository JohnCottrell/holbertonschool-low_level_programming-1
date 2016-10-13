#include <stdio.h>

/**
 * main - outputs z-a
 *
 * Description: Uses a for loop and putchar to output letters
 * and then a new line after it is finished
 * Return: returns 0
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
