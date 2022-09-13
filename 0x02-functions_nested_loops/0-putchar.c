#include "main.h"

/**
* main - Entry Point
*
* Return: 0 
*/


int main()
{
	char *sh = "_putchar";

	while (*sh)
	{
	       _putchar(*sh);
       		sh++;	       
	}

	_putchar('\n');

	return (0);
}
