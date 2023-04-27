#include "lists.h"


/**
 * list_len - returns the number of elements
 *  in a linked list_t list.
 *  @h: linked list
 *
 *  Return: number of elements
 */

size_t list_len(const list_h *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
