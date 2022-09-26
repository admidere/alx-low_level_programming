#include "main.h"

/**
*_strpbrk - function that fill the memory block
*@s: s parameter
*@accept: parameter
*Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0;

for (; *(s + i); i++)
{
for (; *(accept); j++)
{
if (*(s + i) == *(accept + j))
break;
}
if (*(accept + j))
return (s + i);
}
}
return (0);
}
