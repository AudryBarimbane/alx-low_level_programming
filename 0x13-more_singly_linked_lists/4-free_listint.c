#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *l;

	while (head != NULL)
	{
		l = head;
		head = head->next;
		free(l);
	}
}
