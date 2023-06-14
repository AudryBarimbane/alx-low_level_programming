#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: character to print
 *
 * Return: return 1 on success
 * -1 on error , and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

