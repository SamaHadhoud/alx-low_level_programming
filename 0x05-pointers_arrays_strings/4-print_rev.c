#include "main.h"
#include <string.h>
/**
 * print_rev - print a string in reverse then endline
 * @s: the string
 */
void print_rev(char *s)
{
	int x, i;

	x = strlen(s);
	x--;
	for (i = x; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
