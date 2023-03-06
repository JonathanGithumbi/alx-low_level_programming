#ifndef NULL
#define NULL ((void *)0)
#endif
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to search in
 * @c: the character to look for
 *
 * Retrun: a pointer to the first occurrence of c in s , or NULL if not founs
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
