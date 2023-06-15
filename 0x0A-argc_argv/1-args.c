#include <stdio.h>

/**
 * main - entry point
 * @argc: number
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute_((unused)))
{
	print("%d\n", argc - 1);
	return (0);
}
