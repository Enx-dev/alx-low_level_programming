#include "lists.h"
/**
 * list_len - returnss the leng of a list
 * @h: head of list
 *
 * Return: returns sixe of list
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
