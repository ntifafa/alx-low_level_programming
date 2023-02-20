#include <stdio.h>
/**
 * main - print all digit numbers of base 10, starting from 0
 * Return: 0 (success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; ++num)
	{
		putchar(num);
	}
	putchar ('\n');
	return (0);
}
