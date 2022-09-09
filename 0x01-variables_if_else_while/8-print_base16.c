#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
*/

int main(void)
{
	int x;

	x = 48;
	while (x < 58)
	{
		putchar(x);
		x++;
	}
	x = 97;
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
