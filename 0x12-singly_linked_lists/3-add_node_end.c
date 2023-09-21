#include "lists.h"


/**
* add_node_end - adds a new node at the end of a linked list
* @head: double pointer to list_t list
* @str: string
*
* Return: address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nNode;
	list_t *t = *head;
	unsigned int l = 0;

	while (l)
		l++;
	nNode = malloc(sizeof(list_t));
	if (!nNode)
		return (NULL);

	nNode->str = strdup(str);
	nNode->len = l;
	nNode->next = NULL;

	if (*head == NULL)
	{
		*head = nNode;
		return (nNode);
	}
	while (t)
		t = t->next;
	t->next = nNode;

	return (nNode);
}
