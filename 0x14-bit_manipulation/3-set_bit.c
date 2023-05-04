#include "main.h"

/**
 * set_bit - set a bit to 1 at a given index
 * @n: pointer to value to be altered
 * @index: bit to get
 * Return: 1(success), -1(error)
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	/*verify if index is within valid range*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	/*set indexed bit to 1*/
	*n = *n | (1UL << index);
	return (1);
}
