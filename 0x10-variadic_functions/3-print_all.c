#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list l;
	char *s1, *separator = "";
	int i = 0;

	va_start(l, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(l, double));
					break;
				case 's':
					s1 = va_arg(l, char *);
					if (!s1)
						s1 = "(nil)";
					printf("%s%s", separator, s1);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(l);
}


