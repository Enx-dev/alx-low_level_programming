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
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
