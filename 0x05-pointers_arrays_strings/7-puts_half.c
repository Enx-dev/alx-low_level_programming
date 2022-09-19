#include "main.h"

/**
* puts_half - prints half of a string
* @str: string
*/

void puts_half(char *str)
{
	int len = 0;
	int half = 0;

	while (*(str + len))
		len++;
	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;
	while (*(str + (half + 1)))
	{
		_putchar(*(str + (half + 1)));
		half++;
	}
	_putchar('\n');

}
