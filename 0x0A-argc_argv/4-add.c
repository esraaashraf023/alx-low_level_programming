#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int p;

	unsigned int y, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (p = 1; p < argc; p++)
		{
			e = argv[p];

			for (y = 0; y < strlen(e); y++)
			{
			if (e[y] < 48 || e[y] > 57)
			{
				printf("Error\n");
				return (1);
			}
			}
			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
