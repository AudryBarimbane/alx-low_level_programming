#include "main.h"
#include <stdlib.h>

/**
 *str_concat -  concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = 0; s[j] != '\0'; j++)
		;
	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
		s[i] = s1[i];
	for (i = 0, j = 0; s[i] != '\0'; i++, j++)
		s[i] = s2[j];
	s[i] = '\0';
}
