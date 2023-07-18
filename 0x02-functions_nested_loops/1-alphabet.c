#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet in lover case
 */
void print_alphabet(void)
{
	int alp;

	for (alp = 97; alp <= 122; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
