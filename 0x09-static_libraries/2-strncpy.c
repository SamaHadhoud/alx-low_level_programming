#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 * @src: source
 * @dest: destination
 * @n: the number of bytes from the src
 * Return: pointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while ((src[j] != '\0') && (j < n))
	{
		dest[j] = src[j];
		j++;
	}
	for ( ; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
