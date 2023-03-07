#include "main.h"

/**
 *  _strstr - function locates a substring
 *  @needle: the substring to search for
 *  @haystack: the longer string to search
 *  Return: ptr to the beginning of the substring or 0 if not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
		return (haystack);
	}
	return (0);
}
