#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second stringn
 * Return: an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2. 
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while ((s1[j] != '\0') && (s1[j] == s2[j]))
	{
		j++;
	}
	if (s2[j])
		return (s1[j] - s2[j]);
	return (0);
}
