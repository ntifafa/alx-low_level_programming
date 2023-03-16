#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function allocates memory
 * @b: size to be allocated
 * Return: Always 0
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *mem;
	
	mem = malloc(b * sizeof(unsigned int));
	if (mem == NULL)
		exit(98);

	return (mem);
}
