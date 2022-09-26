#include "main.h"

/**
* _strpbrk - locates first occurance of accept in s
* @s: string
* @accept: byte
*
*Return: pointer or null
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);

}
