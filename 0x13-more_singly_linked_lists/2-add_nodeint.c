#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer
 * @n: int
 *
 * Return:address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (*head)

		new->next = *head;
	*head = new;
	return (new);
}

