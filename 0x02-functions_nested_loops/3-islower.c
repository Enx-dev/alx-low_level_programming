#include "main.h"

/**
 * _islower - checks if @parms c is a lowercase alphabet
 * @c: and int to represent a char
 *
 * Return: int
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	return (1);
}
