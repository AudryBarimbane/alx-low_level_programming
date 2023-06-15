#include <stdlib.h>
#include "main.h"

/**
 * _word - function
 * @s: string
 *
 * Return: number of words
 */
int _word(char *s)
{
	int i, j, k;

	j = 0;
	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			j = 0;
		else if (j == 0)
		{
			j = 1;
			k++;
		}
	}

	return (k);
}
/**
 * **strtow - splits a string into words
 * @str: string
 *
 * Return: pointer
 */
char **strtow(char *str)
{
	char **m, *temp;
	int i, k = 0, l = 0, w, c = 0, s, e;

	while (*(str + l))
		l++;
	w = _word(str);
	if (w == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (w + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				e = i;
				temp = (char *) malloc(sizeof(char) * (c + 1));
				if (temp == NULL)
					return (NULL);
				while (s < e)
					*temp++ = str[s++];
				*temp = '\0';
				m[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			s = i;
	}

	m[k] = NULL;

	return (m);
}
