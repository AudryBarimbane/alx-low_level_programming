#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: prints strings, followed by a new line.
 * @n: prints strings, followed by a new line.
 * @...: parameters to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *str;
	unsigned int i;

	va_start(list, char *);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}																																																																	
	printf("\n");

	va_end(list);
}
