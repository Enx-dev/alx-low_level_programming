#include "main.h"

/**
* _strchr - returns a pointer to te first occurrence of the char
* @s: string
* @c: character
*
* Return: pointer or null
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
