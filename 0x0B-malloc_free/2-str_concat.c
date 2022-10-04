#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *str_concat- concatenates two strings
 *@s1 : first string
 *@s2 : second string
 * Return: a pointer to the concatenated  string, or NULL if it fails
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, len1 = 0, len2 = 1, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;
	str = malloc(sizeof(char) * (len1 + len2));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++, j++)
		str[j] = s1[i];
	for (i = 0; i < len2; i++, j++)
		str[j] = s2[i];
	return (str);
}
