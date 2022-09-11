#include <stdio.h>
/**
* main - Print number from 0 to 9
* description - in the main function
* Return: 0
*/
int main(void)
{
char n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
