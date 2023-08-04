#include "main.h"

/**
 * _isalpha - a function that checks if the param c is an alphabet
 * @c: int to be checked
 *
 * Return: int, one for true, zero for false
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
