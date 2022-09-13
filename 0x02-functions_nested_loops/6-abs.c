#include "main.h"

/**
* _abs - convert num to absolute value
*
* @num: integer
*
* Return: absolute value
*/

int _abs(int num)
{
	if (num < 0)
	{
		num = num * -1;
	}

	return (num);
}
