#ifndef NULL
#define NULL ((void *)0)
#endif
#include "main.h"

/**
 * _strpbrk - searches a tring for any of a set of bytes
 * @s: the string to searc in
 * @accept: the set of bytes to search for
 *
 * Return: a pointer to the byte in s that matches...
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; j++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
