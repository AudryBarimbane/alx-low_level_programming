#include "main.h"

/**
 *malloc_checked - allocates memory using malloc.
 *@b: number of bytes
 *Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == 98)
		exit(98);

	return (ptr);
}
