#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet in lover case
 */
void print_alphabet_x10(void)
{
	int alp;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (alp = 97; alp <= 122; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
