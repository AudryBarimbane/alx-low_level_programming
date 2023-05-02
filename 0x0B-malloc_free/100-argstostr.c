#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: param
 * @av: param
 *
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *c;
	int i, j, k, l;


	if (ac == 0 || av == NULL)
		return (NULL);
	l = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			l++;
		}
		l++;
	}
	c = malloc((sizeof(char) * l) + 1);
	if (c == NULL)
		return (NULL);

	for (i = 0, k = 0, j = 0; k < l; j++, k++)
	{
		for ( ; av[i][j]; j++, k++)
			c[k] = av[i][j];
		c[k] = '\n';
	}
	c[k] = '\0';
	return (c);
}
