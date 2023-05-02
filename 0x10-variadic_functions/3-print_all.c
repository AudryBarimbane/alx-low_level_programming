#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - prints anything.
 * @format: param
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, n;
	char *ptr;
	va_list l;

	va_start(l, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(l, int));
				n = 0;
				break;
			case 'i':
				printf("%i", va_arg(l, int));
				n = 0;
				break;
			case 'f':
				printf("%f", va_arg(l, double));
				n = 0;
				break;
			case 's':
				ptr = va_arg(l, char*);
				if (ptr == NULL)
					ptr = "(nil)";
				printf("%s", ptr);
				n = 0;
				break;
			default:
				n = 1;
				break;

		}
		if (format[i + 1] && n == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(l);
}
