#include <stdio.h>

int main()
{
	int i;
	int Sum_of_squares;
	int Square_of_sum;

	i = 0;
	Sum_of_squares = 0;
	Square_of_sum = 0;
	while (i <= 100)
	{
		Sum_of_squares += (i * i);
		Square_of_sum += i;
		i++;
	}
	Square_of_sum *= Square_of_sum;
	printf("%d\n", Square_of_sum - Sum_of_squares);
}
