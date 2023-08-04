#include <stdio.h>

/**
 * main - prints number
 *
 * Return: int
 */
int main(void)
{
	int top;
	int mid;
	int bot;

	for (top = 0; top < 8; top++)
	{
		for (mid = (top + 1); mid < 9; mid++)
		{
			for (bot = (mid + 1); bot < 10; bot++)
			{
				putchar('0' + top);
				putchar('0' + mid);
				putchar('0' + bot);
				if (top < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
