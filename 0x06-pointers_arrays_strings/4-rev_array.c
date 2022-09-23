#include "main.h"
#include <string.h>
/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;
	i = 0;
	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++, j--;
	}
}
