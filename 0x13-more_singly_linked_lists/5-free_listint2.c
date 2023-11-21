#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer
 *
 * Return: voif
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *temp1;

	if (!head)
		return;
	temp = *head;
	while (temp)
	{
		temp1 = temp;
		temp = temp->next;
		free(temp1);
	}
	*head = NULL;
}
