#include "main.h"
#include <string.h>
/**
 * _atoi - convert string to an integer
 * @s: the string
 * Return: the integer
 */
int _atoi(char *s)
{
	int i, n, x, cnt, sign;

	n = strlen(s);
	x = 0;
	cnt = 0;
	sign = 1;
	for (i = 0; i < n; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if ((s[i] >= '0') && (s[i] <= '9'))
		{
			cnt++;
			x += (s[i] - '0');
			x *= 10;
		}
	}
	if (cnt != 0)
		return (sign * x / 10);
	else
		return (0);
}

