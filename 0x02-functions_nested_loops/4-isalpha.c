#include "main.h"

/**
* _isalpha - checks is c is an alphabet
* @c: char
*
* Return: 0 or 1
*/

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
