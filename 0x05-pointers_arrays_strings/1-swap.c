#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: integer to be swapped
 * @b: integer to be
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
