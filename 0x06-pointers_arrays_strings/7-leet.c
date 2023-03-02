#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 * Return: a pointer to the encoded stirng
 */
char *leet(char *str)
{
  int i, j;
  char leetMap[5][2] = {
    {'a', '4'},
    {'e', '3'},
    {'o', '0'},
    {'t', '7'},
    {'l', '1'}
  };

  i = 0;
  while (str[i])
  {
    j = 0;
    while (j < 5)
    {
      if (str[i] == leetMap[j][0] || str[i] == leetMap[j][0] - 32)
        str[i] = leetMap[j][1];
      j++;
    }
    i++;
  }

  return (str);
}
