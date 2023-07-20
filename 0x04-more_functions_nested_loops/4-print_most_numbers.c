#include "main.h"

/**
 * print_most_numbers - prinst most numbers from 0 - 9, except
 * 2 and 4
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar('0' + a);
		}
	}
	_putchar('\n');
}
