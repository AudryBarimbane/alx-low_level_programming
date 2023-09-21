#include "lists.h"
/**
* add_node - adds a new node at the beginning of a linked list
* @head: double pointer to list_t list
* @str: string to add to node
*
* Return: address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nNode;
	unsigned int len  = 0;

	while (str[len])
		len++;
	nNode = malloc(sizeof(list_t));
	if (!nNode)
		return (NULL);
	nNode->len = len;
	nNode->str = strdup(str);
	nNode->next = (*head);
	(*head) = nNode;

	return (*head);
}



