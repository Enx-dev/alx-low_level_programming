#include "main.h"

/**
* print_last_digit - prints last digit of num
*
* @num: interger value
*
* Return: last digit of num
*/

int print_last_digit(int num)
{
	int last;

	last = num % 10;
	if (last < 0)
	{
		last *= -1
	}
	_putchar(last + '0');
	return (last);
}
