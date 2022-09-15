#include "main.h"

/**
* _isdigit - checks if c is a digit
* @c: value to be checked
* Return: 1 if digit and 0 if not a digit
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
