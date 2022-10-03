#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 *
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	while (i < height)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(a[j]);
				j++;
			}	
			free(a);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			a[i][j] = 0;
			j++;
		}
		i++;
	}
	return (a);
}
