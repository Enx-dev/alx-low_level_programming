#include "main.h"

/**
* print_triangle - prints a triangle
* @size: number
*/

void print_triangle(int size)
{
	int h = 1;
	int p;
	int s;

	if (size > 0)
	{
		while (h <= size)
		{
			p = 0;
			s = 0;

			while (s < (size - h))
			{
				_putchar(' ');
				s++;
			}
			while (p < h)
			{
				_putchar('#');
				p++;
			}
			_putchar('\n');
			h++;
		}
	}
	else
		_putchar('\n');
}
