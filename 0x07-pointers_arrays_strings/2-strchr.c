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

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return ('\0');
}
