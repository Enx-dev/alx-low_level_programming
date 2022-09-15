#include "main.h"

/**
* print_diagonal - prints  a diagonal line
* @n: length
* Return: void
*/

void print_diagonal(int n)
{
	int b = 1;
	int c;

	while (b <= n)
	{
		c = 0;
		while (c < b)
		{
			_putchar(' ');
			c++;
		}
		_putchar(92);
		_putchar('\n');
		b++;
	}
}
