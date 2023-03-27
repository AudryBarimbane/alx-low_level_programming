#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j, len;

	j = 0;
	len = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	len = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len--] = tmp;
	}
}
