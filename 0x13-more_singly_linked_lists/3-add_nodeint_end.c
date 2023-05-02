#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: pointer
 * @n: int
 *
 * Return: address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *n1;

	n1 = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
	}
	else
		return (NULL);
	if (n1 != NULL)
	{
		while (n1->next != NULL)
			n1 = n1->next;
		n1->next = newNode;
	}
	else
		*head = newNode;
	return (*head);
}

