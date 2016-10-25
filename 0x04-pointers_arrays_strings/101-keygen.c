#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates a password for 101-crackme
 *
 * description: 101-crackme adds up the values of each ASCII character
 * in the argument given, and they must equal 2772 to be a valid password.
 * keygen generates random values between 32 and 127 and adds them up until it
 * reaches 2772
 *
 * Return: 1 on success
 */
int main(void)
{
	char password[100];
	int randNum, num, i;

	num = 0;
	i = 0;
	srand(time(NULL));
	while (num < 2645)
	{
		randNum = random() % 127;
		if (randNum > 32)
		{
			password[i++] = randNum;
			num += randNum;
		}
	}
	password[i++] = (2772 - num);
	password[i] = '\0';
	printf("%s", password);

	return (1);
}
