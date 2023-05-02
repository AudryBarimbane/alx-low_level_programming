#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *m;
	listint_t *n;

	if (head != NULL)
	{
		m = *head;
		while ((n = m) != NULL)
		{
			m = m->next;
			free(n);
		}
		*head = NULL;
	}
}
