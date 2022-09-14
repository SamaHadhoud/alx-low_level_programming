#include "main.h"
/**
 * print_to_98 - print numbers n to 98
 * @n: integer
 */

void print_to_98(int n)
{
	for (; n < 98; n++)
	{
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('0' + 98);
	_putchar('\n');
}
