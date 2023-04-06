#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: strinf to determinate the length
 * Return: int the legnth
 */

int _strlen_recursion(char *s)
{
	int l;

	l = 0;

	if (*s == 0)
		return (l);
	else
	{
		l++;
		_strlen_recursion(s + 1);
	}
}
