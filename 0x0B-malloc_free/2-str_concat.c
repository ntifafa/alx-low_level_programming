#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer with memory address of joined string. NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *catstr;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	catstr = malloc(sizeof(char) * (i + j + 1));

	if (catstr == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		catstr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		catstr[i] = s2[j];
		i++;
		j++;
	}
	catstr[i] = '\0';
	return (catstr);
}
