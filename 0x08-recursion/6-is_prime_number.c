#include <stdio.h>
#include "main.h"

/**
 * is_prime - check if prime
 *@n: the number
 *@d: divisor
 * Return: 1 if prime, 0 otherwise
*/

int is_prime(int n, int d)
{
	if (n == d)
		return (1);
	if (n % d == 0)
		return (0);
	return (is_prime(n, d + 1));
}

/**
 * is_prime_number - check if prime
 * @n: the number
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 2)
		return (0);
	return (is_prime(n, 2));
}
