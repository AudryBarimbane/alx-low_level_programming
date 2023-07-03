#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 *
 * Return: integer ,sqrt
 */
int calc_sqrt(int a, int b);
int _sqrt_recursion(int n)
{
	return (calc_sqrt(n, 1));
}

/**
 * calc_sqrt - calculate square root
 * @a: input
 * @b: input
 *
 * Return: integer
 */

int calc_sqrt(int a, int b)
{
	if (b * b == a)

		return (b);
	else if (b * b < a)

		return (calc_sqrt(a, b + 1));
	else
		return (-1);
}
