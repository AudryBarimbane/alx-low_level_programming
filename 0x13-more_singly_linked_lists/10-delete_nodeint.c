#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 *  at index index of a listint_t linked list.
 *  @head: pointer to pointer
 *  @index: index
 *
 * Return: 1 success or -1 failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pr;
	listint_t *next1;
	unsigned int i;

	pr = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && pr != NULL ; i++)
		{
			pr = pr->next;
		}
	}
	if (pr == NULL || (pr->next == NULL && index != 0))
		return (-1);
	next1 = pr->next;
	if (index != 0)
	{
		pr->next = next1->next;
		free(next1);
	}
	else
	{
		free(pr);
		*head = next1;
	}
	return (1);
}
