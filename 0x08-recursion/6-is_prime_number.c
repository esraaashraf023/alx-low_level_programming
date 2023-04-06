#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer
 * @j: input
 * @n: input
 * Return: void
 */
int pre_prime_number(int n, int j)
{
	if (n % j == 0 && n == j)
		return (1);
	else if (n % j == 0)
		return (0);
	else
		return (pre_prime_number(n, j + 1));
}
/**
 * is_prime_number - the input integer
 * @n: input
 * Return: void
 */
int is_prime_number(int n)
{
	if (n == -1 || n == 1)
		return (0);
	else
		return (pre_prime_number(n, 2));
}
