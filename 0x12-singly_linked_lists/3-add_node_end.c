#include "lists.h"

/**
 * add_node_end - adds a new node
 * at the end of a list_t list.
 * @head: head linked list
 * @str: string
 *
 * Return: address head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t n;
	list_t newNode, lastNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	newNode->len = n;
	newNode->next = NULL;
	lastNode = *head;

	if (lastNode == NULL)
		*head = newNode;
	else
	{
		while (lastNode != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}
	return (*head);
}

