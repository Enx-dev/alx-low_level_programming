#include "main.h"

/**
* print_square - prints a square using #.
* @size: The size of the square
*/

void print_square(int size)
{
	int h = 0;
	int w = 0;

	if (size > 0)
	{
		while (h < size)
		{
			while (w < size)
			{
				_putchar('#');
				w++;
			}
			if (h == size - 1)
			{
				h++;
				continue;
			}
			h++;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
