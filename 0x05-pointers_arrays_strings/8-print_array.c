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

	n--;
	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}
	if !(n < 0)
		printf("%d\n", *(a + n));
	else
		pritf("\n");
}
