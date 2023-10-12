#include "search_algos.h"

/**
 * linear_search - searches for a value in an
 * array of integers using the linear search algorithm
 * @array: input array
 * @size: size of array
 * @value: value to search for
 * Return: first index where value is located,
 * or -1 if value is not present in array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	/* loop through array */
	for (idx = 0; idx < size; idx++)
	{
		/* print the current element */
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);

		/* validate that current element is value */
		if (array[idx] == value)
			return (idx);
	}

	/* value not in array */
	return (-1);
}
