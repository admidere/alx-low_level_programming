#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
* str_concat -> string concatinating function
* @s1: first string
* @s2: second parameter string
* Return: print sum of two string
*/

char *str_concat(char *s1, char *s2)
{
size_t str1, str2, str3, i = 0;
char *a;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

str1 = strlen(s1);
str2 = strlen(s2);
str3 = str1 + str2 + 1;
a = malloc(str3);

if (a == NULL)
return (NULL);

while(*s1 != '\0')
{
a[i] = *s1;
s1++;
i++;
}
while(*s2 != '\0')
{
a[i] = *s2;
s2++;
i++;
}

a[i] = '\0';
return (a);
}
