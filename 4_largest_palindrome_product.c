#include <stdio.h>
#include <stdlib.h>
char *number_to_char(int a);
int is_palindrome(char *test);

int main()
{
	int a;
	int b;
	int final;
	char *test;

	a = 100;
	final = 0;
	while (a <= 999)
	{
		b = 100;
		while (b <= 999)
		{
			test = number_to_char(a * b);
			if (is_palindrome(test) == 1 && a * b > final)
			{
				final = a * b;
			}
			free(test);
			b++;
		}
		a++;
	}
	printf("%d\n", final);
}

char *number_to_char(int a)
{
	char *b;
	int c;
	int d;
	c = 0;
	d = a;
	while (d > 0)
	{
		d = d / 10;
		c++;
	}
	b = malloc(sizeof(char) * (c + 1));
	b[c] = '\0';
	c--;
	while (c >= 0)
	{
		b[c] = (a % 10) + 48;
		a = a / 10;
		c--;
	}
	return (b);
}

int is_palindrome(char *test)
{
	int i;
	int b;
	i = 0;
	b = 0;
	while (test[b] != '\0')
		b++;
	b--;
	while (b != i && b != i + 1)
	{
		if (test[b] != test[i])
			return (0);
		b--;
		i++;
	}
	if (test[b] != test[i])
		return (0);
	return (1);
}
