#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 *
 * Return: int
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
