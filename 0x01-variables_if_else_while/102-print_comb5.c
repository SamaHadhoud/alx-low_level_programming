#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
*/

int main(void)
{
	int i, j, z, x;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (z = i; z <= '9'; z++)
			{
				for (x = j + 1; x <= '9'; x++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(z);
					putchar(x);
					if (!((i == '9') && (j == '8') && (z == '9') && (x == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
