#include "main.h"
/**
 * str_concat - concatinates two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer to the concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	int size, i, j;
	char *ptr;

	size = 0;
	j = 0;
	if (s1 != NULL)
	{
		for (i = 0; *(s1 + i) != '\0'; i++)
		{
			size++;
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; *(s2 + i) != '\0'; i++)
		{
			size++;
		}
	}
	if (size > 0)
	{
		ptr = (char *)malloc(size + 1);
	}
	if (ptr != NULL)
	{
		if (s1 != NULL)
		{
			for (i = 0; *(s1 + i) != '\0'; i++,j++)
			{
				*(ptr + j) = *(s1 + i);

			}
		}

		if (s2 != NULL)
		{
			for (i = 0; *(s2 + i) != '\0'; i++, j++)
			{
				*(ptr + j) = *(s2 + i);
			}
		}
		*(ptr + j) = '\0';
		return (ptr);
	}

	return (ptr);
}
