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
    unsigned int i;


    int i = 0;
 while (i < n)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
				s[i] = b;
				i++;
		}

               return (s);
}
