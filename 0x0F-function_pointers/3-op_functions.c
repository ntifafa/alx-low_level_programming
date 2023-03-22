#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds the ints
 * @a: first int
 * @b: second int
 * Return: sum of parameters
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts the ints
 * @a: first int
 * @b: second int
 * Return: difference of parameters
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies the ints
 * @a: first int
 * @b: second int
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides the ints
 * @a: first int
 * @b: second int
 * Return: ouptut
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of division of ints
 * @a: first int
 * @b: second int
 * Return: remainder of operation
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
