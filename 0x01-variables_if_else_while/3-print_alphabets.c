#include <stdio.h>

/**
* main - Entry Point
*
* Return: prints all alphabet upper and lower
*/

int main(void)
{
	int a = 97;
	int A = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (A < 91)
	{
		putchar(A);
		A++;
	}
	putchar(10);
	return (0);
}
