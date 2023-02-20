#include <stdio.h>
/**
 * main - print alphabets using putchar except q and e
 * Return: 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
