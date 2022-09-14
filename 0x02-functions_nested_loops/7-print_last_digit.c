#include "main.h"
/**
 * print_last_digit - print last digit of integer
 * @n: integer
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int x;

	if (n > 0)
		x = n % 10;
	else
		x = -1 * (n % 10);
	_putchar('0' + x);
	return (x);
}
