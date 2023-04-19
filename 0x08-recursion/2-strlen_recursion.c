#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: strinf to determinate the length
 * Return: int the legnth
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (NULL);
	else
		return (1 + _strnlen_recursion(s + 1));
}
