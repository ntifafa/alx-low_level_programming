#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @num: value to be passed
 * Return: nothing
 */

void print_binary(unsigned long int num)
{
	if (num > 1)
	print_binary(num >> 1);

	if (num & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}



