#include "main.h"

/**
 * array_range - created should contain all the values
 * from min (included) to max (included), ordered from min to max
 * @min: min value
 * @max: max value
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int i, len;
	int *p;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);

	if (!p)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = min++;
	return (p);
}
