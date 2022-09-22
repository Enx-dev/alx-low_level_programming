#include "main.h"

/**
* _strcat - appends string src to dest
* @dest: first string to be appended to
* @src: second string to be appended to dest
*
* Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (*(dest + len))
		len++;
	while (*(src + i))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
