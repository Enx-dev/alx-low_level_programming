#ifndef _MAIN_HEADER_
#define _MAIN_HEADER_

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);

#endif /* _MAIN_HEADER_ */