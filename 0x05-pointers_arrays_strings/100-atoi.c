#include "main.h"
#include <string.h>
/**
 * _atoi - convert string to an integer
 * @s: the string
 * Return: the integer
 */
int _atoi(char *s)
{
	int i, n, x;

	n = strlen(s);
	x = 1;
	for (i = 0; i < n; i++)
	{
		if (s[i] == '-')
		{
			x *= -1;
		}
		else if (s[i] == '+')
		{
			x *= 1;
		}
		else
		{
			x *= (s[i] - '0');
			x *= 10;
			if (x < 0)
				x--;
			else
				x++;
		}
	}
	if (n > 0)
		return (x / 10);
	else
		return (0);
}

