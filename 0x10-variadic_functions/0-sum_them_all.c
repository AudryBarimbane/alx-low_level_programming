#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 *
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < ; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (list);
}
