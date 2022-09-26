#include "main.h"

/**
*_memset - function that fill the memory block
*@s: address to memory block
*@b: parameter
*n: length of buffer
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
		*(s + i) = b;
		i++;
}

return (s);
}
