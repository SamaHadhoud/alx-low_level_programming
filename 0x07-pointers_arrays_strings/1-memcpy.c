#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory area
 * @src: source memory area
 * @dest: destination memory area
 * @n: bytes of the memory area
 * Return: pointer to the memory dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
