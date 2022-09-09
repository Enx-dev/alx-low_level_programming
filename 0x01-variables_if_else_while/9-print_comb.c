#include <stdio.h>

/**
* main - Entry point
*
* Return: does something
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar((num % 10) + '0');
		if (num == 9)
		{
			num++;
			continue;
		}
		putchar(',');
		putchar(' ');
		num++;
	}

	putchar(10);

	return (0);
}
