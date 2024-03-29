#ifndef _MAIN_H_
#define _MAIN_H_

#include <stddef.h>

/**
 * struc list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /*_MAIN_H_ */
