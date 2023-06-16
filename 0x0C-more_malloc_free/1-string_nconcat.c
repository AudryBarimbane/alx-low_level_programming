#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to a string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0;
	unsigned int l1 = 0, l2 = 0;

	while (s1 != NULL && s1[l1] != '\0')
		l1++;
	while (s2 != NULL && s2[l2] != '\0')
		l2++;
	if (n < l2)
		s = malloc(sizeof(char) * (l1 + n + 1));
	else
		s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		s[i] = s1[i];
	while (n < l2 && i < (l1 + n))
		s[i++] = s2[j++];
	while (n >= l2 && i < (l1 + l2))
		s[i++] = s2[j++];
	s[i] = '\0';

	return (s);
}
