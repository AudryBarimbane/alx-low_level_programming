#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name given
 * @f: function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
