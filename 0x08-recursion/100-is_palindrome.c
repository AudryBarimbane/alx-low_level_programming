#include "main.h"

/**
 * _strlen_recursion - returs the length of a string
 * @s: string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_check - check the string
 * @s: pointer
 *@lstr: int
 *
 * Return: int
 */

int palindrome_check(char *s, int lstr)
{
	if (lstr < 1)
		return (1);

	if (*s == *(s + lstr))
		return (palindrome_check(s + 1, lstr - 2));
	return (0);
}


/**
 * is_palindrome - test a string palindrome
 * @s: pointer
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	return (palindrome_check(s, l  - 1));
}
