#include "main.h"

/**
 * swap_int - swap two intergers
 * @a: first value to be swaped
 * @b: second value to be swaped
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
