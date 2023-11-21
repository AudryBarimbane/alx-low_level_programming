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
 * main - function
 * @argc: number
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = _atoi(argv[1]);
		j = _atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	printf("Error\n");
	return (1);
}
