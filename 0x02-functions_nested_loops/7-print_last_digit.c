#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: number to be checked
 *Return: return last digit of a number
 */
int print_last_digit(int n)
{
	int lastd = n % 10;

	if (n < 0)
	{
		lastd = lastd * -1;
	}
	_putchar(lastd + '0');
	return (lastd);
}
