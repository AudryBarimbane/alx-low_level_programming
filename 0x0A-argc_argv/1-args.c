#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: number
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}

