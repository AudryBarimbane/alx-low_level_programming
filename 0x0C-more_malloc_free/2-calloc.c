#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: area memory
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * _calloc -  allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * @nmemb: number of elements of array
 * @size: bytes
 *
 * Return: pointer to allocate memory
 */
void * _calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);

	return (p);
}
