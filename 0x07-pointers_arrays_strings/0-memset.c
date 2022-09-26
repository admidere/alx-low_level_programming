#include "main.h"

/**
*_memset - function that fill the memory block
*@s: address to memory block
*@b: parameter
*@n: length of buffer
*Return: string
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
		*(s + i) = b;
}

return (s);
}
