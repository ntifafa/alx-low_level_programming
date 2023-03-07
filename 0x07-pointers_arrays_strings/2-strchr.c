#include "main.h"

/**
 * _strchr - function locates character in a string
 * @c: first occurrence of the string
 * @s: string to extract @c from
 * Return: pointer to @c, if not found return NULL
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}


