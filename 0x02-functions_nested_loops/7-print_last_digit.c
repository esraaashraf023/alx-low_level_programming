#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *
 *@g: contains the number
 *
 *Return: the number of last digit
 */
int print_last_digit(int g)
{
	int e = g % 10;

	if (g > 0)
	{
	_putchar(e + '0');
	return (g % 10);
}
	else
{
	_putchar(-e + 48);
	return (-e);
}
}
