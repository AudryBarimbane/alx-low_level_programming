#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n:int to be checked
 * Return: 0,1 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
		return (-1);
}
