#include "main.h"

int _sqrt(int n, int j);

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: the natural square root of a number
 *
 * Return: void
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * * _sqrt_recursion -  returns the natural square root of a number
 * @n: the natural square root of a number
 *
 * Return: void
 */
int _sqrt_recursion(int n)
{
	int sqrt = j * j;
	
	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (j);
	return (_sqrt(n, j + 1));
}
