#include <stdio.h>

/**
 * main - outputs all numbers in base16 system
 *
 * Description: Uses a for loop to putchar all numbers from 0-8
 * then uses another loop to putchar letters a-f
 * Return: returns 0
 */
int main(void)
{
	int n;
	char a;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (a = 'a'; a < 'g'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
