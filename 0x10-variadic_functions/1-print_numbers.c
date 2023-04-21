#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	int i;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		printf("/%d", va_arg(l, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	print("\n");
	va_end(l);
}
