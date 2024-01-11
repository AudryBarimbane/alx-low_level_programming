#include "lists.h"


/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to list
 *
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (!h)
		return (num);
	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
