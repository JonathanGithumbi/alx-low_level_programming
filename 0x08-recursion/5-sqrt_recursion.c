#include "main.h"

/**
 * _sqrt_recursion - computes the natural square toot of a number
 * @n: the number to compute the square root of
 *
 * Return: the natural square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int i = _sqrt_recursion(n / 4) * 2;

		if ((i + 1) * (i + 1) <= n)
		{
			return (i + 1);
		} else if (i * i <= n)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
}
