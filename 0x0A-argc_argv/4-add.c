#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: counts number of arguments
 * @argv: arguments
 * Return: returns 0 when successful and 1 if an error is encountered
 */


int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
