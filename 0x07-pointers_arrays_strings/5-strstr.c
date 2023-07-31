#include <stdio.h>
/**
 * _strstr - finds the first occurence of the @needle
 * @haystack: string
 * @needle: string
 *
 * Return: pointer if found and null if not
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, m;
	char *p;

	i = 0;
	j = 0;
	m = 0;
	while (*(haystack + i) != '\0' || *(needle + j) != '\0')
	{
		if (*(needle + j) == *(haystack + i))
		{
			if (m == 0)
			{
				p = haystack + i;
			}
			m = 1;
			j++;
			i++;
		}
		else
		{
			m = 0;
			i++;
			j = 0;
		}
	}
	if (m == 1)
	{
		return (p);
	}
	else
	{
		return ('\0');
	}
}
