#include "main.h"

/**
 * times_table - prints the nine times table
 */
void times_table(void)
{
	int column, row, total;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			total = column * row;
			if (total > 9)
			{
				_putchar((total / 10) + '0');
				_putchar((total % 10) + '0');
				_putchar(',');
			}
			else
			{
				_putchar('0' + total);
				_putchar(',');
				_putchar(' ');
			}

			_putchar(' ');
		}

		_putchar('\n');
	}
}
