#include <stdio.h>

/**
* main - Entry point
*
* Return: does something
*/

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a%10 + '0');
		a++;
	}

	putchar(10);

	return (0);
}
