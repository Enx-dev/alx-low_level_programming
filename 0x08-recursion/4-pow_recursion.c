#include "main.h"

/**
* _pow_recursion - returns x to the power of y
* @x: the number
* @y: the power
*
* Return: interger
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		x = x * _pow_recursion(x, y - 1);
		return (x);
	}
	return (1);
}
