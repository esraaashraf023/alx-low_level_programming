#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: print the name person
 * @f: pointer
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
