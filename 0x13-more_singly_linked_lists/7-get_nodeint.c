#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index: index of the node
 *
 * Return: a list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);
	for (j = 0; j < index && head != NULL; j++)
	{
		head = head->next;
	}
	return (head);
}
