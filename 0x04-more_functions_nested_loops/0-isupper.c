#include "main.h"

/**
* _isupper - checks if c is uppercase
* @c: char
* Return: int
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
