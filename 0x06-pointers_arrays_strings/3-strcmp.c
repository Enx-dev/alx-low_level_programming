#include "main.h"

/**
* _strcmp - compares two string
* @s1: frist string
* @s2: seond string
*
* Return: int
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) || *(s2 + i))
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
