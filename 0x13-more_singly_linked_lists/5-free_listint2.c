#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to pointer
 *
 * return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *noeud, *noeudTemp;

	if (!head)
		return;
	noeud = *head;
	while (noeud)
	{
		noeudTemp = noeud;
		noeud = noeud->next;
		free(noeudTemp);
	}

	*head = NULL;
}
