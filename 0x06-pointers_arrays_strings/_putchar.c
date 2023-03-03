#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: the character to print
 * Return: 0 (success) and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
