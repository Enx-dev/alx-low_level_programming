#include "main.h"

/**
* print_most_numbers - prinst numbers btw 0 and 9 but not 2 and 4
* Return: void
*/

void print_most_numbers(void)
{
	int start = 0;

	while (start <= 9)
	{
		if (start == 2 || start == 4)
		{
			start++;
			continue;
		}

		_putchar((start % 10) + '0');
		start++;
	}
	_putchar('\n');
}
