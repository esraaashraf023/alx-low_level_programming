#include "main.h"
/**
 * alx_sqrt_recursion - returns the natural
 * @n: ironmamabl
 * @i: ironman ably
 * Return: Return 0
 */
int alx_sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (0 + alx_sqrt_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: void
 */
int _sqrt_recursion(int n)
{
	return (alx_sqrt_recursion(n, 1));
}
