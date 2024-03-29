#include "main.h"

/**
 * create_array - creates an array of chars,
 *  and initializes it with a specific char.
 *  @size: size array
 *  @c: char
 *
 *  Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
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

