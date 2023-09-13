#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum
 * @a: first number
 * @b: second number
 *
 * Return: The sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference
 * @a: first number.
 * @b: second number.
 *
 * Return: The difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product
 * @a: first number
 * @b: second number.
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns division
 * @a: first number
 * @b: second number
 *
 * Return: The quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder
 * @a: first number
 * @b: second number
 *
 * Return: The remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}

