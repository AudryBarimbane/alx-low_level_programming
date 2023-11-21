#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new
 *node at a given position.
 *@head: pointer to pointer
 *@idx: index
 *@n: int
 *
 * Return:  address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *new1;
	unsigned int i;

	new1 = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && new1 != NULL; i++)
		{
			new1 = new1->next;
		}
	}
	if (new1 == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = new1->next;
		new1->next = new;
	}
	return (new);
}


