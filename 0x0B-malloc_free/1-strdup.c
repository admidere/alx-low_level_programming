#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
* _strdup -> string duplicator function
* @str: string to be duplicated
* Return: string the string
*/


char *_strdup(char *str)
{
char *newStr;

if (str == NULL)
return (NULL);
newStr = malloc(strlen(str) + 1);
if (newStr == NULL)
return (NULL);
strcpy(newStr, str);
return (newStr);
}
