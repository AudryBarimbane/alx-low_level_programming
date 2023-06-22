#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of args
 * @...: args to sum
 *
 * Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	unsigned int s = 0, i;

	va_start(l, n);

	for (i = 0; i < n; i++)
		s += va_arg(l, int);
	va_end(l);

	return (s);
}

