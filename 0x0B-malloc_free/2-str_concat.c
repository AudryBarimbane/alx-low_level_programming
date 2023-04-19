#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings.
 *@s1: first string
 *@s2: second string
 *
 *Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, l1 = 0, l2 = 0, l;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			l1++;
	}
	if (s2 != '\0')
	{
		i = 0;
		while (s2[i++] != '\0')
			l2++;
	}
	l = l1 + l2;
	s3 = (char *)malloc(sizeof(char) * (l + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		s3[i] = s1[i];
	for (j = 0; j < l2; j++, i++)
		s3[i] = s2[j];
	s3[l] = '\0';

	return (s3);
}

