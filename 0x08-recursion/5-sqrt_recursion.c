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
		int i = 1;

		while (i <= n / 2)
		{
			if (i * i == n)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
