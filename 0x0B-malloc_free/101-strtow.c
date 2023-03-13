#include <stdlib.h>
#include "main.h"

#define IS_SPACE(c) ((c) == ' ' || (c) == '\t' || (c) == '\n')

/**
 * count_words - counts the number of words in a string
 * @str: the string to count words from
 *
 * Return: the number of words in the string
 */
static int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str != '\0')
	{
		if (IS_SPACE(*str))
			{
				in_word = 0;
			}
		else if (!in_word)
	{
		in_word = 1;
		count++;
	}

		str++;
	}
	return count;
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, j;
	char *word_start;

	if (str == NULL || *str == '\0')
		return NULL;

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return NULL;

	i = 0;
	while (*str != '\0')
	{
		if (IS_SPACE(*str))
	{
		str++;
		continue;
	}

	word_start = str;
	while (*str != '\0' && !IS_SPACE(*str))
	str++;

      words[i] = malloc((str - word_start + 1) * sizeof(char));
      if (words[i] == NULL)
	{
	  /* free previously allocated words */
	  for (j = 0; j < i; j++)
	    free(words[j]);

	  free(words);
	  return NULL;
	}

      for (j = 0; word_start + j < str; j++)
	words[i][j] = word_start[j];

      words[i][j] = '\0';
      i++;
    }

  words[i] = NULL;
  return words;
}

