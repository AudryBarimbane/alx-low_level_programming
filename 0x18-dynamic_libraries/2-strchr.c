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
	while (*s)
	{
		if (*s == c)
		{

			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);

	return (0);
}
