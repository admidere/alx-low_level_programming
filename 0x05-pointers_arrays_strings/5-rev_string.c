#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints revers string
 * @s: parameter s
 * Return: nothing
 */

void rev_string(char *s)
{
	char tmp;
	int l; i; j;

	i = 0;
	j = 0;

	while(s[i] != '\0')
	i++;

	j = i - 1;
	for (l = 0; l < i / 2; l++)
	{
		tmp = s[l];
		s[l] = s[j];
		s[j] =tmp;
		j -= 1;
	}
}
