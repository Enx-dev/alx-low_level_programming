#include "main.h"

/**
 * swap_int - swaps a and b
 * @a: int
 * @b: int
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
