#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * compare - check if head and tail match
 *@h: head
 *@t: tail
 * Return: 1 if palindrome, 0 otherwise
*/

int compare(char *h, char *t)
{
	if (h >= t)
		return (1);
	if (*h != *t)
		return (0);
	return (compare(++h, --t));
}

/**
 * is_palindrome - check palindrome
 * @s: the string
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int l = strlen(s);

	return (compare(s, s + l - 1));
}
