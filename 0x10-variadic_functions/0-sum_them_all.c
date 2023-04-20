#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters passed to the function
 *
 * Return: the sum all int paremeters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args; /* argument list*/
	int sum = 0;
	unsigned int q;

	/* all the arguments assigned to args */
	va_start(args, n);

	/* add them to sum */
	for (q = 0; q < n; q++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
