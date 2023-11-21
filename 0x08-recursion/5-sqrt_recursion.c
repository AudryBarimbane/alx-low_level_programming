#include "main.h"
int calc_sqrt(int n, int b);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 *
 * Return: integer ,sqrt
 */
int _sqrt_recursion(int n)
{
	return (calc_sqrt(n, 1));
}

/**
 * calc_sqrt - calculate square root
 *@n: input
 *@b: input
 *
 * Return: integer
 */

int calc_sqrt(int n, int b)
{
	if (b * b == n)

		return (b);
	else if (b * b < n)

		return (calc_sqrt(n, b + 1));
	else
		return (-1);
}

