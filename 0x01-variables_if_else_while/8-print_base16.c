#include <stdio.h>
/**
 * main - print number of base 16 in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	int c;

	int d;

	c = 'a';
	d = 0;
	while
		(d < 10)
		{
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f')
		{
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
