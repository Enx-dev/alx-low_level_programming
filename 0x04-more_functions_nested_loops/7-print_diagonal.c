#include "main.h"

/**
* print_diagonal - prints  a diagonal line
* @n: length
* Return: void
*/

void print_diagonal(int n)
{
	int len = 0;
	int space = 0;

	if (n > 0)
	{
		while (len < n)
		{
			while (space < len)
			{
				_putchar(' ');
				space++;
			}
			_putchar(92);
			len++;
			space = 0;
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
