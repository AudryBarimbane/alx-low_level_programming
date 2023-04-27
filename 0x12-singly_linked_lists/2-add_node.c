#include "lists.h"

/**
 * add_node - adds a new node at the
 * beginning of a list_t list.
 * @head: head of list
 * @str: string
 *
 * Return: address of new list
 */

list_t *add_node(list_t **head, const char *str)
{
	int l = 0;
	list_t *ptemp;

	ptemp = malloc(sizof(list_t));
	if (ptemp == 0)
		return (NULL);

	while (str[l])
		l++;

	ptemp->len = l;
	ptemp->str = strdup(str);
	ptemp->next = *head;
	*head = ptemp;

	return (ptemp);
}
