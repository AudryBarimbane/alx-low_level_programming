#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - prints the minimum number of coins to
* make change for an amount of money
* @argc: number of arguments
* @argv: array of arguments
*Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
	int n, j, res;
	int coi[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	res = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && n >= 0; j++)
	{
		while (n >= coi[j])
		{
			res++;
			n -= coi[j];
		}
	}
	printf("%d\n", res);
	return (0);
}
