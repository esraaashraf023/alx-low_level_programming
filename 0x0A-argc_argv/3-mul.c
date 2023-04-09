#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - print the result of the multiplication
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int e = 0, a = 0;

	if (argc == 3)
	{
		e = atoi(argv[1]);
		a = atoi(argv[2]);
		printf("%d\n", e * a);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
