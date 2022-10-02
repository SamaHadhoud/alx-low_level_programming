#include "main.h"
/**
 * _isupper - Entry point
 *
 * description: 'check if uppercase letter c'
 *
 * @c: the char to b checkd
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
