#include "main.h"

/**
 *prime_check - check if the num is prime
 *@num1: param 1
 *@num2: param 2
 *
 * Return: 0 or 1
 */

int prime_check(int num1, int num2)
{
	if (num2 == 1)
		return (1);
	if (num1 % num2 == 0 && num2 > 0)
		return (0);

	return (prime_check(num1, num2 -  1));
}









/**
 * is_prime_number - returns 1 if the input integer
 *  is a prime number, otherwise return 0.
 *  @n: input integer
 *
 *  Return: int 1 or 0
 */

int is_prime_number(int n)
{

	if (n <= 1)
		return (0);
	return (prime_check(n, n - 1));

}
