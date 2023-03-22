#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - exectures a function as a parameter
 * on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function to be used
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
