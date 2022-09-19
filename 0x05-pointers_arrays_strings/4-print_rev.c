#include "main.h"

/**
 * _print_rev - print a string in reverse then endline
 * @str: the string
 */
void print_rev(char *s)
{
	int x, i;

	x = _strlen(s)-1;
	for (i = x; i > 0; i--)
	{
		_putchar(*(s + i));
	}
		
	_putchar('\n');
}
