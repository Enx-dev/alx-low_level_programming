#include "main.h"

/**
 * jack_bauer - prints every minute of Jack Bauer
 */
void jack_bauer(void)
{
	int a1, a2, b1, b2;

	for (a1 = 0; a1 < 3; a1++)
	{
		for (a2 = 0; a2 < 4; a2++)
		{
			for (b1 = 0; b1 < 6; b1++)
			{
				for (b2 = 0; b2 < 10; b2++)
				{
					_putchar('0' + a1);
					_putchar('0' + a2);
					_putchar(':');
					_putchar('0' + b1);
					_putchar('0' + b2);
					_putchar('\n');
				}
			}
		}
	}
}
