#include <stdlib.h>
#include "main.h"
/**
*_realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated with calloc
* @old_size: size in bytes   of the allocated memory for ptr
* @new_size: new siz in bytes of the new memory block
*
*Return: pointer to the newly allocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptra;
	char *ptrb;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptra = malloc(new_size);
	if (!ptra)
		return (NULL);
	ptrb = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptra[i] = ptrb[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptra[i] = ptrb[i];
	}
	free(ptr);
	return (ptra);
}
