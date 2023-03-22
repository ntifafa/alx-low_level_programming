#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to scan
 * @size: size of array
 * @cmp: pointer to the function for comparison
 * Return: index of the first element
 * cmp function does not return 0
 * if no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
