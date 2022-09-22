#include "main.h"
#include <string.h>
/**
 * _strncat - concantenates two strings
 * @src: source
 * @dest: destination
 * @n: the number of bytes from the src
 * Return: pointer to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = strlen(dest);
	j = 0;
	while ((src[j] != '\0') && (j < n))
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
