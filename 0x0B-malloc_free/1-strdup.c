#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated
 * space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: a string to copy
 *
 * Return:  pointer to a new string which is
 * a duplicate of the string str
 */

char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		ptr = malloc(sizeof(char) * j + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		ptr[i] = str[i];

	return (ptr);
}
