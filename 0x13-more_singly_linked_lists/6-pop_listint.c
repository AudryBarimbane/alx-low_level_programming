#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *@head: pointer to pointer
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *noeud;
	int res;

	if (!head || !*head)
		return (0);

	res = (*head)->n;
	noeud = (*head)->next;
	free(*head);
	*head = noeud;

	return (res);
}
