#include <stdio.h>

int main(void)
{
	int n = 0;
	int t = 0;
	while (n < 1024)
	{
		if (n % 3 == 0)
			t += n;
		else if (n % 5 == 0)
			t +=n;
		n++;
	}
	printf("%d\n", t);
}
