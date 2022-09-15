#include "main.h"

/**
* print_numbers - prints all numbers from 0 to 9
* Return: 0
*/

void print_numbers(void)
{
	int start = 0;

	while (start <= 9)
	{
		_putchar((start % 10) + '0');
		start++;
	}
	_putchar('\n');
	return (0);
}
