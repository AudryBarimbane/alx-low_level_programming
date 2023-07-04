#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked listint_t list.
 * @h: pointer
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nElement = 0;

	while (h)
	{
		h = h->next;
		nElement++;
	}
	return (nElement);
}

