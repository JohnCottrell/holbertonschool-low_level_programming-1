#include <stdio.h>

/**
 * main - outputs a-z, but not q or e
 *
 * Description: Uses a for loop and putchar to output letters
 *  and then a new line
 * Return: returns 0
 */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
