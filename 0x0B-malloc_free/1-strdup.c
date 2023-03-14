#include "main.h"
#include <stdlib.h>

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

	if (str == NULL)
		return (NULL);

	strlen = 0;

	while (str[strlen] != '\0')
		strlen++;

	pt_str = malloc((strlen + 1) * sizeof(char));

	if (pt_str == NULL)
	{
		return (NULL);
	}
	for (count = 0; str[count]; count++)
	{
		pt_str[count] = str[count];
	}
	return (pt_str);
}
