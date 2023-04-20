#include "variadic_functions.h"


/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 *
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list listArg;


	if (n == 0)
		return (0);

	va_start(listArg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(listArg, int);

	va_end(listArg);

	return (sum);
}
