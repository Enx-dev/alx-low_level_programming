#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prinst if a random is positive or negetive
 *
 * Return: int
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
		return (0);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
		return (0);
	}
	printf("%d is zero\n", n);
	return (0);
}
