#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *pf;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	pf = (unsigned char *)main;
	i = 0;
	while (i != bytes)
		printf("%x ", pf[i++]);
	printf("\n");
}
