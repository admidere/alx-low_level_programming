#include <stdio.h>
#include "main.h"

/**
 *_puts - function prints a string
 * @str: string to print
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
