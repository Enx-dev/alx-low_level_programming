#include "main.h"

/**
* reverse_array - reverses ele of an arry
* @a: array
* @n: length of arr
*/

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < (n / 2))
	{
		int temp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
