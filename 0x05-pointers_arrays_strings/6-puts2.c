#include "main.h"

/**
 * puts2 - print a string then endline
 * @str: the string
 */
void puts2(char *str)
{
	bool flip;

	flip = 1;
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
