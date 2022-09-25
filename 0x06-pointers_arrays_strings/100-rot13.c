#include "main.h"
#include <string.h>

/**
 *rot13 - concatenates  the string pointed to by @src to
 *x: String to be concatenated upon
 * Return: returns poiner to @s
 */
 
char *rot13(char *s)
{
    int i, j;

    char ipt[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (ipt[j] == *(s + i))
				*(s + i) = out[j];
		}
	}

	return (s);
}
