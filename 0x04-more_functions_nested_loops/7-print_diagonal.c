#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * description: 'print diagonal"
 *
 * @n: the number of time the character '\' should be printed
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				_putchar('\\');
			else if (j < i)
				_putchar(' ');
		}
		if (i != (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
