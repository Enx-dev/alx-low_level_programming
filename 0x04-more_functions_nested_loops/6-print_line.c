#include "main.h"

/**
 * print_line - prints line of @n length
 * @n: length of the line
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
