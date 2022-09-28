#include "main.h"

/**
* factorial - returns the factorial of n
* @n: interger
*
* Return: interger
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	n = n * factorial(n - 1);
	return (n);
}
