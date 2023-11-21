#include "main.h"
#include <stdio.h>


/**
 * _atoi - string to integer
 * @s: input
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0, j = 1;
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

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int s, n, i, j, k;

	s = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (k = 1; k < argc; k++)
	{
		n = _atoi(argv[k]);
		if (n >= 0)
		{
			s += n;
		}
	}

	printf("%d\n", s);
	return (0);
}
