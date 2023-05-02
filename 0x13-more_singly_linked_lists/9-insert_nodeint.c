#include "lists.h"

/**
 *long_list - num nodes
 *@t: param
 *Return: size_t
 */

size_t long_list(const listint_t *t)
{
	const listint_t *temp = t;

	size_t i = 0;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}




/**
 *insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: param
 * @idx: param
 * @n: param
 *
 * Return: address
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nNode = NULL, *pNode = NULL;
	unsigned int i;

	nNode = malloc(sizeof(listint_t));

	if (nNode == NULL || idx > long_list(*head))
	{
		free(nNode);
		return (NULL);
	}
	nNode->n = n;
	nNode->next = NULL;
	while (head != NULL)
	{
		if (idx == i)
		{
			if (i == 0)
			{
				nNode->next = *head;
				*head = nNode;
				return (nNode);
			}
			nNode->next = pNode->next;
			pNode->next = nNode;
			return (nNode);
		}
		else if (idx == (i + 1))
			pNode = *head;
		head = &((*head)->next);
		i++;
	}
	return (NULL);
}
