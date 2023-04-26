#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list l;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(l, char *);
		if (str == NULL)
			str = "(nil)";
		if (separator == NULL)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");

	va_end(l);
}
