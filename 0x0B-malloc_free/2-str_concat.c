#include <stdlib.h>

/**
* str_concat - concatiates two strings
* @s1: first string
* @s2: second string
*
* Return: concatinated string
*/

char *str_concat(char *s1, char *s2)
{
	void *p;
	int i = 0;
	int j = 0;

	while (*(s1 + i))
	{
		i++;
	}
	while (*(s2 + j))
	{
		j++;
		i++;
	}
	p = malloc(sizeof(char) * i);
	if (p == NULL)
		return (p);
	j = 0;
	while (*(s1 + j))
	{
		*((char *)p + j) = *(s1 + j);
		j++;
	}
	i = 0;
	while (*(s2 + i))
	{
		*((char *)p + j) = *(s2 + i);
		i++;
		j++;
	}
	*((char *)p + j) = '\0';

	return (p);
}
