#include "lists.h"

/**
 * pop_listint -  deletes the head node
 * @head: pointer
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int a;
	listint_t *l;

	if (*head == NULL)
		return (0);

	l = *head;
	a = l->n;
	*head = l->next;
	free(l);

	return (a);
}
