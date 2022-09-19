#include "main.h"
#include <string.h>
/**
 * puts_half - print second half of string
 * @str: the string
 */
void puts_half(char *str)
{
	int n, x, i;
	char tmp;

	n = strlen(s);
	if (n & 1)
		x = (n - 1) / 2;
	else
		x = n / 2;
	i = x;
	while (i < n)
	{
		_putchar(*(s + i));
		i++;
	}
}
