#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string to be added
 * @n: number of bytes
 * Return: pointer to newly allocated space for string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newptr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int strlen1 = 0;
	unsigned int strlen2 = 0;

	while (s1 && s1[strlen1])
		strlen1++;

	while (s2 && s2[strlen2])
		strlen2++;

	if (n < strlen(s2))
		newptr = malloc(sizeof(char) * (strlen1 + n + 1));

	else
		newptr = malloc(sizeof(char) * (strlen1 + strlen2 + 1));

	if (!newptr)
		return (NULL);

	while (i < strlen1)
	{
		newptr[i] = s1[i];
		i++;
	}


	while (n < strlen2 && i < (strlen1 + n))
		newptr[i++] = s2[j++];

	while (n >= strlen2 && i < (strlen1 + strlen2))
		newptr[i++] = s2[j++];

	newptr[i] = '\0';

	return (newptr);
}
