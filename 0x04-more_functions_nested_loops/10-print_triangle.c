#include "main.h"

/**
 * print_triangle - prints a triangle of size @size
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int length, space, hash;


	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (length = size; length > 0; length--)
	{
		for (space = 0; space < (length - 1); space++)
		{
			_putchar(' ');
		}
		for (hash = (size - space); hash > 0; hash--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
