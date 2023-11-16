#include "lists.h"

/**
 * list_len -  number of elements in a linked list_t list.
 * @h: list
 *
 * Return: total elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
