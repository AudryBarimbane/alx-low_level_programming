#include "main.h"

/**
* _memset - Program fills a block of memory with a specific value
* @s: address of memory
* @b: value
* @n: number of bytes
*
* Return: change array
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
