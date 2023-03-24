#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all - Returns the sum of all paramters.
* @n: Number of paramters passed to the function.
* @...: Variable number of parameters to compute sum of.
* Return: if n == 0, return 0.
* Otherwise - the sum of all parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
