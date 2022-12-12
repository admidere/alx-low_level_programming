#include "main.h"

/**
* _strlen- string
* @s: string
* Return: return number of strings
*/
int _strlen(char *s)
{
int i, count = 0;
for (i = 0; s[i] != '\0'; i++)
count++;
return (count);
}
