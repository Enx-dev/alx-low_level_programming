#include "main.h"
#include <stdio.h>

/**
 * rev_string - prints a string in reverse
 * @s: String
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	j = 0;
	while (j < i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
		i--;
	}
}
