#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function allocates memory
 * @b: size to be allocated
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);

	return (mem);
}
