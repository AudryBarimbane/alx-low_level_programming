#include "main.h"
#include <stdlib.h>

/**
 *_memset - fills memory with a constant byte
 *@s: area memory
 *@b: constant byte
 *@n: number of bytes
 *Return: Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb:number of elements of array
 * @size: bytes
 *
 *Return: pointer to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 ||  size == 0)

		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);

	return (p);
}
