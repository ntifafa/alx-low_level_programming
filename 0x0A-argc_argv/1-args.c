#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints argument count
 * @argv: arguments
 * @argc: counts number of arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
