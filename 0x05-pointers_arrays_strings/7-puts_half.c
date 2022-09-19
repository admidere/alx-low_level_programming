#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half numbers
 * @str: string parameter
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j, n;

	i = strlen(str);
	if (i % 2 == 1)
	j = i / 2 + 1;

	else
	j = i / 2;

	for (n = j; n < i; n++)
	_putchar(str[n]);

	_putchar('\n');
}
