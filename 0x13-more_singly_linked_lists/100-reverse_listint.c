#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *nptr;

	ptr = NULL;
	nptr = NULL;

	while (*head)
	{
		nptr = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = nptr;
	}
	*head = ptr;
	return (*head);
}
