#include "main.h"
/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2, h, m;

	for (h = 0; h < 24; h++)
	{
		h1 = h / 10;
		h2 = h % 10;
		for (m = 0; m < 60; m++)
		{
			m1 = m / 10;
			m2 = m % 10;
			_putchar('0' + h1);
			_putchar('0' + h2);
			_putchar(':');
			_putchar('0' + m1);
			_putchar('0' + m2);
			_putchar('\n');
		}
	}
}
