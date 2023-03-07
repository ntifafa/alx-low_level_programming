#include "main.h"

/**
 * _memset - function fills memory with constant byte
 * @b: constant byte
 * @n: the number of bytes
 * @s: pointer to memory allocation
 * Return: altered array with new value fo n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
