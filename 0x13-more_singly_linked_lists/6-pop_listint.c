#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer to pointer
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int res;

	if (!head || !*head)
		return (0);

	res = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (res);
}
