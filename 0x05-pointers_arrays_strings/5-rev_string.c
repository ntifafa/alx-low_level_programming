#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: reversed string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int lister = 0;
	int a;

	while (s[lister] != '\0')
	lister++;
	for (a = 0; a < lister; a++)
	{
		lister--;
		rev = s[a];
		s[a] = s[lister];
		s[lister] = rev;
	}
}
