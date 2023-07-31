#include <stdio.h>
/**
 * print_disgsums - prints the sum of the diagonals
 * @a: a square matrix
 * @size: the size
*/
void print_diagsums(int *a, int size)
{
	int i, j, sum1;

	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *a[i][j];
			}
		}
	}
	printf("%d\n", sum1);
}