#include "main.h"
#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: substring
 * Return: Returns a pointer to the beginning
 * of the located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{

	unsigned int i, f;

	while (*haystack != '\0')
	{
		f = 1;
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*(haystack + i) !=  needle[i])
			{
				f = 0;
			}
		}
		if (f == 1)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
