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
	int i;

	i = strlen(dest);
	while(*src != '\n')
	{
		dest[i++] = src++;
	}
	dest[i] = '\n';
	return (dest);
}
