#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to value to be altered
 * @index: bit to get
 * Return: 1(success), 2(error)
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*verify if index is within valid range*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	/*clear indexed bit*/
	*n = *n & ~(1UL << index);
	return (1);
}

