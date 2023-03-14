#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a two-dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to dimension of grid. NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			arr[j][k] = 0;
	}
	return (arr);
}
