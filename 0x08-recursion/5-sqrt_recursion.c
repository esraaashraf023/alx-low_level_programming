#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: the natural square root of a number
 *
 * Return: void
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n > 1)
	{
		int j = 1;

		while (j <= n / 2)
		{
			if (j * j == n)
			{
				return (j);
			}
			j++;
		}
	}
	return (-1);
}
