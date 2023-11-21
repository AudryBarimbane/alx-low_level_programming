#include "lists.h"

/**
 *free_list1 - free a list
 *@head: pointer to pointer
 *
 *Return: void
 */
void free_list1(listp_t **head)
{
	listp_t *temp;
	listp_t *temp1;

	if (head != NULL)
	{
		temp1 = *head;
		while ((temp = temp1) != NULL)
		{
			temp1 = temp1->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a listint_t list.
 * @h: head list
 *
 * Return: size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listp_t *h1, *h2, *h3;
	listint_t *temp;

	h1 = NULL;
	while (*h != NULL)
	{
		h2 = malloc(sizeof(listp_t));

		if (h2 == NULL)
			exit(98);
		h2->p = (void *)*h;
		h2->next = h1;
		h1 = h2;
		h3 = h1;

		while (h3->next != NULL)
		{
			h3 = h3->next;
			if (*h == h3->p)
			{
				*h = NULL;
				free_list1(&h1);
				return (num);
			}
		}

		temp = *h;
		*h = (*h)->next;
		free(temp);
		num++;
	}
	*h = NULL;
	free_list1(&h1);
	return (num++);
}
