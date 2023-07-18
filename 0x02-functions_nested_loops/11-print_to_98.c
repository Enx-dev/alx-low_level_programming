#include "main.h"

/**
 * print_to_98 - prints numbers from @n to 98
 * @n: where to start printing from 
 */
void print_to_98(int n)
{
	int rev;

	for (; n <= 98; n++)
	{
		if (n < 0)
		{
			rev = n;
			rev *= -1;
			_putchar('0' + rev);
		}else if (n <= 9)
		{
			_putchar('0' + n);
		}else
		{
			_putchar((n/10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
