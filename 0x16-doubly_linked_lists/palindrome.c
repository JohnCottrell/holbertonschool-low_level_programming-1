#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void itoa(int n, char s[]);
void reverse(char s[]);

int main(void)
{
	int i, j, k, m, not;
	i = 250;
	char *string = malloc(100);
	itoa(i, string);
	printf("%s\n", string);
	i = 0;

	j = k = 100;
	while (j != 0 && k != 0)
	{
		itoa(j * k, string);
		not = 0;
		m = strlen(string) - 1;
		while (i < (strlen(string) - 1) && i < m)
		{
			printf("%c %c\n", string[i], string[m]);
			if (string[i] != string[m])
			{
				not = 1;
				printf("%s is Not a palindrome. %c %c\n", string, string[i], string[m]);
				break;
			}
			i++;
			m--;
		}
		if (not == 0 && string[i] == string[m] && i < m)
		{
			printf("%s\n", string);
			printf("%c %c\n", string[i], string[m]);
			exit(0);
		}
		if (j > k)
			j--;
		else
			k--;
	}
}


/* itoa:  convert n to characters in s */
void itoa(int n, char s[])
{
	int i, sign;
 
	if ((sign = n) < 0)  /* record sign */
		n = -n;          /* make n positive */
	i = 0;
	do {       /* generate digits in reverse order */
		s[i++] = n % 10 + '0';   /* get next digit */
	} while ((n /= 10) > 0);     /* delete it */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

 
/* reverse:  reverse string s in place */
void reverse(char s[])
{
	int i, j;
	char c;
 
	for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
