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
	char last;

	last = num % 10;
	_putchar(last);
	return (last);
}
