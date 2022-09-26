#include "main.h"
#include <string.h>
/**
 * _strspn - the length of a prefix substring
 * @s: the string
 * @accept: the character
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from acceptc
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int mx, curr, i, f;

	mx = 0;
	curr = 0;
	f = 0;
	while (*s != '\0')
	{
		f = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				f = 1;
				break;
			}
		}
		if (f == 1)
			curr++;
		else
			curr = 0;
		if (curr > mx)
			mx = curr;
		s++;
	}
	return (mx);
}
