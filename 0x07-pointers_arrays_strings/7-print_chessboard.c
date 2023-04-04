#include "main.h"
/**
 * print_chessboard - entry point
 * @a: ironmann
 * Return: return 0
 */
void print_chessboard(char (*a)[8])
{
	int k, i;

	for (i = 0; k < 8; k++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[k][i]);
		}
		_putchar('\n');
	}
}
