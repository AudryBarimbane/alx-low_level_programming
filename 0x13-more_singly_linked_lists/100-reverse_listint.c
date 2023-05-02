#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: param
 *
 * Return: address
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a, *b;

	a = b = NULL;

	while (*head)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}
	*head = a;

	return (*head);
}
