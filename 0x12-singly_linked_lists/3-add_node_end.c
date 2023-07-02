include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: pointer
 * @str: string
 *
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *c;
	list_t *t = *head;
	unsigned int a = 0;

	while (str[a])
		a++;

	c = malloc(sizeof(list_t));
	if (!c)
		return (NULL);

	c->str = strdup(str);
	c->len = len;
	c->next = NULL;

	if (*head == NULL)
	{
		*head = c;
		return (c);
	}

	while (t->next)
		t = t->next;

	t->next =c;

	return (c);
}
