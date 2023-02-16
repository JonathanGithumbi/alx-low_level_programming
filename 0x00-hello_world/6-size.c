#include <stdio.h>
#include <stdint.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	uintptr_t bits = 8 * sizeof(void*);
	if (bits == 64)
	{
		printf("Size of a char: 1 byte(s)\n");
		printf("Size of an int: 4 byte(s)\n");
		printf("Size of a long int: 8 byte(s)\n");
		printf("Size of a long long int: 8 byte(s)\n");
		printf("Size of a float: 4 byte(s)\n");
	}
	if (bits == 32)
	{
		printf("Size of a char: 1 byte(s)\n");
                printf("Size of an int: 4 byte(s)\n");
                printf("Size of a long int: 4 byte(s)\n");
                printf("Size of a long long int: 8 byte(s)\n");
                printf("Size of a float: 4 byte(s)\n");
	}
}
