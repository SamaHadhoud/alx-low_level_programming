#include "main.h"
#include <string.h>
/**
 * cap_string - apitalizes all words of a string
 * @str: string to edit
 * Return: string edited
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - ('a' - 'A');
	for (i = 1; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
		     (str[i - 1] == ',' || str[i - 1] == ';' ||
		       str[i - 1] == '!' || str[i - 1] == '?' ||
		       str[i - 1] == '"' || str[i - 1] == '(' ||
		       str[i - 1] == ')' || str[i - 1] == '{' ||
		       str[i - 1] == '}' || str[i - 1] == '.' ||
		       str[i - 1] == ' ' || str[i - 1] == '\t' ||
		       str[i - 1] == '\n'))
			str[i] = str[i] - ('a' - 'A');
	}
	return (str);
}
