#include "main.h"

/**
 * cap_string - changes all first word lowercase letters 
 * to uppercase
 * @str: string to be changed
 * Return: address tp the string
 */
 
char *cap_string(char *str)
{
int i, j;
char x[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; x[j] != '\0'; j++)

if (i == 0)
{
if ((str[i] >= 'a' && str[i] <= 'z'))
str[i] = str[i] - 32;
continue;
}
if (str[i] == ' ')
{
++i;

if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
continue;
}

}
if (str[i] == x[j])
{
    str[i] == x[j];
	continue;
}
else
{
if (str[i] >= 'A' && str[i] <= 'Z')
str[i] = str[i] + 32;
}
}
return (str);
}
	