#include "main.h"

/**
*_strpbrk - function that fill the memory block
*@s: s parameter
*@accept: parameter
*Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
