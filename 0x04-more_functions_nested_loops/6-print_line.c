#include "main.h"

/**
 * print_line - Entry point
 *
 * description: 'print stightline"
 *
 * @n: the number of time the character '_' should be printed
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
