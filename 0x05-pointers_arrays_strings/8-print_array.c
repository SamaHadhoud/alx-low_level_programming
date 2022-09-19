#include "main.h"
#include <string.h>
/**
 * print_array - print array of integers
 * @a: array of integers
 * @n: len of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *(a + i));
	}
	_putchar(*(a + (n - 1)));
}
