#include "main.h"

/**
 * binary_to_unit - convert a binary number to unsigned int
 * @b: pointing to string of 0 and 1 chars
 * Return: converted number, or 0 if there is no 0 or 1 in string
 * or b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	/*declare and initialize variables*/
	unsigned int output = 0;
	size_t len = strlen(b);
	size_t i = 0;

	/*check whether string is empty*/
	if (b == NULL)
		return (0);
	
	/*while loop to iterate through b string values*/
	while (i < len)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '0' || b[i] == '1')
		/*bit left shift by 1, add current num and deduct 0 to convert to ASCII num value*/
		output = (output << 1) + (b[i] - '0');
		i++;
	}
	return (output);
}




