#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	char *op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	op = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", op[i] & 0xFF);
		if (i != bytes - 1)
			printf(" ");

	}

	printf("\n");
	return (0);
}


