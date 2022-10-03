#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns copy of string
* @str: string to be copied
*
*
* Return: pointer
*/

char *_strdup(char *str)
{
	void *p;
	int i = 0;

	while (*(str + i))
	{
		i++;
	}
	p = malloc(sizeof(char) * i);

	i = 0;
	while (*(str + i))
	{
		*((char *)p + i) = *(str + i);
		i++;
	}
	return (p);
}
