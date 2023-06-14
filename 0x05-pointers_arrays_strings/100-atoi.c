#include "main.h"
/**
 * _atoi - string to integer
 * @s: input
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0, j = 1, 
	unsigned int k = 0;

	while (s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			j *= -1;
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		k = (k * 10) + (s[i] - '0');
		i++;
	}
	k *= j;
	return (k);
}
