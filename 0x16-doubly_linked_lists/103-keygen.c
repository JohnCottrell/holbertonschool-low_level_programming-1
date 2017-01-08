#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - keygen for crackme5
 *
 * @argc: number of args
 * @argv: args
 * Return: Returns 1
 */
int main(int argc, char **argv)
{
	char *user = argv[1];
	char *c = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char *password = malloc(100);
	int f1, f2, f3, f4, f5, f6, clength, biggest, randnum;
	unsigned int i;
	char tempf5;
	long int multi;
	signed char squeeze;

	(void) argc;
	f2 = 0; f3 = 1;
	clength = strlen(c) - 1;
	f1 = (strlen(user) ^ 59) & clength;
	password[0] = c[f1];
	biggest = 0; f5 = 0; tempf5 = 0;
	for (i = 0; i < strlen(user); i++)
	{
		if (user[i] > biggest)
			biggest = user[i];
		f2 += user[i];
		f3 *= user[i];
		multi = user[i] * user[i];
		squeeze = multi;
		tempf5 += squeeze;
	}
	f2 = (f2 ^ 79) & clength;
	f3 = (f3 ^ 85) & clength;
	srand(biggest ^ 14);
	f4 = rand(); f4 = f4 & clength;
	f5 = (tempf5 ^ 239) & clength;
	for (i = 0; (int) i != user[0]; i++)
		randnum = rand();
	squeeze = randnum;
	f6 = (squeeze ^ 229) & clength;
	password[1] = c[f2]; password[2] = c[f3];
	password[3] = c[f4]; password[4] = c[f5];
	password[5] = c[f6]; password[6] = '\0';

	printf("%s\n", password);
	return (1);
}
