#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and intializes with a specific char
 * @c: character to be initialized
 * @size: size of array
 * Return: a pointer or NULL if it fails or the size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptrarr;
	unsigned int i;

	ptrarr = malloc(size * sizeof(char));

	if (size == 0 || ptrarr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptrarr[i] = c;
	}
	return (ptrarr);
}

