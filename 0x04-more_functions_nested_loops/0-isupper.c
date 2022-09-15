#include "main.h"
/**
* _isupper - function
* @c: parameter
* Return: 0 and 1
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
__putchar(c);
return (1);
}
else
__putchar(c);
return (0);
__putchar('\n');
}
