#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head:head of list_t
 * @str: string
 *
 * Return: new list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int l = 0;
	list_t *new;
	list_t *temp = *head;

	while (str[l])
		l++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = l;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}

