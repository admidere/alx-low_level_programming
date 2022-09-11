#include <stdio.h>
/**
* main - Print all the letters except q and e
* description - in the main function
* Return: 0
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
