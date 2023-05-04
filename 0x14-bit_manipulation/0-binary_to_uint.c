#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: pointing to string of 0 and 1 chars
 * Return: converted number, or 0 if there is no 0 or 1 in string
 * or b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	/*declare and initialize variables*/
	unsigned int i = 0;
	unsigned int output = 0;
	/*check whether string is empty*/
	if (b == NULL)
		return (0);

	/*for loop to iterate through b string values*/
	for (; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			output = (output << 1) + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (output);
}




