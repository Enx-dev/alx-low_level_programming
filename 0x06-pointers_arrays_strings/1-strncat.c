#include "main.h"

/**
* _strncat - appends string n byte of src to dest
* @dest: first string to be appended to
* @src: second string to be appended to dest
* @n: byte
*
* Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (*(dest + len))
		len++;
	while (*(src + i) && i < n)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
