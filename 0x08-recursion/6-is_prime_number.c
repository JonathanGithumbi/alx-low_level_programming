#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: if the number is prime -1
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (!is_divisible(n, n - 1));
}

/**
 * is_divisible - checks if a number is divisible by another
 * @n: the number to check
 * @divisor: the potential divisor
 *
 * Return: if the number is divisible -1
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}
	if (n % divisor == 0)
	{
		return (1);
	}
	return (is_divisible(n, divisor - 1));
}
