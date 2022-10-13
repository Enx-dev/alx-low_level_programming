#include "variadic_functions.h"

/**
* sum_them_all - sums all the agurements
* @n: size of the agurements
*
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int x = 0;

	va_start(args,n);
	while (i < n)
	{
		x += va_arg(args,int);
		i++;
	}
	va_end(args);
	return (x);
}
