#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array and intializes with a specific char
 * @c: character to be initialized
 * @size: size of array
 * Return: a pointer or NULL if it fails or the size is 0
 */

char *create_array(unsigned int size, char c)
{
	char *create_array;
	unsigned int i;

	create_array = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		create_array[i] = c;
	}
	return (create_array);
}

