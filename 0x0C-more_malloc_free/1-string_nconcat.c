#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings using at
* @s1: The first parameter.
* @s2: The second parameter.
* @n: The maximum number of bytes of s2 to concatenate to s1.
* Return: If the function fails - NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int l = n, i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i]; i++)
l++;

concat = malloc(sizeof(char) * (l + 1));

if (concat == NULL)
return (NULL);

l = 0;

for (i = 0; s1[i]; i++)
concat[l++] = s1[i];

for (i = 0; s2[i] && i < n; i++)
concat[l++] = s2[i];

concat[l] = '\0';

return (concat);
}
