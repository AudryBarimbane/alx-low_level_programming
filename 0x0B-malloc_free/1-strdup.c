#include "main.h"

/**
 *  _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *  @str: string
 *
 *  Return: pointer
 */

char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		s[j] = str[j];
	return (s);
}

