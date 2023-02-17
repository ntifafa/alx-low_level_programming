#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - if, else if, statements
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d and is less than and not 0\n", n, m);
}

