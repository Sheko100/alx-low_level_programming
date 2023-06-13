#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: second dimension size
 * @height: first dimension size
 *
 * Return: pointer to the array on success
 * NULL if width or height is 0 or negative
 * NULL if malloc fails
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, l = 0;
	int r = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	while (r < height)
	{
		arr[r] = malloc(width * sizeof(int));
		if (arr[r] == NULL)
		{
			while (r >= 0)
			{
				free(arr[r]);
				r--;
			}
			free(arr);
			return (NULL);
		}
		r++;
	}

	while (l < r)
	{
		i = 0;
		while (i < width)
		{
			/*printf("l: %d, i: %d\n", l, i);*/
			arr[l][i] = 0;
			i++;
		}
		l++;
	}
	return (arr);
}
