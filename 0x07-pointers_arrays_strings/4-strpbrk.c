#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the bytes to search for
 * Return: a pointer to the byte in @s
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[0]; a++)
		{
		if (*s == accept[a])
		return (s);
		}
	s++;
	}

	return ('\0');
}
