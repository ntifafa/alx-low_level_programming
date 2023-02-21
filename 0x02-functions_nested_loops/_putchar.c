#include "main.h"
#include <unistd.h>
/**
 * _putchar - print character c to stdout
 * @c: character to be printed
 *
 * Return: - On success 1
 * On error, -1 is returned and errno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
