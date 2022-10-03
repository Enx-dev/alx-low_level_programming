#include <stdlib.h>
#include "main.h"

/**
* create_array - crates an array of size size with c char
* @size: size of the array
* @c: char
*
* Return: a pointer
*/

char *create_array(unsigned int size, char c)
{
	void *p;
	unsigned int i = 0;

	p = malloc(sizeof(char) * size);
	if (size == 0)
		return (p);
	while (i < size)
	{
		*((char *)p + i) = c;
		i++;
	}
	return (p);
}
