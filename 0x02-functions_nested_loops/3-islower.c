#include "main.h"

/**
* _islower - checks is c is lowercase
* @c: int
*
* Return: 0 if true and 1 if false
*/

int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}
