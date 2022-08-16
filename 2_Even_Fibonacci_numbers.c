#include <stdio.h>

int main()
{
	int i;
	unsigned int b;
	unsigned int c;
	int final;
	b = 1;
	c = 0;
	final = 0;
	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			final += c;
		}
		i = c;
		c = c + b;
		b = i;
	}
	printf("final : %d\n", final);

}
