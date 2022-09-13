#include "main.h"

/**
* print_alphabet_x10 - prints alphabets 10 times
*
* Return: 0
*/

void print_alphabet_x10(void)
{
	int a = 97;
	int b = 1;

	while (b <= 10)
	{
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		a = 97;
		b++;
	}
}
