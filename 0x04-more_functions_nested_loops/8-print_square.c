#include "main.h"

/**
 * print_square - Entry point
 *
 * description: 'print square"
 *
 * @size: the size of the square
 *
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (i != (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
