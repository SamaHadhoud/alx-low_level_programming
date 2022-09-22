#include "main.h"
#include <string.h>
/**
 * _strcat - concantenates two strings
 * @src: source
 * @dest: destination
 * Return: pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = strlen(dest);
	j = 0;
	while (src[j] != '\n')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\n';
	return (dest);
}
