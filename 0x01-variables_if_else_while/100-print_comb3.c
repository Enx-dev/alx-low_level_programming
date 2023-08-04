#include <stdio.h>

/**
 * main - prints numbers in combo
 *
 * Return: int
 */
int main(void)
{
	int base;
	int sup;

	for (base = 0; base < 10; base++)
	{
		for (sup = (base + 1); sup < 10; sup++)
		{
			putchar('0' + base);
			putchar('0' + sup);
			if (base < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
