#include "main.h"

/**
*_memset - function that fill the memory block
*@s: address to memory block
*@b: parameter
*n: n parameter
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	while(n)
	{
		s[n-1] = b;
		n--;
	}
	return (s);
}
