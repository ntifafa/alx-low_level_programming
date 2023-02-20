#include <stdio.h>
/**
 * main - print lowercase alphabets in reverse
 * Return: 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; --ch)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
