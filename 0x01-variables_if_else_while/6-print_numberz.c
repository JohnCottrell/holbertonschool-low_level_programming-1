#include <stdio.h>

/**
 * main - outputs all digits in base 10 number system using putchar
 *
 * Description: Uses a for loop to putchar all numbers from 0-9
 * Return: returns 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
