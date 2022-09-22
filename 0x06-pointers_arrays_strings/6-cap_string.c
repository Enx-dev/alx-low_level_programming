#include "main.h"

/**
* cap_string - converts string to uppercase
* @s: string
*
* Return: pointer
*/

char *cap_string(char *s)
{
	int i = 0;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 32;
			else
			{
				int j = 0;

				while (j <= 12)
				{
					if (a[j] == *(s + i - 1))
						s[i] -= 32;
					j++;
				}
			}
		}
		i++;
	}
	return (s);
}
