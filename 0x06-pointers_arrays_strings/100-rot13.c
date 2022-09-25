#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 * Return: address of s
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
{
*(s + i) = out[j];
break;
}
}
}
return (s);
}
