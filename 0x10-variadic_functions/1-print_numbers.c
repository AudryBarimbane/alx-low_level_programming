#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integes passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(l, int));

		if (seaparator && i != n - 1)
			printf("%s", separator);
	}

	va_end(l);
	printf("\n");
}

