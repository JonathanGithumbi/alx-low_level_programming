#include "main.h"

/**
 * main - prints the number of arguments passed to hte program
 * @argc: the number of command-line arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: always 0
 */
int main(int argc, char  **argv)
{
	int count  = argc - 1;

	printf("%d\n", count);
	return (0);
}
