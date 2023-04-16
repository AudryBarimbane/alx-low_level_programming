#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, n, s  = 0;
	char *nd;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);
		if (*nd)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			s += n;
		}
	}
	printf("%d\n", s);

	return (0);
}
