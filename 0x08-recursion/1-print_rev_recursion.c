#include "main.h"

/**
* _print_rev_recursion - function that called by main
* print reverse string
* @s: s parameter
* Return: nothing.
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
