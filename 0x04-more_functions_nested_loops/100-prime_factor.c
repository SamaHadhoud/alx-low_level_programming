#include <stdio.h>

/**
 * main - Entry point
 *
 * description: "print largest prime factor of the number 612852475143"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int n, div, maxFact;

	n = 612852475143;
	div = 2;
	while (n != 0)
	{
		if (n % div != 0)
		{
			div++;
		}
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%d", maxFact)
				break;
			}
		}
	}
	printf("\n");
	return (0);
}
