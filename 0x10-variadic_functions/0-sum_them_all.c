#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all params
 * @n: number of params
 * @...: parms
 *
 * Return: sum of params
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list l;
	unsigned int i, sum = 0;

	va_start(l, n);

	for (i = 0; i < n; i++)
		sum += va_arg(l, int);

	va_end(l);

	return (sum);
}
