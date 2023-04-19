#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 *  array of integers
 *  @width: width
 *  @height: height
 *
 *  Return: an int
 *
 */

int **alloc_grid(int width, int height)
{
	int **t, i, j;
	int l = width * height;

	if (l <= 0)
		return (NULL);

	t = (int **) malloc(sizeof(int *) * height);
	if (t == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		t[i] = (int *) malloc(sizeof(int) * width);
		if (t[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(t[i]);
			free(t);
			return (NULL);
		}
	}
	for (i = 0; i < height ; i++)
	{
		for (j = 0; j < width; j++)
		{
			t[i][j] = 0;
		}
	}
	return (t);
}
