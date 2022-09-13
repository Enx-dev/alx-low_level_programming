#include "main.h"

/**
* times_table - someting
*/

void times_table(void)
{
	int num = 0;
	int mult = 1;
	int prod;

	while (num <= 9)
	{
		_putchar('0');
		while (mult <= 9)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
			mult++;
		}
		mult = 1;
		_putchar('\n');
		num++;
	}
}
