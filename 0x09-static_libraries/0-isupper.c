#include "main.h"
/**
 * _isupper - check if a letter is upper
 * @n: number to be checked
 * Return: 1 for upper letter or 0 for naything else
 */

int _isupper(int n)
{
	if (n >= 65 && n <= 9)
		return (1);
	return (0);
}
