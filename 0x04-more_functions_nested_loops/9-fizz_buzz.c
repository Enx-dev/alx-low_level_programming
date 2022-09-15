#include <stdio.h>

/**
* main - Entry point
* Return: int
*/

int main(void)
{
	int start = 1;

	while (start <= 100)
	{
		if ((start % 3) == 0 && (start % 5) == 0)
			printf("FizzBuzz");
		else if ((start % 3) == 0)
			printf("Fizz");
		else if ((start % 5) == 0)
			printf("Buzz");
		else
			printf("%d", start);
		if (start == 100)
		{
			start++;
			continue;
		}
		start++;
		printf(" ");

	}
	putchar('\n');
}
