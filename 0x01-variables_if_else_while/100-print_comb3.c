#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
*/

int main(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		for (int j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if ((i == '8') && (j == '9'))
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
	return (0);
}
