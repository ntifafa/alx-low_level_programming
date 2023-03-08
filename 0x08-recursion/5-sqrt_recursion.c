#include "main.h"

int moderator(int n, int i);

/**
 * _sqrt_recursion - function returns the natural sqrt of a number
 * @n: input
 * Return: sqrt of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (moderator(n, 0));
}

/**
 * moderator - recurses to find the natural sqrt of a num
 * @n: input
 * @i: iterator
 * Return: sqrt of number
 */

int moderator(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (moderator(n, i + 1));
}
