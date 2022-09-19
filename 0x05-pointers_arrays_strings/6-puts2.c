#include "main.h"

/**
 * puts2 - print a string then endline
 * @str: the string
 */
void puts2(char *str)
{
	int flip;

	flip = 1;
	while (*str != '\0')
	{
		if (flip == 1)
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
