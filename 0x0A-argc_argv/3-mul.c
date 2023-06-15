#include "main.h"
#include <stdio.h>

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
