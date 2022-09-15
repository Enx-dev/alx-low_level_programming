#include "main.h"

/**
* print_diagonal - prints  a diagonal line
* @n: length
* Return: void
*/

void print_diagonal(int n)
{
	int len;
	int space;

	if (n > 0)
	{
		while (len < n)
		{
			while (space < len)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			len++;

			if (len == n)
				break;
			_putchar('\n');
		}

	}

	_putchar('\n');
}
