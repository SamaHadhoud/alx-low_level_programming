#include <stdio.h>

/**
 * main - Entry point
 *
 * description: "print numbers form 1 to 100"
 *
 * Return: Always 0 (Success)
 */

void main(void)
{
	int i;

	puts("1");
	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			puts(" FizzBuzz");
		else if ( i % 3 == 0)
			puts(" Fizz");
		else if (i % 5 == 0)
			puts(" Buzz");
		else
			printf(" %d", n);
	}
	_putchar('\n');
}
