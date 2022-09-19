#include "main.h"

/**
* _strlen - finds length of string
* @s: string
* Return: int
*/

int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
