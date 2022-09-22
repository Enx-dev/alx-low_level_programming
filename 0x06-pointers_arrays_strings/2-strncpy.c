#include "main.h"

/**
* _strncpy - copies string of n byte from src to dest
* @dest: first string
* @src: second string
* @n: bytes
*
* Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
