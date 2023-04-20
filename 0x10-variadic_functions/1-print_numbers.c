#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: string to printed numbers
 * @n: the number
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list con;
	unsigned int y;

	va_start(con, n);

	for ( y = 0; y < n; y++)
	{
		if (!separator)
			printf("%d", va_arg(con, int));

		if (separator && y == 0)
			printf("%d", va_arg(con, int));
		else
			printf("%s%d", separator, va_arg(con, int));

	}

	va_end(con);
	printf("\n");
}
