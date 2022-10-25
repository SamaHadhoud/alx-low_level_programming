#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: list
 * Return: number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
