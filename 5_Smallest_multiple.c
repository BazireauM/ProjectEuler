#include <stdio.h>

int main()
{
	int i;
	int b;
	int test;
	i = 1;
	test = 0;
	while (test != 1)
	{
		test = 1;
		b = 1;
		while (b <= 20 && test == 1)
		{
			if (i % b != 0)
				test = 0;
			b++;
		}
		i++;
	}
	i--;
	printf("%d\n", i);
}
