#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, b;
	char *Tab;

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
	Tab = (char *)main;
	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", Tab[i]);
			break;
		}
		printf("%02hhx\n", Tab[i]);
	}
	return (0);
}


