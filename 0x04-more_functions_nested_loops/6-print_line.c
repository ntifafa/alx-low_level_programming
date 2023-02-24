#include "main.h"

/**
 * print_line - draw a straight line in terminal
 * @n: number of times the char is printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int c;

		for (c = 1; c <= n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
