#include "main.h"
#include <string.h>
/**
 * _strcpy - copies string
 * @src: source
 * @dest: destination
 * Return: pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = strlen(src);
	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i]
	}
	return (dest);
}
