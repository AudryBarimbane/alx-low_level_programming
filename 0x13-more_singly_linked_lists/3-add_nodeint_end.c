#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to first node
 * @n: int
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *nodeTemp;

	if (!newNode)
		return (NULL);
	newNode->next = NULL;
	newNode->n = n;

	if (!*head)
		*head = newNode;

	else
	{
		nodeTemp = *head;
		while (nodeTemp->next)
			nodeTemp = nodeTemp->next;
		nodeTemp->next = newNode;
	}
	return (newNode);
}

