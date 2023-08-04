#include "main.h"

/**
 * print_diagonal - prints a diagonal line of @n length
 * @n: length of diagonal
 */
void print_diagonal(int n)
{
	int space;
	int row;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (row = 0; row < n; row++)
	{
		for (space = 0; space < row; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
