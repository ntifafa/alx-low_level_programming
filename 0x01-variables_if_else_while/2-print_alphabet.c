#include <stdio.h>

/**
 * main - print alphabets with putchar in lowercash
 * Return: 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
