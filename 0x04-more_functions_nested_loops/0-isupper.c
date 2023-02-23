#include "main.h"

/**
 * _isupper - function is intende to check for uppercase character
 * @c: is the char to be checked
 * Return: 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
