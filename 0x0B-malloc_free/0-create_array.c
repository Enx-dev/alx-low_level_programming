#include "main.h"
/**
 * create_array - a function that creates an array
 * @size: size of the pointer to be created
 * @c: char
 *
 * Return: a pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (0);
	}
	if (ptr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			*(ptr + i) = c;
		}
		return (ptr);
	}
	return (ptr);
}
