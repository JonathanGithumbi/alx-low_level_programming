#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the lasrgest prime factore
 * @n: the number to find the largest prime factor ot
 * Return: the largest prime factor
 */
long largest_prime_factor(long n)
{
	long i;
	long max;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		max = n;
	}
	return (max);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	long result = largest_prime_factor(n);

	printf("%ld\n", result);
	return (0);
}
