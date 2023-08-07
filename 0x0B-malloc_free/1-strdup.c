#include "main.h"
/**
 * _strdup - copys strings to new memory location
 * @str: a string
 *
 * Return: a pointer to the new address
*/
char *_strdup(char *str)
{
	int str_size, i;
	char *ptr;

	str_size = 0;
	i = 0;
	if (str == NULL)
	{
		return (str);
	}
	while (*(str + i) != '\0')
	{
		str_size++;
		i++;
	}
	i = 0;
	ptr = (char *)malloc(str_size + 1);
	if (ptr == NULL)
	{
		return (ptr);
	}
	while (*(str + i) != '\0')
	{
		*(ptr + i) = *(str + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
