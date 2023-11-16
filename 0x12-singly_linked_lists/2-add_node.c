#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: double pointer to list_t
 * @str: string
 *
 * Return: new list
 */
list_t *add_node(list_t **head, const char *str)
{
	int l = 0;
	list_t *new;

	new = malloc(sizeof(list_t));

	while (*(str + l))
		l++;
	new->len = l;
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (new);


}
