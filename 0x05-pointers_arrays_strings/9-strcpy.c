#include "main.h"

/**
* _strcpy - cpoies n bytes of src to the dest string
* @dest: string to copy to
* @src: string to copy
* Return: address of dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
