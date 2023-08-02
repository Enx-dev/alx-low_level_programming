#include "main.h"
/**
 * _print_rev_recursion - prints in rev
 * @s: String
*/
void _print_rev_recursion(char *s)
{
	char *p;

	p = s;
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*p);
	}
}