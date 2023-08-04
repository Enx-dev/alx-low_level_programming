#include <stdio.h>

/**
 * main - prints single digit numbers of base ten
 *
 * Return: int
 */
int main(void)
{
	int digit;

	digit = 0;
	for (; digit < 10; digit++)
		printf("%d", digit);
	putchar('\n');
	return (0);
}
