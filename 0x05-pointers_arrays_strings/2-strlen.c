#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: a string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
