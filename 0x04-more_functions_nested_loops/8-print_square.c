
#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int ht = 0;
	int wid = 0;

	if (size > 0)
	{
		while (ht < size)
		{
			while (wid < size)
      			{
       				_putchar('#');
        			wid++;
      			}
			if (hgt == size - 1)
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
