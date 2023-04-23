#include "main.h"

/**
 * eval - evaluate the square
 * @i: an integer
 * @j: an integer
 *
 * Return: an integer
 */
int eval(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (eval(i + 1, j));
}



/**
 * _sqrt_recursion -  returns the natural
 * square root of a number.
 * @n: number to calculate the root
 *
 * Return: an int root of  n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (eval(1, n));

}
