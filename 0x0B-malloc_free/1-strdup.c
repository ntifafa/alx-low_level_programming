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
	unsigned int strlen;
	unsigned int count;
	char *pt_str;

	if (str == NULL)
		return (NULL);

	for (strlen = 0; str[strlen]; strlen++)

	pt_str = malloc((strlen * sizeof(char)) + 1);

	if (pt_str == NULL)
		return (NULL);

	for (count = 0; str[count]; count++)
	{
		pt_str[count] = str[count];
	}
	pt_str[count + 1] = 0;
	return (pt_str);

	free(pt_str);
}
