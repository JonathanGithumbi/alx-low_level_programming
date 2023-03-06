#ifndef NULL
#define NULL ((void *)0)
#endif
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *start, *p, *q;

	while (*haystack != '\0')
	{
		start = haystack;
		p = start;
		q = needle;

		while (*p != '\0' && *q != '\0' && *p == *q)
		{
			p++;
			q++;
		}
		if (*q == '\0')
		{
			return start;
		}
		haystack++;
	}
	return NULL;
}
