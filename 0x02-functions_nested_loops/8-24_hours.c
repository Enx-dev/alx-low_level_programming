#include "main.h"

/**
* jack_bauer - prints time
*
*/

void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	while (hour <= 23)
	{
		while (min <= 59)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
