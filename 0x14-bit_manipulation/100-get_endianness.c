#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	int fig;
	char *pTr;

	fig = 1;
	pTr = (char *)&fig;
	return (*pTr == 1);
}
