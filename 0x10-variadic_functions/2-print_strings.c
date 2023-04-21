#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 *Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ip;
	char *s;
	unsigned int u;

	va_start(ip, n);
	if (separator == NULL)
		separator = "";

	for (u = 0; u < n; u++)
	{
		 s = va_arg(ip, char*);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (u != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ip);

	printf("\n");
}
