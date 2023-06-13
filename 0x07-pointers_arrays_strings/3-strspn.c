#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: initial segment
 * @accept: bytes
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j = 0;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (j);
		}
		s++;
	}
	return (j);
}

