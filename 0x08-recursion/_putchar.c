#include "main.h"
#include <unistd.h>

/**
 * _putchar - print character to output
 * @c: character
 *
 * Return: 1 success or -1 fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
