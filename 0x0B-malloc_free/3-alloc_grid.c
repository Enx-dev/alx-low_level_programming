#include "main.h"
/**
 * alloc_grid - creates a @widthx@height grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a double pointer to the grid
*/
int **alloc_grid(int width, int height)
{
	int size, r, c;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	size = width * height;
	p = (int **)malloc(size * sizeof(int *));

	if (p != NULL)
	{
		for (r = 0; r < height; r++)
		{
			p[r] = (int *)malloc(sizeof(int) * width);
			for (c = 0; c < width; c++)
			{
				*(*(p + r) + c) = 0;
			}
			printf("\n");
		}
		return (p);
	}
	return (p);
}
