#include <stdio.h>

int main(void)
{
	int i;
	int final;

	i = 1;
	final = 0;
	while (i < 1000)
	{
		if (i % 3 == 0 || i % 5 == 0)
			final += i;
		i++;
	}
	printf("%d\n",final);
}
