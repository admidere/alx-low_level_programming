#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/** 
* _strdup - copy the string
* @str: string parameter
* return: the new string
* null : if the string is null
*/

char *_strdup(char *str)
{
  if (str == NULL)
    return (NULL);
  char *newStr = malloc(strlen(str) + 1);
  if (newStr == NULL)
    return (NULL);
  strcpy(newStr, str);
  return (newStr);
}