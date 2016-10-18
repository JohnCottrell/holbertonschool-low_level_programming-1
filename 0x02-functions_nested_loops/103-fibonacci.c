#include <stdio.h>

int main(void)
{
	long c, f, l, i;

	c = 0;
	f = 3;
	i = 1;
	l = 2;
	printf("1, 2, ");
	while (f < 3000000)
	{
		if (f % 2 == 0)
			printf("%ld, ", f);
		i = l;
		l = f;
		f = i + l;
		c++;
	}
	if (f % 2 == 0 )
		printf("%ld\n", f);
}
