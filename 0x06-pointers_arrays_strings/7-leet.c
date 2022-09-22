#include "main.h"

/**
* leet - encodes a string into 1337
* @s: string to encode
*
* Return: address of s
*/

char *leet(char *s)
{
	int i = 0;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	while (*(s + i))
	{	
		int j = 0;

		while (j <= 9)
		{
			if (a[j] == s[i])
				s[i] = b[j];
			j++;
		}
		i++;
	}
	return (s);
}
