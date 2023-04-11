#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(c) * size);

	if (p == NULL)
		return (0);

	for (i = 0; i < size; i++)

		*(p + i) = c;



	return (p);
}
