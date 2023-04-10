#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: value passed
 * @index: bit to get
 * Return: bit at an index, otherwise -1 if an error is encountered
*/

int get_bit(unsigned long int n, unsigned int index)
{
	/*verify if index is within valid range*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
