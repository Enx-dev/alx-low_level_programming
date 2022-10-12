#include "function_pointers"
/**
* int_index - searchs for an in in the cmp
* @array:  array of int
* @cmp: compare function
* @size: size of the array
* Return: int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
		while (i < size)
		{
			if ((*cmp)(*(array + i)) != 0)
				return (i);
			i++;
		}
	return (-1);
}
