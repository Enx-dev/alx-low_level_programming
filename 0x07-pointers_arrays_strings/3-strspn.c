#include "main.h"

/**
* _strspn - gets length of a prefix substring
* @s: string
* @accept: bytes
*
* Return: number
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int c = 0;

	while (s[i] != '\0')
	{
		if (s[i] != 32)
		{
			int j = 0;

			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
					c++;
				j++;
			}
		}
		else
			return (c);
		i++;
	}
	return (c);
}
