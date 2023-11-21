#include "lists.h"

/**
 *free_list - free a list
 *@head: pointer to pointer
 *
 *Return: void
 */
void free_list(listp_t **head)
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
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	listp_t *h1, *h2, *h3;

	h1 = NULL;
	while (head != NULL)
	{
		h2 = malloc(sizeof(listp_t));

		if (!h2)
			exit(98);

		h2->p = (void *)head;
		h2->next = h1;
		h1 = h2;

		h3 = h1;

		while (h3->next)
		{
			h3 = h3->next;
			if (head == h3->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&h1);
				return (num);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num++;
	}
	free_list(&h1);
	return (num);

}
