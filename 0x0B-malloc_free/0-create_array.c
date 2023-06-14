#include "main.h"

/**
 * create_array -  creates an array of chars
 *@size: size of array
 *@c: a char
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}


