#include "main.h"

/**
 * *_memcpy - function copies memory area
 * @n: bytes to be copied
 * @src: memory area to copy from
 * @dest: destination of copied bytes
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];

	return (dest);
}
