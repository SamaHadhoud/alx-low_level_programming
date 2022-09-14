#include "main.h"
/**
 * print_to_98 - print numbers n to 98
 * @n: integer
 */

void print_to_98(int n)
{
	int r1, r2;

	for (; n < 98; n++)
	{
		if (n < 10)
		{
			_putchar('0' + n);
		}
		else
		{
			r1 = n % 10;
			r2 = n / 10;
			_putchar('0' + r2);
			_putchar('0' + r1);
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('0' + 9);
	_putchar('0' + 8);
	_putchar('\n');
}
