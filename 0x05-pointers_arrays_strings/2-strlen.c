#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: the string
 * Return: the length value
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
