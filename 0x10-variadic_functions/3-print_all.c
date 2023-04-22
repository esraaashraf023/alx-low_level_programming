#include "variadic_functions.h"

/**
 * print_all - that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s, *prt = "";
	int k = 0;

	va_start(args, format);

	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", prt, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", prt, va_arg(args, int));
					break;
				case 'f':

					printf("%f", va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char*);
					if (!s)
						s = "(nil)";
					printf("%s%s", prt, s);
					break;
				default:
					k++;
					continue;
			}
			prt = ",";
			k++;
		}
	}
	printf("\n");

	va_end(args);
}
