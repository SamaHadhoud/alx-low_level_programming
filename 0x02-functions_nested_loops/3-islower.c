#include "main.h"
/**
 * _islower - Entry point
 *
 * description: 'check if lower case letter c'
 *
 * @c: the char to b checkd
 *
 * Return: 1 if c is lowercas, 0 otherwise
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
