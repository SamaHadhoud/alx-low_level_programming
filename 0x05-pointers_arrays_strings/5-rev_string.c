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
	for (i = 0; i <= n / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + x);
		*(s + x) = tmp;
		x--;
	}
}
