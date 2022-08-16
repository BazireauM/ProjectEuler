#include <stdio.h>

int is_prime(long long a);

int main()
{
	long long a;
	long long test;
	long long i;

	a = 600851475143;
	i = 2;
	while (i <= a)
	{
		if (is_prime(i))
		{
			if (a % i == 0)
			{
				a = a / i;
				test = i;
			}
		}
		i++;
	}
	printf("%lld\n", test);
}

int is_prime(long long a)
{
	long long i;
	i = 2;
	while (i < a / 2)
	{
		if (a % i == 0)
			return (0);
		i++;
	}
	return (1);
}
