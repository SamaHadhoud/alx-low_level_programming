#include "main.h"
#include <string.h>
/**
 * puts_half - print second half of string
 * @str: the string
 */
void puts_half(char *str)
{
	int n, x, i;

	n = strlen(str);
	if (n & 1)
		x = n / 2 + 1;
	else
		x = n / 2;
	i = x;
	while (i < n)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
