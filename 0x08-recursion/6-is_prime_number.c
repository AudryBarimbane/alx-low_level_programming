#include "main.h"

int is_prime(int i, int j);
/**
 *is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0.
 *@n: input
 *
 * Return: int
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - check prime number
 * @i: input
 * @j: input
 *
 * Return: int
 */
int is_prime(int i, int j)
{
	if (j >= i && j > 1)
		return (1);
	else if (i % j == 0 || i <= 1)
		return (0);
	else
		return (is_prime(i, j + 1));
}
