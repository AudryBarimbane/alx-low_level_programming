#include "main.h"

int eval_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks palindrome
 * @s: string
 *
 * Return: int
 */
int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (eval_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * eval_pal - checks palindrome
 * @s: string
 * @i: int
 * @len: length of the string
 *
 * Return: int
 */
int eval_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (eval_pal(s, i + 1, len - 1));
}

