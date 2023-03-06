#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory are dest
 * @dest: pointer to destination buffer
 * @src: pointer to source buffer
 * @n: number of bytes to copy
 *
 *Return: poiinter to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
