#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy string to another memory location
 * @str: string to be taken
 * Return: pointer on success and NULL if memory allocation fails
 */

char *_strdup(char *str)
{
	int strlen;
	int count;
	char *pt_str;

	for (strlen = 0; str[strlen] != '\0'; strlen++)

	pt_str = malloc(strlen * sizeof(char) + 1);

	if (pt_str == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
	{
		pt_str[count] = str[count];
	}
	return (pt_str);
}
