#include "main.h"

/**
* _memcpy - copies n bytes from memoty area src to memory are dest
* @src: memory area to copy from
* @dest: memory area to copy to
* @n: byte to be copied
* Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
