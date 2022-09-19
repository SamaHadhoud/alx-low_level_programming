#include "main.h"
#include <string.h>
/**
 * rev_string - a string in reverse
 * @s: the string
 */
void rev_string(char *s)
{
	int n, x, i;
	char tmp;

	n = strlen(s);
	x = n - 1;
	i = 0;
	for (i < j)
	{
		tmp = *(s + i);
		*(s + i) = *(s + x);
		*(s + x) = tmp;
		x--;
		i++;
	}
}
