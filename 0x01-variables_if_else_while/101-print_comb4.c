#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
*/

int main(void)
{
	int i, j, z;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (z = j + 1; z <= '9'; z++)
			{
				putchar(i);
				putchar(j);
				putchar(z);
				if ((i == '7') && (j == '8') && (z == '9'))
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
