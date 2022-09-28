#include "main.h"

/**
* _strlen_recursion - functoin that deteremine
* the length string
* @s: s parameter
* Return: length of string.
*/

int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}
if (*s == '\0')
{
return (0);
}
else
return 1 + _strlen_recursion(s + 1);
}
