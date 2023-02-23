#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - else if statements and print output
 * Return: 0 (success)
 */

int positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	return (0);
}
