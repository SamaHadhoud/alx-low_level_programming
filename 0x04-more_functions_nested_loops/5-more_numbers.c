#include "main.h"
/**
 * more_numbers - Entry point
 *
 * description: 'print numbers from 0 to 14 (10 times)'
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, j, n, m;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			n = j / 10;
			m = j % 10;

			if (n != 0)
				_putchar('0' + n);
			_putchar('0' + m);
		}
	_putchar('\n');
	}
}
