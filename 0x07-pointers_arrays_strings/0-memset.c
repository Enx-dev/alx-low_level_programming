#include "main.h"

/**
* _memset - prinst b into s for n bytee
* @s: arraay
* @b: value to be inputed
* @n: byte to take
*
* Return: ponter to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
