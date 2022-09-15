#include "main.h"

/**
* print_line - print lines n times
* @n: length of lines
* Return: void
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}

	_putchar('\n');

}
