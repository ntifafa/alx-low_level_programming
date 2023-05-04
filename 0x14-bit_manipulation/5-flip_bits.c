#include "main.h"

/**
 * flip_bits - returns number of bits to be flipped from number to number
 * @n: first number
 * @m: second number
 * Return: the number of bits changed
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*declare variables*/
	unsigned long int output;
	unsigned int bits;

	/*initialize*/
	output = n ^ m;
	bits = 0;

	/*while loop and flip*/
	while (output != 0)
	{
		bits = bits + (output & 1);
		output = output >> 1;
	}
	return (bits);
}
