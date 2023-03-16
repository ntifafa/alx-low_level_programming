#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: least integer in array
 * @max: largest integer in array
 * Return: pointer to new array and return NULL if min is greater than max
 */

int *array_range(int min, int max)
{
	int *ptrarr;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptrarr = malloc(sizeof(int) * size);

	if (ptrarr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptrarr[i] = min++;

	return (ptrarr);
}
