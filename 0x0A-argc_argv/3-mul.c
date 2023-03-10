#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply two numbers
 * @argc: number to multiply
 * @argv: second number to multiply
 * Return: 0 on success and 1 when it fails
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;

	printf("%d\n", product);

	return (0);
}
