#include "main.h"
/**
 * _checker - checks for the square root of f
 * @d: guess at sqrt
 * @f: number to find sqrt of
 *
 * Return: -1 or sqrt of f
 */
int _checker(int d, int f)
{
	if (d * d == f)
		return (d);
	if (d * d < f)
		return (-1);
	d = (d + (f / d)) / 2;
	return (_checker(d, f));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (_checker((n/2) + 1, n));
}