#include "main.h"

/**
 * string_nconcat -  concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: first bytes of s2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	i = 0;
	j = 0;

	while (s2 != '\0')
		j++;
	while (s1 != '\0')
		i++;

	if (n >= j)
		n = j;

	s = malloc(sizeof(char) * n + i + 1);
	if (s == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s[k] = s1[k];

	for (k =  0; k < n; k++)
		s[k + i] = s2[k];

	s[k + i] = '\0';

	return (s);
}
