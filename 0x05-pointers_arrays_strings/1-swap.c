#include "main.h"

/**
* swap_int - Swaps value of a and b
* @a: first number
* @b: second number
* Retutn: void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	 *a = *b;
	 *b = temp;
}
