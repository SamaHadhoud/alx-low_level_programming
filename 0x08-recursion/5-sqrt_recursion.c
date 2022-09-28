#include <stdio.h>
#include "main.h"

/**
 * froot - returns the root of thr number
 *@n: the number
 *@r: root to be tested
 * Return: the root, -1 if there isn't any
*/

int froot(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r  == n)
		return (r);
	return (froot(n, r + 1));
}

/**
 * _sqrt_recursion - return natural square root of the number
 * @n: the number
 * Return: the root, -1 if there isn't any
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (froot(n, 0));
}
