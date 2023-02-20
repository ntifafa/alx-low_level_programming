#include <stdio.h>
/**
 * main - print alphabets in lowercase and uppercase with putchar
 * Return: 0 (success)
 */

int main(void)
{
	int ch;
	int CH;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; ++CH)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
