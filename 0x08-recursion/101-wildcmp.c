#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: string
 * @s2:	string
 * Return: int
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1)
	{
		if (*s2  && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

