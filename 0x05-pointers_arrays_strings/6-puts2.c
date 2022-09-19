#include "main.h"

/**
 * _puts - print a string then endline
 * @str: the string
 */
void _puts(char *str)
{
	int flip;

	flip = 1
	while (*str != '\0')
	{
		if (flip)
		{
			_putchar(*str++);
			flip = 0;
		}
		else
		{
			flip = 1;
		}
	}
	_putchar('\n');
}
