#include <stdio.h>
#include <string.h>
/**
 * main - write a program that prints __putchar
 * Return: 0 (success)
 */

int main(void)
{
	char str[100] = "_putchar";
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
