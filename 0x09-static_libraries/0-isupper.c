#include "main.h"

/**
 * _isupper - a function that checks if c is pointing to an uppercase
 * alphabet
 * @c: char with this ascii code will be checked
 *
 * Return: 1 if upper and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
