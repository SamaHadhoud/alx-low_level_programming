#include "main.h"
#include <string.h>
/**
 * leet - encodes a string into 1337
 * @str: string to edit
 * Return: string edited
 */
char *leet(char *str)
{
	int from[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int to[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; from[j] != '\0'; j++)
		{
			if (str[i] == from[j])
				str[i] = to[j];
		}
	}
	return (str);
}
