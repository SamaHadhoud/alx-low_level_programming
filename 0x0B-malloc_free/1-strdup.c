#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_strdup- copy a string
 *@str: string to be copied
 * Return: a pointer to the duplicated string, or NULL if it fails
*/

char *_strdup(char *str)
{
	char *str2;
	unsigned int i, len = 1;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	str2 = malloc(sizeof(char) * len);
	if (str2 == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		str2[i] = str[i];
	return (str2);
}
