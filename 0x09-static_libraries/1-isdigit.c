#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: character to check
 * Return: 1 if digit, otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
