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
	int lastN;

	if (num < 0)
	{
		num = num * -1;
	}
	lastN = num % 10;
	last = (num % 10) + 48;
	_putchar(last);
	return (lastN);
}
