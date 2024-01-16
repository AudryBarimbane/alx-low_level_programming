#include "main.h"
/**
*_memcpy - copies memory area
*@dest: memory
*@src: memory
*@n: number of bytes
*
*Return: copied memory with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int i = n;

	for (; m < i; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
