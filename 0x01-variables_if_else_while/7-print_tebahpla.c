#include <stdio.h>

/**
* main - Entry point
*
* Return: does something
*/

int main(void)
{
	int z = 122;

	while (z >= 97)
	{
		putchar(z);
		z--;
	}

	putchar(10);

	return (0);
}
