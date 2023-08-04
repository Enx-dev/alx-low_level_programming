#include "main.h"

/**
 * _abs - a function that returns the absolute interger of n
 * @n: an int
 *
 * Return: an int
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}

	return (n);

}
