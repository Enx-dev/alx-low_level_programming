#include "main.h"

/**
* _strlen_recursion - returns the lengthof a string
* @s: string
*
* Return: interger
*/

int _strlen_recursion(char *s)
{
	int n = 1;

	if (*(s + 0) != '\0')
	{
		n = n + _strlen_recursion(s + 1);
		return (n);
	}
	return (0);

}
