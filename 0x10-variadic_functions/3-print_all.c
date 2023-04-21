#include "variadic_functions.h"

/**
 * print_all - that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s;
	int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s)
				printf("%s", s);
			else
				printf("(nil)");
		}

		i++;

		if (format[i])
			printf(", ");
	}

	printf("\n");

	va_end(args);
}
