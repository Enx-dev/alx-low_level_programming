#include "main.h"

/**
* rev_string - reverse string
* @s: string
*/

void rev_string(char *s)
{
	int i = 0;
	int c = 0;

	while (*(s + c))
		c++;
	c = c - 1;
	while (i <= (c / 2))
	{
		int j = c - i;
		char temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
		i++;
	}
}
