#include "main.h"

/**
 * leet - encodes a string into 1337
 * @x: string
 * Return: address x
 */
char *leet(char *x)
{
	int i, j;
	char str[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; *(x + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (str[j] == *(x + i))
				*(x + i) = num[j];
		}
	}
	return (x);
}
