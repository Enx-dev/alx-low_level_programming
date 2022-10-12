#include <stddef.h>

/**
* array_iterator - executes fuaction on elements of array
* @array: array
* @size: size of array
* @action: function to be carried out
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	while (i < size)
	{
		(*action)(*(array + i));
		i++;
	}
}
