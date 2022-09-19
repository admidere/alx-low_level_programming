#include "main.h"
#include <string.h>

/**
 * puts_half - prints half numbers
 * @str: string parameter
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j, k;

	i = strlen(str);
	if (i % 2 == 1)
	j = i / 2 + 1;

	else
	j = i / 2;

   for (k = j; k < i; k++)
   {
	putchar(str[k]);
   }

	putchar('\n');
}
