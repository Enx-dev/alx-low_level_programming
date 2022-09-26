#include "main.h"

/**
* _strstr - locates a substring in a string
* @haystack: the full string
* @needle: the substring to search for
*
* Return: a pointer to the start of the substring in the full string
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, s = 0;

	while (needle[s] != '\0')
		s++;
	while (*haystack)
	{
		while (*(needle + i))
		{
			if (haystack[i] != needle[i])
				break;
			i++;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
