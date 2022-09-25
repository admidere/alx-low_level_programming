#include "main.h"

/**
 *rot13 - rot13 replacment
 *s: x parameter
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
