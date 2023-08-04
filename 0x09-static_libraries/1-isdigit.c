#include "main.h"

/**
 * _isdigit - checks if @c is a digit 1-9
 * @c: digit to be checked
 *
 * Return: 1 if is digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
