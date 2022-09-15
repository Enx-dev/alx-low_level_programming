#include "main.h"

/**
* more_numbers - prints numbers from 0 t0 14 ten times
* Return: void
*/

void more_numbers(void)
{
	int row = 0;
	int columns = 0;

	while (row < 10)
	{
		while (columns <= 14)
		{
			if (columns > 9)
				_putchar(columns / 10 + '0');
			_putchar(columns % 10 + '0');
			columns++;
		}
		columns = 0;
		_putchar('\n');
		row++;
	}
}
