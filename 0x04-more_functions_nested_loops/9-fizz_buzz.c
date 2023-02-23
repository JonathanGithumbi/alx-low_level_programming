#include <stdio.h>
#include "main.h"

/**
 *fizzbuzz - prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Each number or word should be separated by a space
 *
 * main - Entry Point
 * Return: Always 0
 */
void fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
		 printf("%d ", i);
		}
	}
	printf("\n");
}
int main(void)
{
	fizzbuzz();
	return (0);
}
