#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 * @nmemb: number of elements
 * @size: size of the element
 * Return: pointer to allocated memory and returns NULL on fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptrarr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptrarr = malloc(size * nmemb);
	if (ptrarr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ptrarr[i] = 0;

	return (ptrarr);
}
