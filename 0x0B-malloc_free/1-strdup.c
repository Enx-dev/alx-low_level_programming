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
	int i = 1;
	
	if (str == NULL)
		return (NULL);
	while (*(str + i))
	{
		i++;
	}
	p = malloc(sizeof(char) * i);
	if (!p)
		return (NULL);
	i = 0;
	while (*(str + i))
	{
		*((char *)p + i) = *(str + i);
		i++;
	}
	return (p);
}
