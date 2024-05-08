#ifndef SEARCH_ALGO_H
#define SEARCH_ALGO_H

#include<math.h>
#include<stdio.h>
#include<stdlib.h>

/**
 *struct listint_s - single linked list
 *
 * @n: integer
 * @index: index of node
 * @next: pointer to next node
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
}

/**
 * struct skiplist_s -single list with express lane
 *
  * @n: integer
 * @index: index of node
 * @next: pointer to next node
 * @express: pointer to next node with express lane
 */

typedef skiplist_s
{
	int n;
}

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif

