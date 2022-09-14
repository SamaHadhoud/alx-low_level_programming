#include "main.h"
/**
 * jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */

void jack_bauer(void)
{
	int n1, n2, r, r1, r2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			r = n1 * n2;
			r1 = r / 10;
			r2 = r % 10;
			if (n2 == 0)
			{
				_putchar('0');
			}
			else if (r < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + r1);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + r1);
				_putchar('0' + r2);
			}
			if (n2 != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
