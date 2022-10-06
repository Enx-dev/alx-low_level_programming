#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, k;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		while (s1[i])
			i++;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		j = 0;
		while (s2[j])
			j++;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	k = 0;
	while (k < i)
	{
		s[k] = s1[k];
		k++;
	}
	k = 0;
	while (k < j)
	{
		s[k + i] = s2[k];
		k++;
	}
	s[i + j] = '\0';
	return (s);
}
