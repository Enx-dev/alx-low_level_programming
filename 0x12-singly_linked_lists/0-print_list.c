#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints alist
 * @h: head of the list
 *
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	unsigned int count;
	const list_t *ptr;

	count = 0;
	ptr = h;
	while (ptr)
	{
		count++;
		if (ptr->str == NULL)
		{
			printf("[0] (nil\n)");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
	}

	return (count);
}
