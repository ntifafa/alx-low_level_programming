#include "main.h"
#include <unistd.h>
/**
 * _putchar - print character to stdout
 * @c: character to be printed
 *
 * Return: 1 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
