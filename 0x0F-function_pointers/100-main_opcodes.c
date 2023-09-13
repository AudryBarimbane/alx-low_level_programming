#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int b, i;
	char *tab;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	tab = (char *)main;

	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", tab[i]);
			break;
		}
		printf("%02hhx ", tab[i]);
	}
	return (0);
}

