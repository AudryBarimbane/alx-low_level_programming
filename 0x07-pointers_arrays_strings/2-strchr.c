#include "main.h"

/**
 *_strchr -  locates a character in a string.
 *@s: a string
 *@c: character
 *Return: a pointer to the first occurrence of the character c
 *or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}

	return ('\0');
}